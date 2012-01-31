// -*- C++ -*-
//
// Package:    KinematicTau
// Class:      ThreeProngInputSelector_Step2
// 
/**
 * This framework module creates the appropriate input for the KinematicTauProducer.
 * In this case the tau decay tau->3pi+nu is assumed.
 * It creates a collection of reco::TrackRefVector of size 3 for each tau candidate and refits the primary vertex without tracks assigned already to the tau decay.
 * Part of the KinematicTau package.
 *
 * @author Lars Perchalla, Philip Sauerland
 * @date 2012
 */
//
// Original Author:  Lars Perchalla, Philip Sauerland
//         Created:  Thu Feb  18 13:25:12 CEST 2010
//
//


// system include files
#include <memory>
#include <fstream>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/TrackReco/interface/Track.h"
#include "DataFormats/TrackReco/interface/TrackFwd.h"

#include "DataFormats/TauReco/interface/PFTau.h"

#include "DataFormats/VertexReco/interface/Vertex.h"
#include "DataFormats/VertexReco/interface/VertexFwd.h"

#include "RecoTauTag/KinematicTau/interface/VertexRotation.h"

#include <TLorentzVector.h>
#include "RecoVertex/AdaptiveVertexFit/interface/AdaptiveVertexFitter.h"
#include <RecoVertex/KalmanVertexFit/interface/KalmanVertexFitter.h>

#include "TrackingTools/TransientTrack/interface/TransientTrackBuilder.h"
#include "TrackingTools/Records/interface/TransientTrackRecord.h"

#include "FWCore/MessageLogger/interface/MessageLogger.h"

typedef std::vector<std::vector<std::vector<reco::TrackRef> > > vVVTrackRef;
typedef std::vector<std::vector<reco::TrackRef> > vVTrackRef;

class ThreeProngInputSelector_Step2 : public edm::EDFilter {
public:
	explicit ThreeProngInputSelector_Step2(const edm::ParameterSet&);
	~ThreeProngInputSelector_Step2();
	
private:
	virtual void beginJob();
	virtual bool filter(edm::Event&, const edm::EventSetup&);
	virtual void endJob();
	bool sumCharge(std::vector<reco::TrackRef> &input);
	std::vector<reco::TransientTrack> convToTransTrck(std::vector<reco::TrackRef> &input);
	bool checkSecVtx(std::vector<reco::TransientTrack> &trkVct, TransientVertex & transVtx);
    bool select(std::vector<reco::TrackRefVector> & selected, reco::PFTauRefVector & taurefs, reco::VertexCollection & primaryVertex);
    bool choose3bestTracks(std::vector<reco::TrackRefVector> & selected, std::vector<std::vector<reco::TrackRef> > combis, const reco::Vertex & pVtx);
	
	edm::Event * iEvent_;
    edm::ParameterSet iConfig_;
	edm::InputTag threeProngCollectionTag_, selectedTauCandidatesTag_, primVtxTag_;
	unsigned int cnt_, cntFound_, minTau_, minVtxTracks_;
    double maxChi2ndf_;    

    edm::ESHandle<TransientTrackBuilder> transTrackBuilder_;

    
    template <typename T> double getInvariantMass(const T& tracks, const double mass = 0.140){//if second argument empty default pion is supposed
		double SumPx = 0;
		double SumPy = 0;
		double SumPz = 0;
		double SumE = 0;
		
		for(unsigned int i=0; i<tracks.size(); i++){
			SumPx += tracks[i]->px();
			SumPy += tracks[i]->py();
			SumPz += tracks[i]->pz();
			SumE += sqrt(pow(tracks[i]->p(),2)+pow(mass,2));
		}
		double invmass = sqrt(pow(SumE,2)-pow(SumPx,2)-pow(SumPy,2)-pow(SumPz,2));
		return invmass;
	}
	template <class T> TLorentzVector getSumTLorentzVec(const T& tracks, const double massConstraint){
		double sumPx=0, sumPy=0, sumPz=0;
		for(unsigned int i=0; i!= tracks.size(); i++){
			sumPx += tracks.at(i)->px();
			sumPy += tracks.at(i)->py();
			sumPz += tracks.at(i)->pz();
		}
		TLorentzVector lorentz;
		lorentz.SetXYZM(sumPx, sumPy, sumPz, massConstraint);
		
		return lorentz;
	}
	template <typename S, typename T> static bool pairSecond(const std::pair<S, T> &a, const std::pair<S, T> &b){
		return a.second < b.second;
	}
};
