#include "TauSpinerInterface.h"

//#include "HepMC/IO_GenEvent.h"
#include "Tauola.h"
#include "LHAPDF/LHAPDF.h"
#include "tau_reweight_lib.h"
#include "read_particles_from_TAUOLA.h"
#include<iostream>

TauSpinerInterface::TauSpinerInterface(){
  ////////////////////////////////////////////////////////////
  //
  // This class is based on TauSpiner Example
  Tauola::initialize();
  string name="MSTW2008nnlo90cl.LHgrid";
  LHAPDF::initPDFSetByName(name);
  double CMSENE = 7000.0; // center of mass system energy.
                          // used in PDF calculation. For pp collisions only
  bool Ipp = true;  // for pp collisions
  // Initialize TauSpinner
  initialize_spiner(Ipp, CMSENE);
}

TauSpinerInterface::~TauSpinerInterface(){

}

double TauSpinerInterface::Weight(TauSpinerType type, SimpleParticle X, SimpleParticle tau, std::vector<SimpleParticle> tau_daughters,SimpleParticle tau2, std::vector<SimpleParticle> tau_daughters2){
  double WT    = 1.0; // assume that there is 1 bosons decaying into                                                                                                                                                                        
  // Calculate weight for first boson
  if( abs(X.pdgid())==24 ||  abs(X.pdgid())==37 ){
    WT = calculateWeightFromParticlesWorHpn(X, tau, tau2, tau_daughters); // note that tau2 is tau neutrino 
  }
  else if( X.pdgid()==25 || X.pdgid()==36 || X.pdgid()==22 || X.pdgid()==23 ){
    WT = calculateWeightFromParticlesH(X, tau, tau2, tau_daughters,tau_daughters2);
  }
  else{
    cout<<"WARNING: Unexpected PDG for tau mother: "<<X.pdgid()<<endl;
  }
  if(Spin==type) return WT;
  if(UnSpin==type) return 1.0/WT;
  if(FlipSpin==type) return (2.0-WT)/(WT);
  std::cout << "Warning TauSpinerWeight TauSpinerType " << type << " is INVALID. Returning Spin WT=1.0." << std::endl;
  return 1.0;
}

