#include "RecoTauTag/KinematicTau/interface/KinematicTauCreator.h"


KinematicTauCreator::KinematicTauCreator(edm::ESHandle<TransientTrackBuilder>  &transTrackBuilder,edm::Handle<reco::GenParticleCollection> &GenPart_):
  modifiedPV_(),
  transientTrackBuilder_(transTrackBuilder),
  GenPart(GenPart_)
{
  kcvFitter_ = new NumericalKinematicConstrainedFitter();
  edm::ParameterSet defaultConfig;
  defaultConfig.addParameter("maxDelta", .001);
  defaultConfig.addParameter("maxNbrOfIterations", 1000);
  defaultConfig.addParameter("maxReducedChiSq", 500.0);
  defaultConfig.addParameter("minChiSqImprovement", 50.0);
  //kcvFitter_ = new KinematicParticleVertexFitter(defaultConfig);//new KinematicConstrainedVertexFitter();
  kcvFitter_->setParameters(defaultConfig);
  modifiedPV_ = reco::Vertex();
}

KinematicTauCreator::KinematicTauCreator(edm::ESHandle<TransientTrackBuilder>  &transTrackBuilder, const edm::ParameterSet& cfg,edm::Handle<reco::GenParticleCollection> &GenPart_):
  modifiedPV_(),
  transientTrackBuilder_(transTrackBuilder),
  GenPart(GenPart_)
{
  kcvFitter_ = new NumericalKinematicConstrainedFitter();
  kcvFitter_->setParameters(cfg);
}

KinematicTauCreator::~KinematicTauCreator()
{
  delete kcvFitter_;
}

reco::PFTau KinematicTauCreator::getPFTau() const
{
  math::XYZTLorentzVector ptau;
  for ( unsigned int i = 0; i < kinTree_->daughterParticles().size(); i++ ) {
    if (std::abs(int((kinTree_->daughterParticles().at(i))->currentState().particleCharge())) == 1) {
      ptau += math::XYZTLorentzVector((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().x(),
				      (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().y(),
				      (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().z(),
				      sqrt((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().mag2()+(kinTree_->daughterParticles().at(i))->currentState().mass()*(kinTree_->daughterParticles().at(i))->currentState().mass()));
    }
  }
  return reco::PFTau(int((kinTree_->topParticle()->currentState()).particleCharge()), ptau, modifiedPV_.position());
}

reco::PFTau KinematicTauCreator::getKinematicTau() const
{
  math::XYZTLorentzVector ptau(kinTree_->topParticle()->currentState().globalMomentum().x(),
			       kinTree_->topParticle()->currentState().globalMomentum().y(),
			       kinTree_->topParticle()->currentState().globalMomentum().z(),
			       sqrt(kinTree_->topParticle()->currentState().globalMomentum().mag2() + kinTree_->topParticle()->currentState().mass()*kinTree_->topParticle()->currentState().mass())
			       );    
  return reco::PFTau(int(kinTree_->topParticle()->currentState().particleCharge()), ptau, modifiedPV_.position());
}

std::vector<math::XYZTLorentzVector> KinematicTauCreator::getRefittedChargedDaughters() const
{
  std::vector<math::XYZTLorentzVector> tmpvec;
  for ( unsigned int i = 0; i < kinTree_->daughterParticles().size(); i++ ) {
    std::cout << "current  px " << (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().x()  
	      << " py " << (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().y()
	      << " pz " << (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().z()
	      << " m " << (kinTree_->daughterParticles().at(i))->currentState().mass() << std::endl;
    std::cout << "inital  px " << (kinTree_->daughterParticles().at(i))->initialState().globalMomentum().x()
              << " py " << (kinTree_->daughterParticles().at(i))->initialState().globalMomentum().y()
              << " pz " << (kinTree_->daughterParticles().at(i))->initialState().globalMomentum().z()
              << " m " << (kinTree_->daughterParticles().at(i))->initialState().mass() << std::endl;

    if (std::abs(int((kinTree_->daughterParticles().at(i))->currentState().particleCharge())) == 1) {
      tmpvec.push_back(math::XYZTLorentzVector((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().x(),
					       (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().y(),
					     (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().z(),
					       sqrt((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().mag2()+(kinTree_->daughterParticles().at(i))->currentState().mass()*(kinTree_->daughterParticles().at(i))->currentState().mass())));
    }
  }
  
  return tmpvec;
}

std::vector<math::XYZTLorentzVector> KinematicTauCreator::getRefittedNeutralDaughters() const
{
  std::vector<math::XYZTLorentzVector> tmpvec;
  for ( unsigned int i = 0; i < kinTree_->daughterParticles().size(); i++ ) {
    if (std::abs(int((kinTree_->daughterParticles().at(i))->currentState().particleCharge())) == 0) {
      tmpvec.push_back(math::XYZTLorentzVector((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().x(),
					       (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().y(),
					       (kinTree_->daughterParticles().at(i))->currentState().globalMomentum().z(),
					       sqrt((kinTree_->daughterParticles().at(i))->currentState().globalMomentum().mag2()+(kinTree_->daughterParticles().at(i))->currentState().mass()*(kinTree_->daughterParticles().at(i))->currentState().mass())));
    }
  }
  
  return tmpvec;
}

std::vector<reco::TrackRef> KinematicTauCreator::getSelectedTracks() const
{
  return selectedTracks_;
}


RefCountedKinematicTree KinematicTauCreator::getKinematicTree() const
{
  return kinTree_;
}
std::vector<RefCountedKinematicParticle> KinematicTauCreator::getPions() const
{
  return PostFitPions_;
}

reco::Vertex KinematicTauCreator::getModifiedPrimaryVertex() const
{
  if(!modifiedPV_.isValid()){
    LogTrace("KinematicTauCreator")<<"getModifiedPrimaryVertex: WARNING! Invalid vertex requested. The function create() has not yet stored a valid vertex.";
  }
  return modifiedPV_;
}

float KinematicTauCreator::chi2() const {
  return kinTree_->topParticle()->chiSquared();
}
