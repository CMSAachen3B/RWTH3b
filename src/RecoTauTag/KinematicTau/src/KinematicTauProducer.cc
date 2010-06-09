#include "RecoTauTag/KinematicTau/interface/KinematicTauProducer.h"

KinematicTauProducer::KinematicTauProducer(const edm::ParameterSet& iConfig):
fitParameters_( iConfig.getParameter<edm::ParameterSet>( "fitParameters" ) ),
primVtx_( iConfig.getParameter<edm::InputTag>( "primVtx" ) ),//primVtx from generalTracks
selectedTauCandidatesTag_( iConfig.getParameter<edm::InputTag>( "selectedTauCandidates" ) ),//only used to save number of tracks in signal cone of PFTau candidate
inputCollectionTag_( iConfig.getParameter<edm::InputTag>( "inputTracks" ) )
{
	produces<reco::PFTauCollection>();
	produces<reco::PFTauDiscriminator>("PFRecoTauDiscriminationByKinematicFit");
	produces<reco::PFTauDiscriminator>("PFRecoTauDiscriminationByKinematicFitQuality");
}

KinematicTauProducer::~KinematicTauProducer(){
}

// ------------ method called on each new Event  ------------
bool KinematicTauProducer::filter(edm::Event& iEvent, const edm::EventSetup& iSetup){
	bool filterValue = false;

	std::auto_ptr<reco::PFTauCollection> selected_ = std::auto_ptr<reco::PFTauCollection >(new reco::PFTauCollection);
	reco::PFTauCollection & selected = * selected_;
	
	iEvent_ = &iEvent;
	edm::Handle<reco::VertexCollection> primVtxs;
	iEvent_->getByLabel( primVtx_, primVtxs);

	std::map<int, std::vector<bool> > discrimValues;
	if(primVtxs->size()>=1){
		iSetup.get<TransientTrackRecord>().get("TransientTrackBuilder",transTrackBuilder_);
		const reco::Vertex primVtx = primVtxs->front();

		edm::Handle<InputTauCollection> usedTaus;
		iEvent_->getByLabel(selectedTauCandidatesTag_, usedTaus);
		selected.insert(selected.begin(), usedTaus->product()->begin(), usedTaus->product()->end());//make copy with unmodified 4vects
		filterValue = select(selected, discrimValues, primVtx);
	}
	
	edm::OrphanHandle<reco::PFTauCollection> orphanTaus = iEvent_->put(selected_);
	discriminate(orphanTaus, discrimValues);
	
	return filterValue;
}

void KinematicTauProducer::beginJob(){
}
void KinematicTauProducer::endJob(){
}

bool KinematicTauProducer::select(reco::PFTauCollection & selected, std::map<int, std::vector<bool> > & discrimValues, const reco::Vertex & primaryVtx){
	bool fullyDetermined = false;
	discrimValues.clear();
	
	edm::Handle<InputTrackCollection> inputCollection;
	iEvent_->getByLabel(inputCollectionTag_, inputCollection);
	edm::Handle<InputTauCollection> usedTaus;
	iEvent_->getByLabel(selectedTauCandidatesTag_, usedTaus);
	if(inputCollection->size() != usedTaus->size()){
		std::cout<<"KinematicTauProducer::select: Bad input collections. Size mismatch between "<<inputCollectionTag_.label()<<"("<<inputCollection->size()<<") and "<<selectedTauCandidatesTag_.label()<<"("<<usedTaus->size()<<")"<<std::endl;
		return false;
	}
	unsigned int index = 0;
	TransientTrackBuilder trkBuilder = *transTrackBuilder_;
	KinematicTauCreator *kinTauCrtr = new ThreeProngTauCreator(trkBuilder, fitParameters_);
	for(InputTrackCollection::const_iterator tracks = inputCollection->begin(); tracks != inputCollection->end(); ++tracks, ++index) {
		std::vector<reco::TrackRef> input;
		for(reco::TrackRefVector::iterator trk = tracks->begin(); trk!=tracks->end(); ++trk) input.push_back(*trk);
		int fitStatus = kinTauCrtr->create(primaryVtx, input);

		//save std::map<int, std::vector<bool> >, stores association between position in tauCollection and one bool for every discriminator
		reco::PFTauRef tauRef = usedTaus->at(index);
		discrimValues.insert(std::make_pair(tauRef.index(), std::vector<bool>()));
		discrimValues.find(tauRef.index())->second.push_back(dicriminatorByKinematicFit(kinTauCrtr));
		discrimValues.find(tauRef.index())->second.push_back(dicriminatorByKinematicFitQuality(kinTauCrtr));
		
		if(fitStatus==1){
			reco::PFTau refitPFTau = kinTauCrtr->getPFTau();
			selected.at(tauRef.index()).setP4(refitPFTau.p4());//modify tau in selected list
		}
	}
	
	delete kinTauCrtr;
	
	return fullyDetermined;
}
bool KinematicTauProducer::dicriminatorByKinematicFit(const KinematicTauCreator *kinTauCrtr){
	return true;
}
bool KinematicTauProducer::dicriminatorByKinematicFitQuality(const KinematicTauCreator *kinTauCrtr){
	return false;
}
void KinematicTauProducer::discriminate(const edm::OrphanHandle<reco::PFTauCollection> & collection, const std::map<int, std::vector<bool> > & discrimValues){
	std::auto_ptr<reco::PFTauDiscriminator> discrKinFit = std::auto_ptr<reco::PFTauDiscriminator>(new reco::PFTauDiscriminator(reco::PFTauRefProd(collection)));
	std::auto_ptr<reco::PFTauDiscriminator> discrKinFitQual = std::auto_ptr<reco::PFTauDiscriminator>(new reco::PFTauDiscriminator(reco::PFTauRefProd(collection)));
		
	for(std::map<int, std::vector<bool> >::const_iterator iter = discrimValues.begin(); iter != discrimValues.end(); ++iter){
		reco::PFTauRef tauRef(collection, iter->first);
		if(iter->second.size() < 2){
			printf("KinematicTauProducer::discriminate: ERROR! Bad discriminator size. This tau will be skipped.");
			continue;
		}
		discrKinFit->setValue(iter->first, iter->second.at(0));
		discrKinFitQual->setValue(iter->first, iter->second.at(1));
		std::cout<<"tau at "<<iter->first<<": "<<(*discrKinFit)[tauRef]<<", "<<(*discrKinFitQual)[tauRef]<<std::endl;
	}
	
	iEvent_->put(discrKinFit, "PFRecoTauDiscriminationByKinematicFit");
	iEvent_->put(discrKinFitQual, "PFRecoTauDiscriminationByKinematicFitQuality");
	
}

//define this as a plug-in
DEFINE_FWK_MODULE(KinematicTauProducer);
