// -*- C++ -*-
//
// Package:    KinematicTau
// Class:      KinematicTauSkim
// 
/**\class KinematicTauSkim KinematicTauSkim.cc RecoTauTag/KinematicTauSkim/src/KinematicTauSkim.cc
 
 Description: Skim events containing at least one kinematic tau which passed the required quality discriminator
 */

#include <memory>

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDFilter.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"

class KinematicTauSkim : public edm::EDFilter {
public:
  explicit KinematicTauSkim(const edm::ParameterSet&);
  ~KinematicTauSkim();
	
private:
  virtual void beginJob() ;
  virtual bool filter(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;
  
  std::vector<std::string> discriminators_;
  edm::InputTag KinematicFitTauTag_;
  unsigned int minTau_, cnt_, cntFound_;	
};
