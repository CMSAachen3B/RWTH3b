//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Mar 26 09:57:39 2013 by ROOT version 5.34/05
// from TChain t/
//////////////////////////////////////////////////////////

#ifndef NtupleReader_h
#define NtupleReader_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>
#include <vector>

// Fixed size dimensions of array or collections stored in the TTree if any.

class NtupleReader {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          DataMC_Type;
   std::vector<float>   *Vtx_chi2;
   std::vector<float>   *Vtx_nTrk;
   std::vector<float>   *Vtx_ndof;
   std::vector<float>   *Vtx_x;
   std::vector<float>   *Vtx_y;
   std::vector<float>   *Vtx_z;
   std::vector<std::vector<std::vector<float> > > *Vtx_Cov;
   std::vector<std::vector<int> > *Vtx_Track_idx;
   std::vector<std::vector<float> > *Vtx_Track_Weights;
   std::vector<float>   *Vtx_isFake;
   std::vector<std::vector<std::vector<float> > > *Vtx_TracksP4;
   Bool_t          isPatMuon;
   std::vector<std::vector<float> > *Muon_p4;
   std::vector<std::vector<float> > *Muon_Poca;
   std::vector<bool>    *Muon_isGlobalMuon;
   std::vector<bool>    *Muon_isStandAloneMuon;
   std::vector<bool>    *Muon_isTrackerMuon;
   std::vector<bool>    *Muon_isCaloMuon;
   std::vector<bool>    *Muon_isIsolationValid;
   std::vector<bool>    *Muon_isQualityValid;
   std::vector<bool>    *Muon_isTimeValid;
   std::vector<float>   *Muon_emEt03;
   std::vector<float>   *Muon_emVetoEt03;
   std::vector<float>   *Muon_hadEt03;
   std::vector<float>   *Muon_hadVetoEt03;
   std::vector<float>   *Muon_nJets03;
   std::vector<float>   *Muon_nTracks03;
   std::vector<float>   *Muon_sumPt03;
   std::vector<float>   *Muon_trackerVetoPt03;
   std::vector<float>   *Muon_emEt05;
   std::vector<float>   *Muon_emVetoEt05;
   std::vector<float>   *Muon_hadEt05;
   std::vector<float>   *Muon_hadVetoEt05;
   std::vector<float>   *Muon_nJets05;
   std::vector<float>   *Muon_nTracks05;
   std::vector<float>   *Muon_sumPt05;
   std::vector<float>   *Muon_trackerVetoPt05;
   std::vector<float>   *Muon_sumChargedHadronPt03;
   std::vector<float>   *Muon_sumChargedParticlePt03;
   std::vector<float>   *Muon_sumNeutralHadronEt03;
   std::vector<float>   *Muon_sumNeutralHadronEtHighThreshold03;
   std::vector<float>   *Muon_sumPhotonEt03;
   std::vector<float>   *Muon_sumPhotonEtHighThreshold03;
   std::vector<float>   *Muon_sumPUPt03;
   std::vector<float>   *Muon_sumChargedHadronPt04;
   std::vector<float>   *Muon_sumChargedParticlePt04;
   std::vector<float>   *Muon_sumNeutralHadronEt04;
   std::vector<float>   *Muon_sumNeutralHadronEtHighThreshold04;
   std::vector<float>   *Muon_sumPhotonEt04;
   std::vector<float>   *Muon_sumPhotonEtHighThreshold04;
   std::vector<float>   *Muon_sumPUPt04;
   std::vector<unsigned int> *Muon_Track_idx;
   std::vector<float>   *Muon_hitPattern_pixelLayerwithMeas;
   std::vector<float>   *Muon_numberOfMatchedStations;
   std::vector<float>   *Muon_normChi2;
   std::vector<float>   *Muon_hitPattern_numberOfValidMuonHits;
   std::vector<float>   *Muon_innerTrack_numberofValidHits;
   std::vector<float>   *Muon_numberOfMatches;
   std::vector<int>     *Muon_Charge;
   std::vector<int>     *Muon_numberOfChambers;
   std::vector<bool>    *Muon_isPFMuon;
   std::vector<int>     *Muon_numberofValidPixelHits;
   std::vector<int>     *Muon_trackerLayersWithMeasurement;
   Bool_t          isPatElectron;
   std::vector<std::vector<float> > *Electron_p4;
   std::vector<std::vector<float> > *Electron_Poca;
   std::vector<float>   *Electron_Charge;
   std::vector<float>   *Electron_Gsf_deltaEtaEleClusterTrackAtCalo;
   std::vector<float>   *Electron_Gsf_deltaEtaSeedClusterTrackAtCalo;
   std::vector<float>   *Electron_Gsf_deltaEtaSuperClusterTrackAtVtx;
   std::vector<float>   *Electron_Gsf_deltaPhiEleClusterTrackAtCalo;
   std::vector<float>   *Electron_Gsf_deltaPhiSeedClusterTrackAtCalo;
   std::vector<float>   *Electron_Gsf_deltaPhiSuperClusterTrackAtVtx;
   std::vector<float>   *Electron_Gsf_dr03EcalRecHitSumE;
   std::vector<float>   *Electron_Gsf_dr03HcalDepth1TowerSumEt;
   std::vector<float>   *Electron_Gsf_dr03HcalDepth1TowerSumEtBc;
   std::vector<float>   *Electron_Gsf_dr03HcalDepth2TowerSumEt;
   std::vector<float>   *Electron_Gsf_dr03HcalDepth2TowerSumEtBc;
   std::vector<float>   *Electron_Gsf_dr03HcalTowerSumEt;
   std::vector<float>   *Electron_Gsf_dr03HcalTowerSumEtBc;
   std::vector<float>   *Electron_Gsf_dr03TkSumPt;
   std::vector<bool>    *Electron_Gsf_passingCutBasedPreselection;
   std::vector<bool>    *Electron_Gsf_passingMvaPreselection;
   std::vector<int>     *Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits;
   std::vector<float>   *Electron_supercluster_e;
   std::vector<float>   *Electron_supercluster_phi;
   std::vector<float>   *Electron_supercluster_eta;
   std::vector<float>   *Electron_supercluster_centroid_x;
   std::vector<float>   *Electron_supercluster_centroid_y;
   std::vector<float>   *Electron_supercluster_centroid_z;
   std::vector<unsigned int> *Electron_Track_idx;
   std::vector<float>   *Electron_ecalRecHitSumEt03;
   std::vector<float>   *Electron_hcalDepth1TowerSumEt03;
   std::vector<float>   *Electron_hcalDepth1TowerSumEtBc03;
   std::vector<float>   *Electron_hcalDepth2TowerSumEt03;
   std::vector<float>   *Electron_hcalDepth2TowerSumEtBc03;
   std::vector<float>   *Electron_tkSumPt03;
   std::vector<float>   *Electron_ecalRecHitSumEt04;
   std::vector<float>   *Electron_hcalDepth1TowerSumEt04;
   std::vector<float>   *Electron_hcalDepth1TowerSumEtBc04;
   std::vector<float>   *Electron_hcalDepth2TowerSumEt04;
   std::vector<float>   *Electron_hcalDepth2TowerSumEtBc04;
   std::vector<float>   *Electron_tkSumPt04;
   std::vector<float>   *Electron_chargedHadronIso;
   std::vector<float>   *Electron_neutralHadronIso;
   std::vector<float>   *Electron_photonIso;
   std::vector<float>   *Electron_sigmaIetaIeta;
   std::vector<float>   *Electron_hadronicOverEm;
   std::vector<float>   *Electron_fbrem;
   std::vector<float>   *Electron_eSuperClusterOverP;
   std::vector<float>   *Electron_ecalEnergy;
   std::vector<float>   *Electron_trackMomentumAtVtx;
   std::vector<float>   *Electron_numberOfMissedHits;
   std::vector<bool>    *Electron_HasMatchedConversions;
   Double_t        RhoIsolationAllInputTags;
   std::vector<float>   *Electron_Track_dR;
   std::vector<float>   *Electron_MVA_discriminator;
   std::vector<std::vector<float> > *PFTau_p4;
   std::vector<std::vector<float> > *PFTau_Poca;
   std::vector<bool>    *PFTau_isTightIsolation;
   std::vector<bool>    *PFTau_isMediumIsolation;
   std::vector<bool>    *PFTau_isLooseIsolation;
   std::vector<bool>    *PFTau_isTightIsolationDBSumPtCorr;
   std::vector<bool>    *PFTau_isMediumIsolationDBSumPtCorr;
   std::vector<bool>    *PFTau_isLooseIsolationDBSumPtCorr;
   std::vector<bool>    *PFTau_isVLooseIsolationDBSumPtCorr;
   std::vector<bool>    *PFTau_isHPSAgainstElectronsLoose;
   std::vector<bool>    *PFTau_isHPSAgainstElectronsMedium;
   std::vector<bool>    *PFTau_isHPSAgainstElectronsTight;
   std::vector<bool>    *PFTau_isHPSAgainstMuonLoose;
   std::vector<bool>    *PFTau_isHPSAgainstMuonMedium;
   std::vector<bool>    *PFTau_isHPSAgainstMuonTight;
   std::vector<bool>    *PFTau_isHPSAgainstMuonLoose2;
   std::vector<bool>    *PFTau_isHPSAgainstMuonMedium2;
   std::vector<bool>    *PFTau_isHPSAgainstMuonTight2;
   std::vector<bool>    *PFTau_isHPSByDecayModeFinding;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByLooseIsolationMVA;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMediumIsolationMVA;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByTightIsolationMVA;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2;
   std::vector<bool>    *PFTau_HPSPFTauDiscriminationByTightIsolationMVA2;
   std::vector<int>     *PFTau_hpsDecayMode;
   std::vector<int>     *PFTau_Charge;
   std::vector<std::vector<int> > *PFTau_Track_idx;
   std::vector<std::vector<int> > *KFTau_discriminatorByKFit;
   std::vector<std::vector<int> > *KFTau_discriminatorByQC;
   Int_t           KFTau_nKinTaus;
   std::vector<std::vector<float> > *KFTau_TauFitInitial_p4;
   std::vector<std::vector<float> > *KFTau_NeutrinoInitial_p4;
   std::vector<std::vector<float> > *KFTau_a1Initial_p4;
   std::vector<std::vector<std::vector<float> > > *KFTau_pions;
   std::vector<std::vector<std::vector<float> > > *KFTau_Initial_pions;
   std::vector<std::vector<float> > *KFTau_Fit_PrimaryVertex;
   std::vector<std::vector<float> > *KFTau_Fit_InitialPrimaryVertex;
   std::vector<std::vector<float> > *KFTau_Fit_InitialPrimaryVertexReFit;
   std::vector<std::vector<float> > *KFTau_Fit_SecondaryVertex;
   std::vector<std::vector<float> > *KFTau_Fit_InitialSecondaryVertex;
   std::vector<std::vector<float> > *KFTau_Fit_Chi2Prob;
   std::vector<std::vector<float> > *KFTau_TauVis_p4;
   std::vector<std::vector<float> > *KFTau_TauFit_p4;
   std::vector<std::vector<float> > *KFTau_Neutrino_p4;
   std::vector<unsigned int> *KFTau_MatchedHPS_idx;
   std::vector<std::vector<int> > *KFTau_Track_idx;
   std::vector<int>     *KFTau_indexOfFitInfo;
   std::vector<std::vector<float> > *KFTau_Fit_TauPrimVtx;
   std::vector<std::vector<float> > *KFTau_Fit_chi2;
   std::vector<std::vector<float> > *KFTau_Fit_ndf;
   std::vector<int>     *KFTau_Fit_charge;
   std::vector<std::vector<int> > *KFTau_Fit_csum;
   std::vector<std::vector<int> > *KFTau_Fit_iterations;
   std::vector<std::vector<float> > *KFTau_Fit_BDTVal;
   std::vector<std::vector<float> > *KFTau_Fit_TauEnergyFraction;
   std::vector<std::vector<float> > *KFTau_Fit_RefitVisibleMass;
   //std::vector<std::vector<float> > *KFTau_Fit_Chi2Prob;
   std::vector<std::vector<float> > *KFTau_Fit_PV_PV_significance;
   std::vector<std::vector<float> > *KFTau_Fit_SV_PV_significance;
   std::vector<std::vector<int> > *KFTau_Daughter_pdgid;
   std::vector<std::vector<int> > *KFTau_Daughter_charge;
   std::vector<std::vector<float> > *KFTau_Daughter_ambiguity;
   std::vector<std::vector<std::vector<float> > > *KFTau_Daughter_par;
   std::vector<std::vector<std::vector<float> > > *KFTau_Daughter_parCov;
   std::vector<std::vector<std::vector<float> > > *KFTau_Daughter_inputpar;
   std::vector<std::vector<std::vector<float> > > *KFTau_Daughter_inputparCov;
   std::vector<float>   *ReducedVtx_chi2;
   std::vector<float>   *ReducedVtx_nTrk;
   std::vector<float>   *ReducedVtx_ndof;
   std::vector<float>   *ReducedVtx_x;
   std::vector<float>   *ReducedVtx_y;
   std::vector<float>   *ReducedVtx_z;
   std::vector<std::vector<std::vector<float> > > *ReducedVtx_Cov;
   std::vector<std::vector<int> > *ReducedVtx_Track_idx;
   std::vector<float>   *ReducedVtx_isFake;
   Bool_t          isPatJet;
   std::vector<std::vector<float> > *PFJet_p4;
   std::vector<std::vector<float> > *PFJet_Poca;
   std::vector<float>   *PFJet_chargedEmEnergy;
   std::vector<float>   *PFJet_chargedHadronEnergy;
   std::vector<float>   *PFJet_chargedHadronMultiplicity;
   std::vector<float>   *PFJet_chargedMuEnergy;
   std::vector<float>   *PFJet_chargedMultiplicity;
   std::vector<float>   *PFJet_electronEnergy;
   std::vector<float>   *PFJet_electronMultiplicity;
   std::vector<float>   *PFJet_HFEMEnergy;
   std::vector<float>   *PFJet_HFEMMultiplicity;
   std::vector<float>   *PFJet_HFHadronEnergy;
   std::vector<float>   *PFJet_HFHadronMultiplicity;
   std::vector<float>   *PFJet_muonEnergy;
   std::vector<float>   *PFJet_muonMultiplicity;
   std::vector<float>   *PFJet_neutralEmEnergy;
   std::vector<float>   *PFJet_neutralHadronEnergy;
   std::vector<float>   *PFJet_neutralHadronMultiplicity;
   std::vector<float>   *PFJet_photonEnergy;
   std::vector<float>   *PFJet_photonMultiplicity;
   std::vector<float>   *PFJet_jetArea;
   std::vector<float>   *PFJet_maxDistance;
   std::vector<int>     *PFJet_nConstituents;
   std::vector<float>   *PFJet_pileup;
   std::vector<float>   *PFJet_etaetaMoment;
   std::vector<float>   *PFJet_etaphiMoment;
   std::vector<std::vector<int> > *PFJet_Track_idx;
   std::vector<unsigned int> *PFJet_MatchedHPS_idx;
   std::vector<int>     *PFJet_numberOfDaughters;
   std::vector<float>   *PFJet_chargedEmEnergyFraction;
   std::vector<float>   *PFJet_chargedHadronEnergyFraction;
   std::vector<float>   *PFJet_neutralHadronEnergyFraction;
   std::vector<float>   *PFJet_neutralEmEnergyFraction;
   std::vector<float>   *PFJet_partonFlavour;
   std::vector<float>   *PFJet_bDiscriminator;
   std::vector<std::vector<float> > *PFJet_BTagWeight;
   std::vector<std::vector<std::vector<float> > > *PFJet_TracksP4;
   std::vector<float>   *PFJet_nTrk;
   Bool_t          isPatMET;
   Float_t         MET_et;
   Float_t         MET_pt;
   Float_t         MET_phi;
   Float_t         MET_sumET;
   Float_t         MET_metSignificance;
   Float_t         MET_MuonEtFraction;
   Float_t         MET_NeutralEMFraction;
   Float_t         MET_NeutralHadEtFraction;
   Float_t         MET_Type6EtFraction;
   Float_t         MET_Type7EtFraction;
   Float_t         MET_Corr_et;
   Float_t         MET_Corr_pt;
   Float_t         MET_Corr_phi;
   Float_t         MET_Corr_SumET;
   UInt_t          Event_EventNumber;
   UInt_t          Event_RunNumber;
   Int_t           Event_bunchCrossing;
   Int_t           Event_orbitNumber;
   UInt_t          Event_luminosityBlock;
   Bool_t          Event_isRealData;
   Int_t           PileupInfo_NumInteractions_nm1;
   Int_t           PileupInfo_NumInteractions_n0;
   Int_t           PileupInfo_NumInteractions_np1;
   Float_t         EvtWeight3D;
   Double_t        TauSpinnerWeight;
   Double_t        SelEffWeight;
   Double_t        RadiationCorrWeight;
   Double_t        MinVisPtFilter;
   Double_t        KinWeightPt;
   Double_t        KinWeightEta;
   Double_t        KinWeightMassPt;
   Double_t        EmbeddedWeight;
   std::vector<std::vector<float> > *Track_p4;
   std::vector<std::vector<float> > *Track_Poca;
   std::vector<int>     *Track_charge;
   std::vector<float>   *Track_chi2;
   std::vector<float>   *Track_ndof;
   std::vector<unsigned short> *Track_numberOfLostHits;
   std::vector<unsigned short> *Track_numberOfValidHits;
   std::vector<unsigned int> *Track_qualityMask;
   std::vector<std::vector<float> > *Track_par;
   std::vector<std::vector<std::vector<float> > > *Track_parCov;
   Float_t         GenEventInfoProduct_signalProcessID;
   Float_t         GenEventInfoProduct_weight;
   std::vector<double>  *GenEventInfoProduct_weights;
   Float_t         GenEventInfoProduct_qScale;
   Float_t         GenEventInfoProduct_alphaQED;
   Float_t         GenEventInfoProduct_alphaQCD;
   std::vector<std::vector<float> > *MC_p4;
   std::vector<int>     *MC_pdgid;
   std::vector<int>     *MC_charge;
   std::vector<unsigned int> *MC_midx;
   std::vector<std::vector<int> > *MC_childpdgid;
   std::vector<std::vector<float> > *MCSignalParticle_p4;
   std::vector<int>     *MCSignalParticle_pdgid;
   std::vector<int>     *MCSignalParticle_charge;
   std::vector<std::vector<float> > *MCSignalParticle_Poca;
   std::vector<std::vector<unsigned int> > *MCSignalParticle_Tauidx;
   std::vector<std::vector<std::vector<float> > > *MCTauandProd_p4;
   std::vector<std::vector<std::vector<float> > > *MCTauandProd_Vertex;
   std::vector<std::vector<int> > *MCTauandProd_pdgid;
   std::vector<std::vector<unsigned int> > *MCTauandProd_midx;
   std::vector<std::vector<int> > *MCTauandProd_charge;
   std::vector<unsigned int> *MCTau_JAK;
   std::vector<unsigned int> *MCTau_DecayBitMask;
   std::vector<std::string>  *HTLTriggerName;
   std::vector<bool>    *TriggerAccept;
   std::vector<bool>    *TriggerError;
   std::vector<bool>    *TriggerWasRun;
   std::vector<unsigned int> *HLTPrescale;
   std::vector<unsigned int> *NHLTL1GTSeeds;
   std::vector<unsigned int> *L1SEEDPrescale;
   std::vector<bool>    *L1SEEDInvalidPrescale;
   std::vector<unsigned int> *L1SEEDisTechBit;
   std::vector<std::vector<float> > *MuonTriggerMatch;
   std::vector<std::vector<float> > *ElectronTriggerMatch;
   std::vector<std::vector<float> > *JetTriggerMatch;
   std::vector<std::vector<float> > *TauTriggerMatch;
   std::vector<std::vector<float> > *HLTTrigger_objs_Pt;
   std::vector<std::vector<float> > *HLTTrigger_objs_Eta;
   std::vector<std::vector<float> > *HLTTrigger_objs_Phi;
   std::vector<std::string>  *L1TriggerName;
   std::vector<bool>    *L1TriggerDecision;
   std::vector<int>     *L1ErrorCode;
   std::vector<unsigned int> *L1Prescale;

   // List of branches
   TBranch        *b_DataMC_Type;   //!
   TBranch        *b_Vtx_chi2;   //!
   TBranch        *b_Vtx_nTrk;   //!
   TBranch        *b_Vtx_ndof;   //!
   TBranch        *b_Vtx_x;   //!
   TBranch        *b_Vtx_y;   //!
   TBranch        *b_Vtx_z;   //!
   TBranch        *b_Vtx_Cov;   //!
   TBranch        *b_Vtx_Track_idx;   //!
   TBranch        *b_Vtx_Track_Weights;   //!
   TBranch        *b_Vtx_isFake;   //!
   TBranch        *b_Vtx_TracksP4;   //!
   TBranch        *b_isPatMuon;   //!
   TBranch        *b_Muon_p4;   //!
   TBranch        *b_Muon_Poca;   //!
   TBranch        *b_Muon_isGlobalMuon;   //!
   TBranch        *b_Muon_isStandAloneMuon;   //!
   TBranch        *b_Muon_isTrackerMuon;   //!
   TBranch        *b_Muon_isCaloMuon;   //!
   TBranch        *b_Muon_isIsolationValid;   //!
   TBranch        *b_Muon_isQualityValid;   //!
   TBranch        *b_Muon_isTimeValid;   //!
   TBranch        *b_Muon_emEt03;   //!
   TBranch        *b_Muon_emVetoEt03;   //!
   TBranch        *b_Muon_hadEt03;   //!
   TBranch        *b_Muon_hadVetoEt03;   //!
   TBranch        *b_Muon_nJets03;   //!
   TBranch        *b_Muon_nTracks03;   //!
   TBranch        *b_Muon_sumPt03;   //!
   TBranch        *b_Muon_trackerVetoPt03;   //!
   TBranch        *b_Muon_emEt05;   //!
   TBranch        *b_Muon_emVetoEt05;   //!
   TBranch        *b_Muon_hadEt05;   //!
   TBranch        *b_Muon_hadVetoEt05;   //!
   TBranch        *b_Muon_nJets05;   //!
   TBranch        *b_Muon_nTracks05;   //!
   TBranch        *b_Muon_sumPt05;   //!
   TBranch        *b_Muon_trackerVetoPt05;   //!
   TBranch        *b_Muon_sumChargedHadronPt03;   //!
   TBranch        *b_Muon_sumChargedParticlePt03;   //!
   TBranch        *b_Muon_sumNeutralHadronEt03;   //!
   TBranch        *b_Muon_sumNeutralHadronEtHighThreshold03;   //!
   TBranch        *b_Muon_sumPhotonEt03;   //!
   TBranch        *b_Muon_sumPhotonEtHighThreshold03;   //!
   TBranch        *b_Muon_sumPUPt03;   //!
   TBranch        *b_Muon_sumChargedHadronPt04;   //!
   TBranch        *b_Muon_sumChargedParticlePt04;   //!
   TBranch        *b_Muon_sumNeutralHadronEt04;   //!
   TBranch        *b_Muon_sumNeutralHadronEtHighThreshold04;   //!
   TBranch        *b_Muon_sumPhotonEt04;   //!
   TBranch        *b_Muon_sumPhotonEtHighThreshold04;   //!
   TBranch        *b_Muon_sumPUPt04;   //!
   TBranch        *b_Muon_Track_idx;   //!
   TBranch        *b_Muon_hitPattern_pixelLayerwithMeas;   //!
   TBranch        *b_Muon_numberOfMatchedStations;   //!
   TBranch        *b_Muon_normChi2;   //!
   TBranch        *b_Muon_hitPattern_numberOfValidMuonHits;   //!
   TBranch        *b_Muon_innerTrack_numberofValidHits;   //!
   TBranch        *b_Muon_numberOfMatches;   //!
   TBranch        *b_Muon_Charge;   //!
   TBranch        *b_Muon_numberOfChambers;   //!
   TBranch        *b_Muon_isPFMuon;   //!
   TBranch        *b_Muon_numberofValidPixelHits;   //!
   TBranch        *b_Muon_trackerLayersWithMeasurement;   //!
   TBranch        *b_isPatElectron;   //!
   TBranch        *b_Electron_p4;   //!
   TBranch        *b_Electron_Poca;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_Gsf_deltaEtaEleClusterTrackAtCalo;   //!
   TBranch        *b_Electron_Gsf_deltaEtaSeedClusterTrackAtCalo;   //!
   TBranch        *b_Electron_Gsf_deltaEtaSuperClusterTrackAtVtx;   //!
   TBranch        *b_Electron_Gsf_deltaPhiEleClusterTrackAtCalo;   //!
   TBranch        *b_Electron_Gsf_deltaPhiSeedClusterTrackAtCalo;   //!
   TBranch        *b_Electron_Gsf_deltaPhiSuperClusterTrackAtVtx;   //!
   TBranch        *b_Electron_Gsf_dr03EcalRecHitSumE;   //!
   TBranch        *b_Electron_Gsf_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_Electron_Gsf_dr03HcalDepth1TowerSumEtBc;   //!
   TBranch        *b_Electron_Gsf_dr03HcalDepth2TowerSumEt;   //!
   TBranch        *b_Electron_Gsf_dr03HcalDepth2TowerSumEtBc;   //!
   TBranch        *b_Electron_Gsf_dr03HcalTowerSumEt;   //!
   TBranch        *b_Electron_Gsf_dr03HcalTowerSumEtBc;   //!
   TBranch        *b_Electron_Gsf_dr03TkSumPt;   //!
   TBranch        *b_Electron_Gsf_passingCutBasedPreselection;   //!
   TBranch        *b_Electron_Gsf_passingMvaPreselection;   //!
   TBranch        *b_Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits;   //!
   TBranch        *b_Electron_supercluster_e;   //!
   TBranch        *b_Electron_supercluster_phi;   //!
   TBranch        *b_Electron_supercluster_eta;   //!
   TBranch        *b_Electron_supercluster_centroid_x;   //!
   TBranch        *b_Electron_supercluster_centroid_y;   //!
   TBranch        *b_Electron_supercluster_centroid_z;   //!
   TBranch        *b_Electron_Track_idx;   //!
   TBranch        *b_Electron_ecalRecHitSumEt03;   //!
   TBranch        *b_Electron_hcalDepth1TowerSumEt03;   //!
   TBranch        *b_Electron_hcalDepth1TowerSumEtBc03;   //!
   TBranch        *b_Electron_hcalDepth2TowerSumEt03;   //!
   TBranch        *b_Electron_hcalDepth2TowerSumEtBc03;   //!
   TBranch        *b_Electron_tkSumPt03;   //!
   TBranch        *b_Electron_ecalRecHitSumEt04;   //!
   TBranch        *b_Electron_hcalDepth1TowerSumEt04;   //!
   TBranch        *b_Electron_hcalDepth1TowerSumEtBc04;   //!
   TBranch        *b_Electron_hcalDepth2TowerSumEt04;   //!
   TBranch        *b_Electron_hcalDepth2TowerSumEtBc04;   //!
   TBranch        *b_Electron_tkSumPt04;   //!
   TBranch        *b_Electron_chargedHadronIso;   //!
   TBranch        *b_Electron_neutralHadronIso;   //!
   TBranch        *b_Electron_photonIso;   //!
   TBranch        *b_Electron_sigmaIetaIeta;   //!
   TBranch        *b_Electron_hadronicOverEm;   //!
   TBranch        *b_Electron_fbrem;   //!
   TBranch        *b_Electron_eSuperClusterOverP;   //!
   TBranch        *b_Electron_ecalEnergy;   //!
   TBranch        *b_Electron_trackMomentumAtVtx;   //!
   TBranch        *b_Electron_numberOfMissedHits;   //!
   TBranch        *b_Electron_HasMatchedConversions;   //!
   TBranch        *b_RhoIsolationAllInputTags;   //!
   TBranch        *b_Electron_Track_dR;   //!
   TBranch        *b_Electron_MVA_discriminator;   //!
   TBranch        *b_PFTau_p4;   //!
   TBranch        *b_PFTau_Poca;   //!
   TBranch        *b_PFTau_isTightIsolation;   //!
   TBranch        *b_PFTau_isMediumIsolation;   //!
   TBranch        *b_PFTau_isLooseIsolation;   //!
   TBranch        *b_PFTau_isTightIsolationDBSumPtCorr;   //!
   TBranch        *b_PFTau_isMediumIsolationDBSumPtCorr;   //!
   TBranch        *b_PFTau_isLooseIsolationDBSumPtCorr;   //!
   TBranch        *b_PFTau_isVLooseIsolationDBSumPtCorr;   //!
   TBranch        *b_PFTau_isHPSAgainstElectronsLoose;   //!
   TBranch        *b_PFTau_isHPSAgainstElectronsMedium;   //!
   TBranch        *b_PFTau_isHPSAgainstElectronsTight;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonLoose;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonMedium;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonTight;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonLoose2;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonMedium2;   //!
   TBranch        *b_PFTau_isHPSAgainstMuonTight2;   //!
   TBranch        *b_PFTau_isHPSByDecayModeFinding;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByLooseIsolationMVA;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMediumIsolationMVA;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByTightIsolationMVA;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2;   //!
   TBranch        *b_PFTau_HPSPFTauDiscriminationByTightIsolationMVA2;   //!
   TBranch        *b_PFTau_hpsDecayMode;   //!
   TBranch        *b_PFTau_Charge;   //!
   TBranch        *b_PFTau_Track_idx;   //!
   TBranch        *b_KFTau_discriminatorByKFit;   //!
   TBranch        *b_KFTau_discriminatorByQC;   //!
   TBranch        *b_KFTau_nKinTaus;   //!
   TBranch        *b_KFTau_TauFitInitial_p4;   //!
   TBranch        *b_KFTau_NeutrinoInitial_p4;   //!
   TBranch        *b_KFTau_a1Initial_p4;   //!
   TBranch        *b_KFTau_pions;   //!
   TBranch        *b_KFTau_Initial_pions;   //!
   TBranch        *b_KFTau_Fit_PrimaryVertex;   //!
   TBranch        *b_KFTau_Fit_InitialPrimaryVertex;   //!
   TBranch        *b_KFTau_Fit_InitialPrimaryVertexReFit;   //!
   TBranch        *b_KFTau_Fit_SecondaryVertex;   //!
   TBranch        *b_KFTau_Fit_InitialSecondaryVertex;   //!
   TBranch        *b_KFTau_Fit_Chi2Prob;   //!
   TBranch        *b_KFTau_TauVis_p4;   //!
   TBranch        *b_KFTau_TauFit_p4;   //!
   TBranch        *b_KFTau_Neutrino_p4;   //!
   TBranch        *b_KFTau_MatchedHPS_idx;   //!
   TBranch        *b_KFTau_Track_idx;   //!
   TBranch        *b_KFTau_indexOfFitInfo;   //!
   TBranch        *b_KFTau_Fit_TauPrimVtx;   //!
   TBranch        *b_KFTau_Fit_chi2;   //!
   TBranch        *b_KFTau_Fit_ndf;   //!
   TBranch        *b_KFTau_Fit_charge;   //!
   TBranch        *b_KFTau_Fit_csum;   //!
   TBranch        *b_KFTau_Fit_iterations;   //!
   TBranch        *b_KFTau_Fit_BDTVal;   //!
   TBranch        *b_KFTau_Fit_TauEnergyFraction;   //!
   TBranch        *b_KFTau_Fit_RefitVisibleMass;   //!
   //TBranch        *b_KFTau_Fit_Chi2Prob;   //!
   TBranch        *b_KFTau_Fit_PV_PV_significance;   //!
   TBranch        *b_KFTau_Fit_SV_PV_significance;   //!
   TBranch        *b_KFTau_Daughter_pdgid;   //!
   TBranch        *b_KFTau_Daughter_charge;   //!
   TBranch        *b_KFTau_Daughter_ambiguity;   //!
   TBranch        *b_KFTau_Daughter_par;   //!
   TBranch        *b_KFTau_Daughter_parCov;   //!
   TBranch        *b_KFTau_Daughter_inputpar;   //!
   TBranch        *b_KFTau_Daughter_inputparCov;   //!
   TBranch        *b_ReducedVtx_chi2;   //!
   TBranch        *b_ReducedVtx_nTrk;   //!
   TBranch        *b_ReducedVtx_ndof;   //!
   TBranch        *b_ReducedVtx_x;   //!
   TBranch        *b_ReducedVtx_y;   //!
   TBranch        *b_ReducedVtx_z;   //!
   TBranch        *b_ReducedVtx_Cov;   //!
   TBranch        *b_ReducedVtx_Track_idx;   //!
   TBranch        *b_ReducedVtx_isFake;   //!
   TBranch        *b_isPatJet;   //!
   TBranch        *b_PFJet_p4;   //!
   TBranch        *b_PFJet_Poca;   //!
   TBranch        *b_PFJet_chargedEmEnergy;   //!
   TBranch        *b_PFJet_chargedHadronEnergy;   //!
   TBranch        *b_PFJet_chargedHadronMultiplicity;   //!
   TBranch        *b_PFJet_chargedMuEnergy;   //!
   TBranch        *b_PFJet_chargedMultiplicity;   //!
   TBranch        *b_PFJet_electronEnergy;   //!
   TBranch        *b_PFJet_electronMultiplicity;   //!
   TBranch        *b_PFJet_HFEMEnergy;   //!
   TBranch        *b_PFJet_HFEMMultiplicity;   //!
   TBranch        *b_PFJet_HFHadronEnergy;   //!
   TBranch        *b_PFJet_HFHadronMultiplicity;   //!
   TBranch        *b_PFJet_muonEnergy;   //!
   TBranch        *b_PFJet_muonMultiplicity;   //!
   TBranch        *b_PFJet_neutralEmEnergy;   //!
   TBranch        *b_PFJet_neutralHadronEnergy;   //!
   TBranch        *b_PFJet_neutralHadronMultiplicity;   //!
   TBranch        *b_PFJet_photonEnergy;   //!
   TBranch        *b_PFJet_photonMultiplicity;   //!
   TBranch        *b_PFJet_jetArea;   //!
   TBranch        *b_PFJet_maxDistance;   //!
   TBranch        *b_PFJet_nConstituents;   //!
   TBranch        *b_PFJet_pileup;   //!
   TBranch        *b_PFJet_etaetaMoment;   //!
   TBranch        *b_PFJet_etaphiMoment;   //!
   TBranch        *b_PFJet_Track_idx;   //!
   TBranch        *b_PFJet_MatchedHPS_idx;   //!
   TBranch        *b_PFJet_numberOfDaughters;   //!
   TBranch        *b_PFJet_chargedEmEnergyFraction;   //!
   TBranch        *b_PFJet_chargedHadronEnergyFraction;   //!
   TBranch        *b_PFJet_neutralHadronEnergyFraction;   //!
   TBranch        *b_PFJet_neutralEmEnergyFraction;   //!
   TBranch        *b_PFJet_partonFlavour;   //!
   TBranch        *b_PFJet_bDiscriminator;   //!
   TBranch        *b_PFJet_BTagWeight;   //!
   TBranch        *b_PFJet_TracksP4;   //!
   TBranch        *b_PFJet_nTrk;   //!
   TBranch        *b_isPatMET;   //!
   TBranch        *b_MET_et;   //!
   TBranch        *b_MET_pt;   //!
   TBranch        *b_MET_phi;   //!
   TBranch        *b_MET_sumET;   //!
   TBranch        *b_MET_metSignificance;   //!
   TBranch        *b_MET_MuonEtFraction;   //!
   TBranch        *b_MET_NeutralEMFraction;   //!
   TBranch        *b_MET_NeutralHadEtFraction;   //!
   TBranch        *b_MET_Type6EtFraction;   //!
   TBranch        *b_MET_Type7EtFraction;   //!
   TBranch        *b_MET_Corr_et;   //!
   TBranch        *b_MET_Corr_pt;   //!
   TBranch        *b_MET_Corr_phi;   //!
   TBranch        *b_MET_Corr_SumET;   //!
   TBranch        *b_Event_EventNumber;   //!
   TBranch        *b_Event_RunNumber;   //!
   TBranch        *b_Event_bunchCrossing;   //!
   TBranch        *b_Event_orbitNumber;   //!
   TBranch        *b_Event_luminosityBlock;   //!
   TBranch        *b_Event_isRealData;   //!
   TBranch        *b_PileupInfo_NumInteractions_nm1;   //!
   TBranch        *b_PileupInfo_NumInteractions_n0;   //!
   TBranch        *b_PileupInfo_NumInteractions_np1;   //!
   TBranch        *b_EvtWeight3D;   //!
   TBranch        *b_TauSpinnerWeight;   //!
   TBranch        *b_SelEffWeight;   //!
   TBranch        *b_RadiationCorrWeight;   //!
   TBranch        *b_MinVisPtFilter;   //!
   TBranch        *b_KinWeightPt;   //!
   TBranch        *b_KinWeightEta;   //!
   TBranch        *b_KinWeightMassPt;   //!
   TBranch        *b_EmbeddedWeight;   //!
   TBranch        *b_Track_p4;   //!
   TBranch        *b_Track_Poca;   //!
   TBranch        *b_Track_charge;   //!
   TBranch        *b_Track_chi2;   //!
   TBranch        *b_Track_ndof;   //!
   TBranch        *b_Track_numberOfLostHits;   //!
   TBranch        *b_Track_numberOfValidHits;   //!
   TBranch        *b_Track_qualityMask;   //!
   TBranch        *b_Track_par;   //!
   TBranch        *b_Track_parCov;   //!
   TBranch        *b_GenEventInfoProduct_signalProcessID;   //!
   TBranch        *b_GenEventInfoProduct_weight;   //!
   TBranch        *b_GenEventInfoProduct_weights;   //!
   TBranch        *b_GenEventInfoProduct_qScale;   //!
   TBranch        *b_GenEventInfoProduct_alphaQED;   //!
   TBranch        *b_GenEventInfoProduct_alphaQCD;   //!
   TBranch        *b_MC_p4;   //!
   TBranch        *b_MC_pdgid;   //!
   TBranch        *b_MC_charge;   //!
   TBranch        *b_MC_midx;   //!
   TBranch        *b_MC_childpdgid;   //!
   TBranch        *b_MCSignalParticle_p4;   //!
   TBranch        *b_MCSignalParticle_pdgid;   //!
   TBranch        *b_MCSignalParticle_charge;   //!
   TBranch        *b_MCSignalParticle_Poca;   //!
   TBranch        *b_MCSignalParticle_Tauidx;   //!
   TBranch        *b_MCTauandProd_p4;   //!
   TBranch        *b_MCTauandProd_Vertex;   //!
   TBranch        *b_MCTauandProd_pdgid;   //!
   TBranch        *b_MCTauandProd_midx;   //!
   TBranch        *b_MCTauandProd_charge;   //!
   TBranch        *b_MCTau_JAK;   //!
   TBranch        *b_MCTau_DecayBitMask;   //!
   TBranch        *b_HTLTriggerName;   //!
   TBranch        *b_TriggerAccept;   //!
   TBranch        *b_TriggerError;   //!
   TBranch        *b_TriggerWasRun;   //!
   TBranch        *b_HLTPrescale;   //!
   TBranch        *b_NHLTL1GTSeeds;   //!
   TBranch        *b_L1SEEDPrescale;   //!
   TBranch        *b_L1SEEDInvalidPrescale;   //!
   TBranch        *b_L1SEEDisTechBit;   //!
   TBranch        *b_MuonTriggerMatch;   //!
   TBranch        *b_ElectronTriggerMatch;   //!
   TBranch        *b_JetTriggerMatch;   //!
   TBranch        *b_TauTriggerMatch;   //!
   TBranch        *b_HLTTrigger_objs_Pt;   //!
   TBranch        *b_HLTTrigger_objs_Eta;   //!
   TBranch        *b_HLTTrigger_objs_Phi;   //!
   TBranch        *b_L1TriggerName;   //!
   TBranch        *b_L1TriggerDecision;   //!
   TBranch        *b_L1ErrorCode;   //!
   TBranch        *b_L1Prescale;   //!

   NtupleReader(TTree *tree=0);
   virtual ~NtupleReader();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef NtupleReader_cxx
NtupleReader::NtupleReader(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {

#ifdef SINGLE_TREE
      // The following code should be used if you want this class to access
      // a single tree instead of a chain
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Memory Directory");
      if (!f || !f->IsOpen()) {
         f = new TFile("Memory Directory");
      }
      f->GetObject("t",tree);

#else // SINGLE_TREE

      // The following code should be used if you want this class to access a chain
      // of trees.
      TChain * chain = new TChain("t","");
      chain->Add("/net/scratch_cms/institut_3b/nehrkorn/workdirChargedHiggs_Mar_26_2013/Code/macros/TauNtuple_1_1_3g0.root/t");
      tree = chain;
#endif // SINGLE_TREE

   }
   Init(tree);
}

NtupleReader::~NtupleReader()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t NtupleReader::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t NtupleReader::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void NtupleReader::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Vtx_chi2 = 0;
   Vtx_nTrk = 0;
   Vtx_ndof = 0;
   Vtx_x = 0;
   Vtx_y = 0;
   Vtx_z = 0;
   Vtx_Cov = 0;
   Vtx_Track_idx = 0;
   Vtx_Track_Weights = 0;
   Vtx_isFake = 0;
   Vtx_TracksP4 = 0;
   Muon_p4 = 0;
   Muon_Poca = 0;
   Muon_isGlobalMuon = 0;
   Muon_isStandAloneMuon = 0;
   Muon_isTrackerMuon = 0;
   Muon_isCaloMuon = 0;
   Muon_isIsolationValid = 0;
   Muon_isQualityValid = 0;
   Muon_isTimeValid = 0;
   Muon_emEt03 = 0;
   Muon_emVetoEt03 = 0;
   Muon_hadEt03 = 0;
   Muon_hadVetoEt03 = 0;
   Muon_nJets03 = 0;
   Muon_nTracks03 = 0;
   Muon_sumPt03 = 0;
   Muon_trackerVetoPt03 = 0;
   Muon_emEt05 = 0;
   Muon_emVetoEt05 = 0;
   Muon_hadEt05 = 0;
   Muon_hadVetoEt05 = 0;
   Muon_nJets05 = 0;
   Muon_nTracks05 = 0;
   Muon_sumPt05 = 0;
   Muon_trackerVetoPt05 = 0;
   Muon_sumChargedHadronPt03 = 0;
   Muon_sumChargedParticlePt03 = 0;
   Muon_sumNeutralHadronEt03 = 0;
   Muon_sumNeutralHadronEtHighThreshold03 = 0;
   Muon_sumPhotonEt03 = 0;
   Muon_sumPhotonEtHighThreshold03 = 0;
   Muon_sumPUPt03 = 0;
   Muon_sumChargedHadronPt04 = 0;
   Muon_sumChargedParticlePt04 = 0;
   Muon_sumNeutralHadronEt04 = 0;
   Muon_sumNeutralHadronEtHighThreshold04 = 0;
   Muon_sumPhotonEt04 = 0;
   Muon_sumPhotonEtHighThreshold04 = 0;
   Muon_sumPUPt04 = 0;
   Muon_Track_idx = 0;
   Muon_hitPattern_pixelLayerwithMeas = 0;
   Muon_numberOfMatchedStations = 0;
   Muon_normChi2 = 0;
   Muon_hitPattern_numberOfValidMuonHits = 0;
   Muon_innerTrack_numberofValidHits = 0;
   Muon_numberOfMatches = 0;
   Muon_Charge = 0;
   Muon_numberOfChambers = 0;
   Muon_isPFMuon = 0;
   Muon_numberofValidPixelHits = 0;
   Muon_trackerLayersWithMeasurement = 0;
   Electron_p4 = 0;
   Electron_Poca = 0;
   Electron_Charge = 0;
   Electron_Gsf_deltaEtaEleClusterTrackAtCalo = 0;
   Electron_Gsf_deltaEtaSeedClusterTrackAtCalo = 0;
   Electron_Gsf_deltaEtaSuperClusterTrackAtVtx = 0;
   Electron_Gsf_deltaPhiEleClusterTrackAtCalo = 0;
   Electron_Gsf_deltaPhiSeedClusterTrackAtCalo = 0;
   Electron_Gsf_deltaPhiSuperClusterTrackAtVtx = 0;
   Electron_Gsf_dr03EcalRecHitSumE = 0;
   Electron_Gsf_dr03HcalDepth1TowerSumEt = 0;
   Electron_Gsf_dr03HcalDepth1TowerSumEtBc = 0;
   Electron_Gsf_dr03HcalDepth2TowerSumEt = 0;
   Electron_Gsf_dr03HcalDepth2TowerSumEtBc = 0;
   Electron_Gsf_dr03HcalTowerSumEt = 0;
   Electron_Gsf_dr03HcalTowerSumEtBc = 0;
   Electron_Gsf_dr03TkSumPt = 0;
   Electron_Gsf_passingCutBasedPreselection = 0;
   Electron_Gsf_passingMvaPreselection = 0;
   Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits = 0;
   Electron_supercluster_e = 0;
   Electron_supercluster_phi = 0;
   Electron_supercluster_eta = 0;
   Electron_supercluster_centroid_x = 0;
   Electron_supercluster_centroid_y = 0;
   Electron_supercluster_centroid_z = 0;
   Electron_Track_idx = 0;
   Electron_ecalRecHitSumEt03 = 0;
   Electron_hcalDepth1TowerSumEt03 = 0;
   Electron_hcalDepth1TowerSumEtBc03 = 0;
   Electron_hcalDepth2TowerSumEt03 = 0;
   Electron_hcalDepth2TowerSumEtBc03 = 0;
   Electron_tkSumPt03 = 0;
   Electron_ecalRecHitSumEt04 = 0;
   Electron_hcalDepth1TowerSumEt04 = 0;
   Electron_hcalDepth1TowerSumEtBc04 = 0;
   Electron_hcalDepth2TowerSumEt04 = 0;
   Electron_hcalDepth2TowerSumEtBc04 = 0;
   Electron_tkSumPt04 = 0;
   Electron_chargedHadronIso = 0;
   Electron_neutralHadronIso = 0;
   Electron_photonIso = 0;
   Electron_sigmaIetaIeta = 0;
   Electron_hadronicOverEm = 0;
   Electron_fbrem = 0;
   Electron_eSuperClusterOverP = 0;
   Electron_ecalEnergy = 0;
   Electron_trackMomentumAtVtx = 0;
   Electron_numberOfMissedHits = 0;
   Electron_HasMatchedConversions = 0;
   Electron_Track_dR = 0;
   Electron_MVA_discriminator = 0;
   PFTau_p4 = 0;
   PFTau_Poca = 0;
   PFTau_isTightIsolation = 0;
   PFTau_isMediumIsolation = 0;
   PFTau_isLooseIsolation = 0;
   PFTau_isTightIsolationDBSumPtCorr = 0;
   PFTau_isMediumIsolationDBSumPtCorr = 0;
   PFTau_isLooseIsolationDBSumPtCorr = 0;
   PFTau_isVLooseIsolationDBSumPtCorr = 0;
   PFTau_isHPSAgainstElectronsLoose = 0;
   PFTau_isHPSAgainstElectronsMedium = 0;
   PFTau_isHPSAgainstElectronsTight = 0;
   PFTau_isHPSAgainstMuonLoose = 0;
   PFTau_isHPSAgainstMuonMedium = 0;
   PFTau_isHPSAgainstMuonTight = 0;
   PFTau_isHPSAgainstMuonLoose2 = 0;
   PFTau_isHPSAgainstMuonMedium2 = 0;
   PFTau_isHPSAgainstMuonTight2 = 0;
   PFTau_isHPSByDecayModeFinding = 0;
   PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection = 0;
   PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection = 0;
   PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection = 0;
   PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection = 0;
   PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits = 0;
   PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits = 0;
   PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits = 0;
   PFTau_HPSPFTauDiscriminationByLooseIsolationMVA = 0;
   PFTau_HPSPFTauDiscriminationByMediumIsolationMVA = 0;
   PFTau_HPSPFTauDiscriminationByTightIsolationMVA = 0;
   PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2 = 0;
   PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2 = 0;
   PFTau_HPSPFTauDiscriminationByTightIsolationMVA2 = 0;
   PFTau_hpsDecayMode = 0;
   PFTau_Charge = 0;
   PFTau_Track_idx = 0;
   KFTau_discriminatorByKFit = 0;
   KFTau_discriminatorByQC = 0;
   KFTau_TauFitInitial_p4 = 0;
   KFTau_NeutrinoInitial_p4 = 0;
   KFTau_a1Initial_p4 = 0;
   KFTau_pions = 0;
   KFTau_Initial_pions = 0;
   KFTau_Fit_PrimaryVertex = 0;
   KFTau_Fit_InitialPrimaryVertex = 0;
   KFTau_Fit_InitialPrimaryVertexReFit = 0;
   KFTau_Fit_SecondaryVertex = 0;
   KFTau_Fit_InitialSecondaryVertex = 0;
   KFTau_Fit_Chi2Prob = 0;
   KFTau_TauVis_p4 = 0;
   KFTau_TauFit_p4 = 0;
   KFTau_Neutrino_p4 = 0;
   KFTau_MatchedHPS_idx = 0;
   KFTau_Track_idx = 0;
   KFTau_indexOfFitInfo = 0;
   KFTau_Fit_TauPrimVtx = 0;
   KFTau_Fit_chi2 = 0;
   KFTau_Fit_ndf = 0;
   KFTau_Fit_charge = 0;
   KFTau_Fit_csum = 0;
   KFTau_Fit_iterations = 0;
   KFTau_Fit_BDTVal = 0;
   KFTau_Fit_TauEnergyFraction = 0;
   KFTau_Fit_RefitVisibleMass = 0;
   //KFTau_Fit_Chi2Prob = 0;
   KFTau_Fit_PV_PV_significance = 0;
   KFTau_Fit_SV_PV_significance = 0;
   KFTau_Daughter_pdgid = 0;
   KFTau_Daughter_charge = 0;
   KFTau_Daughter_ambiguity = 0;
   KFTau_Daughter_par = 0;
   KFTau_Daughter_parCov = 0;
   KFTau_Daughter_inputpar = 0;
   KFTau_Daughter_inputparCov = 0;
   ReducedVtx_chi2 = 0;
   ReducedVtx_nTrk = 0;
   ReducedVtx_ndof = 0;
   ReducedVtx_x = 0;
   ReducedVtx_y = 0;
   ReducedVtx_z = 0;
   ReducedVtx_Cov = 0;
   ReducedVtx_Track_idx = 0;
   ReducedVtx_isFake = 0;
   PFJet_p4 = 0;
   PFJet_Poca = 0;
   PFJet_chargedEmEnergy = 0;
   PFJet_chargedHadronEnergy = 0;
   PFJet_chargedHadronMultiplicity = 0;
   PFJet_chargedMuEnergy = 0;
   PFJet_chargedMultiplicity = 0;
   PFJet_electronEnergy = 0;
   PFJet_electronMultiplicity = 0;
   PFJet_HFEMEnergy = 0;
   PFJet_HFEMMultiplicity = 0;
   PFJet_HFHadronEnergy = 0;
   PFJet_HFHadronMultiplicity = 0;
   PFJet_muonEnergy = 0;
   PFJet_muonMultiplicity = 0;
   PFJet_neutralEmEnergy = 0;
   PFJet_neutralHadronEnergy = 0;
   PFJet_neutralHadronMultiplicity = 0;
   PFJet_photonEnergy = 0;
   PFJet_photonMultiplicity = 0;
   PFJet_jetArea = 0;
   PFJet_maxDistance = 0;
   PFJet_nConstituents = 0;
   PFJet_pileup = 0;
   PFJet_etaetaMoment = 0;
   PFJet_etaphiMoment = 0;
   PFJet_Track_idx = 0;
   PFJet_MatchedHPS_idx = 0;
   PFJet_numberOfDaughters = 0;
   PFJet_chargedEmEnergyFraction = 0;
   PFJet_chargedHadronEnergyFraction = 0;
   PFJet_neutralHadronEnergyFraction = 0;
   PFJet_neutralEmEnergyFraction = 0;
   PFJet_partonFlavour = 0;
   PFJet_bDiscriminator = 0;
   PFJet_BTagWeight = 0;
   PFJet_TracksP4 = 0;
   PFJet_nTrk = 0;
   Track_p4 = 0;
   Track_Poca = 0;
   Track_charge = 0;
   Track_chi2 = 0;
   Track_ndof = 0;
   Track_numberOfLostHits = 0;
   Track_numberOfValidHits = 0;
   Track_qualityMask = 0;
   Track_par = 0;
   Track_parCov = 0;
   GenEventInfoProduct_weights = 0;
   MC_p4 = 0;
   MC_pdgid = 0;
   MC_charge = 0;
   MC_midx = 0;
   MC_childpdgid = 0;
   MCSignalParticle_p4 = 0;
   MCSignalParticle_pdgid = 0;
   MCSignalParticle_charge = 0;
   MCSignalParticle_Poca = 0;
   MCSignalParticle_Tauidx = 0;
   MCTauandProd_p4 = 0;
   MCTauandProd_Vertex = 0;
   MCTauandProd_pdgid = 0;
   MCTauandProd_midx = 0;
   MCTauandProd_charge = 0;
   MCTau_JAK = 0;
   MCTau_DecayBitMask = 0;
   HTLTriggerName = 0;
   TriggerAccept = 0;
   TriggerError = 0;
   TriggerWasRun = 0;
   HLTPrescale = 0;
   NHLTL1GTSeeds = 0;
   L1SEEDPrescale = 0;
   L1SEEDInvalidPrescale = 0;
   L1SEEDisTechBit = 0;
   MuonTriggerMatch = 0;
   ElectronTriggerMatch = 0;
   JetTriggerMatch = 0;
   TauTriggerMatch = 0;
   HLTTrigger_objs_Pt = 0;
   HLTTrigger_objs_Eta = 0;
   HLTTrigger_objs_Phi = 0;
   L1TriggerName = 0;
   L1TriggerDecision = 0;
   L1ErrorCode = 0;
   L1Prescale = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("DataMC_Type", &DataMC_Type, &b_DataMC_Type);
   fChain->SetBranchAddress("Vtx_chi2", &Vtx_chi2, &b_Vtx_chi2);
   fChain->SetBranchAddress("Vtx_nTrk", &Vtx_nTrk, &b_Vtx_nTrk);
   fChain->SetBranchAddress("Vtx_ndof", &Vtx_ndof, &b_Vtx_ndof);
   fChain->SetBranchAddress("Vtx_x", &Vtx_x, &b_Vtx_x);
   fChain->SetBranchAddress("Vtx_y", &Vtx_y, &b_Vtx_y);
   fChain->SetBranchAddress("Vtx_z", &Vtx_z, &b_Vtx_z);
   fChain->SetBranchAddress("Vtx_Cov", &Vtx_Cov, &b_Vtx_Cov);
   fChain->SetBranchAddress("Vtx_Track_idx", &Vtx_Track_idx, &b_Vtx_Track_idx);
   fChain->SetBranchAddress("Vtx_Track_Weights", &Vtx_Track_Weights, &b_Vtx_Track_Weights);
   fChain->SetBranchAddress("Vtx_isFake", &Vtx_isFake, &b_Vtx_isFake);
   fChain->SetBranchAddress("Vtx_TracksP4", &Vtx_TracksP4, &b_Vtx_TracksP4);
   fChain->SetBranchAddress("isPatMuon", &isPatMuon, &b_isPatMuon);
   fChain->SetBranchAddress("Muon_p4", &Muon_p4, &b_Muon_p4);
   fChain->SetBranchAddress("Muon_Poca", &Muon_Poca, &b_Muon_Poca);
   fChain->SetBranchAddress("Muon_isGlobalMuon", &Muon_isGlobalMuon, &b_Muon_isGlobalMuon);
   fChain->SetBranchAddress("Muon_isStandAloneMuon", &Muon_isStandAloneMuon, &b_Muon_isStandAloneMuon);
   fChain->SetBranchAddress("Muon_isTrackerMuon", &Muon_isTrackerMuon, &b_Muon_isTrackerMuon);
   fChain->SetBranchAddress("Muon_isCaloMuon", &Muon_isCaloMuon, &b_Muon_isCaloMuon);
   fChain->SetBranchAddress("Muon_isIsolationValid", &Muon_isIsolationValid, &b_Muon_isIsolationValid);
   fChain->SetBranchAddress("Muon_isQualityValid", &Muon_isQualityValid, &b_Muon_isQualityValid);
   fChain->SetBranchAddress("Muon_isTimeValid", &Muon_isTimeValid, &b_Muon_isTimeValid);
   fChain->SetBranchAddress("Muon_emEt03", &Muon_emEt03, &b_Muon_emEt03);
   fChain->SetBranchAddress("Muon_emVetoEt03", &Muon_emVetoEt03, &b_Muon_emVetoEt03);
   fChain->SetBranchAddress("Muon_hadEt03", &Muon_hadEt03, &b_Muon_hadEt03);
   fChain->SetBranchAddress("Muon_hadVetoEt03", &Muon_hadVetoEt03, &b_Muon_hadVetoEt03);
   fChain->SetBranchAddress("Muon_nJets03", &Muon_nJets03, &b_Muon_nJets03);
   fChain->SetBranchAddress("Muon_nTracks03", &Muon_nTracks03, &b_Muon_nTracks03);
   fChain->SetBranchAddress("Muon_sumPt03", &Muon_sumPt03, &b_Muon_sumPt03);
   fChain->SetBranchAddress("Muon_trackerVetoPt03", &Muon_trackerVetoPt03, &b_Muon_trackerVetoPt03);
   fChain->SetBranchAddress("Muon_emEt05", &Muon_emEt05, &b_Muon_emEt05);
   fChain->SetBranchAddress("Muon_emVetoEt05", &Muon_emVetoEt05, &b_Muon_emVetoEt05);
   fChain->SetBranchAddress("Muon_hadEt05", &Muon_hadEt05, &b_Muon_hadEt05);
   fChain->SetBranchAddress("Muon_hadVetoEt05", &Muon_hadVetoEt05, &b_Muon_hadVetoEt05);
   fChain->SetBranchAddress("Muon_nJets05", &Muon_nJets05, &b_Muon_nJets05);
   fChain->SetBranchAddress("Muon_nTracks05", &Muon_nTracks05, &b_Muon_nTracks05);
   fChain->SetBranchAddress("Muon_sumPt05", &Muon_sumPt05, &b_Muon_sumPt05);
   fChain->SetBranchAddress("Muon_trackerVetoPt05", &Muon_trackerVetoPt05, &b_Muon_trackerVetoPt05);
   fChain->SetBranchAddress("Muon_sumChargedHadronPt03", &Muon_sumChargedHadronPt03, &b_Muon_sumChargedHadronPt03);
   fChain->SetBranchAddress("Muon_sumChargedParticlePt03", &Muon_sumChargedParticlePt03, &b_Muon_sumChargedParticlePt03);
   fChain->SetBranchAddress("Muon_sumNeutralHadronEt03", &Muon_sumNeutralHadronEt03, &b_Muon_sumNeutralHadronEt03);
   fChain->SetBranchAddress("Muon_sumNeutralHadronEtHighThreshold03", &Muon_sumNeutralHadronEtHighThreshold03, &b_Muon_sumNeutralHadronEtHighThreshold03);
   fChain->SetBranchAddress("Muon_sumPhotonEt03", &Muon_sumPhotonEt03, &b_Muon_sumPhotonEt03);
   fChain->SetBranchAddress("Muon_sumPhotonEtHighThreshold03", &Muon_sumPhotonEtHighThreshold03, &b_Muon_sumPhotonEtHighThreshold03);
   fChain->SetBranchAddress("Muon_sumPUPt03", &Muon_sumPUPt03, &b_Muon_sumPUPt03);
   fChain->SetBranchAddress("Muon_sumChargedHadronPt04", &Muon_sumChargedHadronPt04, &b_Muon_sumChargedHadronPt04);
   fChain->SetBranchAddress("Muon_sumChargedParticlePt04", &Muon_sumChargedParticlePt04, &b_Muon_sumChargedParticlePt04);
   fChain->SetBranchAddress("Muon_sumNeutralHadronEt04", &Muon_sumNeutralHadronEt04, &b_Muon_sumNeutralHadronEt04);
   fChain->SetBranchAddress("Muon_sumNeutralHadronEtHighThreshold04", &Muon_sumNeutralHadronEtHighThreshold04, &b_Muon_sumNeutralHadronEtHighThreshold04);
   fChain->SetBranchAddress("Muon_sumPhotonEt04", &Muon_sumPhotonEt04, &b_Muon_sumPhotonEt04);
   fChain->SetBranchAddress("Muon_sumPhotonEtHighThreshold04", &Muon_sumPhotonEtHighThreshold04, &b_Muon_sumPhotonEtHighThreshold04);
   fChain->SetBranchAddress("Muon_sumPUPt04", &Muon_sumPUPt04, &b_Muon_sumPUPt04);
   fChain->SetBranchAddress("Muon_Track_idx", &Muon_Track_idx, &b_Muon_Track_idx);
   fChain->SetBranchAddress("Muon_hitPattern_pixelLayerwithMeas", &Muon_hitPattern_pixelLayerwithMeas, &b_Muon_hitPattern_pixelLayerwithMeas);
   fChain->SetBranchAddress("Muon_numberOfMatchedStations", &Muon_numberOfMatchedStations, &b_Muon_numberOfMatchedStations);
   fChain->SetBranchAddress("Muon_normChi2", &Muon_normChi2, &b_Muon_normChi2);
   fChain->SetBranchAddress("Muon_hitPattern_numberOfValidMuonHits", &Muon_hitPattern_numberOfValidMuonHits, &b_Muon_hitPattern_numberOfValidMuonHits);
   fChain->SetBranchAddress("Muon_innerTrack_numberofValidHits", &Muon_innerTrack_numberofValidHits, &b_Muon_innerTrack_numberofValidHits);
   fChain->SetBranchAddress("Muon_numberOfMatches", &Muon_numberOfMatches, &b_Muon_numberOfMatches);
   fChain->SetBranchAddress("Muon_Charge", &Muon_Charge, &b_Muon_Charge);
   fChain->SetBranchAddress("Muon_numberOfChambers", &Muon_numberOfChambers, &b_Muon_numberOfChambers);
   fChain->SetBranchAddress("Muon_isPFMuon", &Muon_isPFMuon, &b_Muon_isPFMuon);
   fChain->SetBranchAddress("Muon_numberofValidPixelHits", &Muon_numberofValidPixelHits, &b_Muon_numberofValidPixelHits);
   fChain->SetBranchAddress("Muon_trackerLayersWithMeasurement", &Muon_trackerLayersWithMeasurement, &b_Muon_trackerLayersWithMeasurement);
   fChain->SetBranchAddress("isPatElectron", &isPatElectron, &b_isPatElectron);
   fChain->SetBranchAddress("Electron_p4", &Electron_p4, &b_Electron_p4);
   fChain->SetBranchAddress("Electron_Poca", &Electron_Poca, &b_Electron_Poca);
   fChain->SetBranchAddress("Electron_Charge", &Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron_Gsf_deltaEtaEleClusterTrackAtCalo", &Electron_Gsf_deltaEtaEleClusterTrackAtCalo, &b_Electron_Gsf_deltaEtaEleClusterTrackAtCalo);
   fChain->SetBranchAddress("Electron_Gsf_deltaEtaSeedClusterTrackAtCalo", &Electron_Gsf_deltaEtaSeedClusterTrackAtCalo, &b_Electron_Gsf_deltaEtaSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("Electron_Gsf_deltaEtaSuperClusterTrackAtVtx", &Electron_Gsf_deltaEtaSuperClusterTrackAtVtx, &b_Electron_Gsf_deltaEtaSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("Electron_Gsf_deltaPhiEleClusterTrackAtCalo", &Electron_Gsf_deltaPhiEleClusterTrackAtCalo, &b_Electron_Gsf_deltaPhiEleClusterTrackAtCalo);
   fChain->SetBranchAddress("Electron_Gsf_deltaPhiSeedClusterTrackAtCalo", &Electron_Gsf_deltaPhiSeedClusterTrackAtCalo, &b_Electron_Gsf_deltaPhiSeedClusterTrackAtCalo);
   fChain->SetBranchAddress("Electron_Gsf_deltaPhiSuperClusterTrackAtVtx", &Electron_Gsf_deltaPhiSuperClusterTrackAtVtx, &b_Electron_Gsf_deltaPhiSuperClusterTrackAtVtx);
   fChain->SetBranchAddress("Electron_Gsf_dr03EcalRecHitSumE", &Electron_Gsf_dr03EcalRecHitSumE, &b_Electron_Gsf_dr03EcalRecHitSumE);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalDepth1TowerSumEt", &Electron_Gsf_dr03HcalDepth1TowerSumEt, &b_Electron_Gsf_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalDepth1TowerSumEtBc", &Electron_Gsf_dr03HcalDepth1TowerSumEtBc, &b_Electron_Gsf_dr03HcalDepth1TowerSumEtBc);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalDepth2TowerSumEt", &Electron_Gsf_dr03HcalDepth2TowerSumEt, &b_Electron_Gsf_dr03HcalDepth2TowerSumEt);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalDepth2TowerSumEtBc", &Electron_Gsf_dr03HcalDepth2TowerSumEtBc, &b_Electron_Gsf_dr03HcalDepth2TowerSumEtBc);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalTowerSumEt", &Electron_Gsf_dr03HcalTowerSumEt, &b_Electron_Gsf_dr03HcalTowerSumEt);
   fChain->SetBranchAddress("Electron_Gsf_dr03HcalTowerSumEtBc", &Electron_Gsf_dr03HcalTowerSumEtBc, &b_Electron_Gsf_dr03HcalTowerSumEtBc);
   fChain->SetBranchAddress("Electron_Gsf_dr03TkSumPt", &Electron_Gsf_dr03TkSumPt, &b_Electron_Gsf_dr03TkSumPt);
   fChain->SetBranchAddress("Electron_Gsf_passingCutBasedPreselection", &Electron_Gsf_passingCutBasedPreselection, &b_Electron_Gsf_passingCutBasedPreselection);
   fChain->SetBranchAddress("Electron_Gsf_passingMvaPreselection", &Electron_Gsf_passingMvaPreselection, &b_Electron_Gsf_passingMvaPreselection);
   fChain->SetBranchAddress("Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits", &Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits, &b_Electron_gsftrack_trackerExpectedHitsInner_numberOfLostHits);
   fChain->SetBranchAddress("Electron_supercluster_e", &Electron_supercluster_e, &b_Electron_supercluster_e);
   fChain->SetBranchAddress("Electron_supercluster_phi", &Electron_supercluster_phi, &b_Electron_supercluster_phi);
   fChain->SetBranchAddress("Electron_supercluster_eta", &Electron_supercluster_eta, &b_Electron_supercluster_eta);
   fChain->SetBranchAddress("Electron_supercluster_centroid_x", &Electron_supercluster_centroid_x, &b_Electron_supercluster_centroid_x);
   fChain->SetBranchAddress("Electron_supercluster_centroid_y", &Electron_supercluster_centroid_y, &b_Electron_supercluster_centroid_y);
   fChain->SetBranchAddress("Electron_supercluster_centroid_z", &Electron_supercluster_centroid_z, &b_Electron_supercluster_centroid_z);
   fChain->SetBranchAddress("Electron_Track_idx", &Electron_Track_idx, &b_Electron_Track_idx);
   fChain->SetBranchAddress("Electron_ecalRecHitSumEt03", &Electron_ecalRecHitSumEt03, &b_Electron_ecalRecHitSumEt03);
   fChain->SetBranchAddress("Electron_hcalDepth1TowerSumEt03", &Electron_hcalDepth1TowerSumEt03, &b_Electron_hcalDepth1TowerSumEt03);
   fChain->SetBranchAddress("Electron_hcalDepth1TowerSumEtBc03", &Electron_hcalDepth1TowerSumEtBc03, &b_Electron_hcalDepth1TowerSumEtBc03);
   fChain->SetBranchAddress("Electron_hcalDepth2TowerSumEt03", &Electron_hcalDepth2TowerSumEt03, &b_Electron_hcalDepth2TowerSumEt03);
   fChain->SetBranchAddress("Electron_hcalDepth2TowerSumEtBc03", &Electron_hcalDepth2TowerSumEtBc03, &b_Electron_hcalDepth2TowerSumEtBc03);
   fChain->SetBranchAddress("Electron_tkSumPt03", &Electron_tkSumPt03, &b_Electron_tkSumPt03);
   fChain->SetBranchAddress("Electron_ecalRecHitSumEt04", &Electron_ecalRecHitSumEt04, &b_Electron_ecalRecHitSumEt04);
   fChain->SetBranchAddress("Electron_hcalDepth1TowerSumEt04", &Electron_hcalDepth1TowerSumEt04, &b_Electron_hcalDepth1TowerSumEt04);
   fChain->SetBranchAddress("Electron_hcalDepth1TowerSumEtBc04", &Electron_hcalDepth1TowerSumEtBc04, &b_Electron_hcalDepth1TowerSumEtBc04);
   fChain->SetBranchAddress("Electron_hcalDepth2TowerSumEt04", &Electron_hcalDepth2TowerSumEt04, &b_Electron_hcalDepth2TowerSumEt04);
   fChain->SetBranchAddress("Electron_hcalDepth2TowerSumEtBc04", &Electron_hcalDepth2TowerSumEtBc04, &b_Electron_hcalDepth2TowerSumEtBc04);
   fChain->SetBranchAddress("Electron_tkSumPt04", &Electron_tkSumPt04, &b_Electron_tkSumPt04);
   fChain->SetBranchAddress("Electron_chargedHadronIso", &Electron_chargedHadronIso, &b_Electron_chargedHadronIso);
   fChain->SetBranchAddress("Electron_neutralHadronIso", &Electron_neutralHadronIso, &b_Electron_neutralHadronIso);
   fChain->SetBranchAddress("Electron_photonIso", &Electron_photonIso, &b_Electron_photonIso);
   fChain->SetBranchAddress("Electron_sigmaIetaIeta", &Electron_sigmaIetaIeta, &b_Electron_sigmaIetaIeta);
   fChain->SetBranchAddress("Electron_hadronicOverEm", &Electron_hadronicOverEm, &b_Electron_hadronicOverEm);
   fChain->SetBranchAddress("Electron_fbrem", &Electron_fbrem, &b_Electron_fbrem);
   fChain->SetBranchAddress("Electron_eSuperClusterOverP", &Electron_eSuperClusterOverP, &b_Electron_eSuperClusterOverP);
   fChain->SetBranchAddress("Electron_ecalEnergy", &Electron_ecalEnergy, &b_Electron_ecalEnergy);
   fChain->SetBranchAddress("Electron_trackMomentumAtVtx", &Electron_trackMomentumAtVtx, &b_Electron_trackMomentumAtVtx);
   fChain->SetBranchAddress("Electron_numberOfMissedHits", &Electron_numberOfMissedHits, &b_Electron_numberOfMissedHits);
   fChain->SetBranchAddress("Electron_HasMatchedConversions", &Electron_HasMatchedConversions, &b_Electron_HasMatchedConversions);
   fChain->SetBranchAddress("RhoIsolationAllInputTags", &RhoIsolationAllInputTags, &b_RhoIsolationAllInputTags);
   fChain->SetBranchAddress("Electron_Track_dR", &Electron_Track_dR, &b_Electron_Track_dR);
   fChain->SetBranchAddress("Electron_MVA_discriminator", &Electron_MVA_discriminator, &b_Electron_MVA_discriminator);
   fChain->SetBranchAddress("PFTau_p4", &PFTau_p4, &b_PFTau_p4);
   fChain->SetBranchAddress("PFTau_Poca", &PFTau_Poca, &b_PFTau_Poca);
   fChain->SetBranchAddress("PFTau_isTightIsolation", &PFTau_isTightIsolation, &b_PFTau_isTightIsolation);
   fChain->SetBranchAddress("PFTau_isMediumIsolation", &PFTau_isMediumIsolation, &b_PFTau_isMediumIsolation);
   fChain->SetBranchAddress("PFTau_isLooseIsolation", &PFTau_isLooseIsolation, &b_PFTau_isLooseIsolation);
   fChain->SetBranchAddress("PFTau_isTightIsolationDBSumPtCorr", &PFTau_isTightIsolationDBSumPtCorr, &b_PFTau_isTightIsolationDBSumPtCorr);
   fChain->SetBranchAddress("PFTau_isMediumIsolationDBSumPtCorr", &PFTau_isMediumIsolationDBSumPtCorr, &b_PFTau_isMediumIsolationDBSumPtCorr);
   fChain->SetBranchAddress("PFTau_isLooseIsolationDBSumPtCorr", &PFTau_isLooseIsolationDBSumPtCorr, &b_PFTau_isLooseIsolationDBSumPtCorr);
   fChain->SetBranchAddress("PFTau_isVLooseIsolationDBSumPtCorr", &PFTau_isVLooseIsolationDBSumPtCorr, &b_PFTau_isVLooseIsolationDBSumPtCorr);
   fChain->SetBranchAddress("PFTau_isHPSAgainstElectronsLoose", &PFTau_isHPSAgainstElectronsLoose, &b_PFTau_isHPSAgainstElectronsLoose);
   fChain->SetBranchAddress("PFTau_isHPSAgainstElectronsMedium", &PFTau_isHPSAgainstElectronsMedium, &b_PFTau_isHPSAgainstElectronsMedium);
   fChain->SetBranchAddress("PFTau_isHPSAgainstElectronsTight", &PFTau_isHPSAgainstElectronsTight, &b_PFTau_isHPSAgainstElectronsTight);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonLoose", &PFTau_isHPSAgainstMuonLoose, &b_PFTau_isHPSAgainstMuonLoose);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonMedium", &PFTau_isHPSAgainstMuonMedium, &b_PFTau_isHPSAgainstMuonMedium);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonTight", &PFTau_isHPSAgainstMuonTight, &b_PFTau_isHPSAgainstMuonTight);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonLoose2", &PFTau_isHPSAgainstMuonLoose2, &b_PFTau_isHPSAgainstMuonLoose2);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonMedium2", &PFTau_isHPSAgainstMuonMedium2, &b_PFTau_isHPSAgainstMuonMedium2);
   fChain->SetBranchAddress("PFTau_isHPSAgainstMuonTight2", &PFTau_isHPSAgainstMuonTight2, &b_PFTau_isHPSAgainstMuonTight2);
   fChain->SetBranchAddress("PFTau_isHPSByDecayModeFinding", &PFTau_isHPSByDecayModeFinding, &b_PFTau_isHPSByDecayModeFinding);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection", &PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection, &b_PFTau_HPSPFTauDiscriminationByMVA3LooseElectronRejection);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection", &PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection, &b_PFTau_HPSPFTauDiscriminationByMVA3MediumElectronRejection);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection", &PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection, &b_PFTau_HPSPFTauDiscriminationByMVA3TightElectronRejection);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection", &PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection, &b_PFTau_HPSPFTauDiscriminationByMVA3VTightElectronRejection);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits", &PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits, &b_PFTau_HPSPFTauDiscriminationByTightCombinedIsolationDBSumPtCorr3Hits);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits", &PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits, &b_PFTau_HPSPFTauDiscriminationByMediumCombinedIsolationDBSumPtCorr3Hits);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits", &PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits, &b_PFTau_HPSPFTauDiscriminationByLooseCombinedIsolationDBSumPtCorr3Hits);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByLooseIsolationMVA", &PFTau_HPSPFTauDiscriminationByLooseIsolationMVA, &b_PFTau_HPSPFTauDiscriminationByLooseIsolationMVA);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMediumIsolationMVA", &PFTau_HPSPFTauDiscriminationByMediumIsolationMVA, &b_PFTau_HPSPFTauDiscriminationByMediumIsolationMVA);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByTightIsolationMVA", &PFTau_HPSPFTauDiscriminationByTightIsolationMVA, &b_PFTau_HPSPFTauDiscriminationByTightIsolationMVA);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2", &PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2, &b_PFTau_HPSPFTauDiscriminationByLooseIsolationMVA2);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2", &PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2, &b_PFTau_HPSPFTauDiscriminationByMediumIsolationMVA2);
   fChain->SetBranchAddress("PFTau_HPSPFTauDiscriminationByTightIsolationMVA2", &PFTau_HPSPFTauDiscriminationByTightIsolationMVA2, &b_PFTau_HPSPFTauDiscriminationByTightIsolationMVA2);
   fChain->SetBranchAddress("PFTau_hpsDecayMode", &PFTau_hpsDecayMode, &b_PFTau_hpsDecayMode);
   fChain->SetBranchAddress("PFTau_Charge", &PFTau_Charge, &b_PFTau_Charge);
   fChain->SetBranchAddress("PFTau_Track_idx", &PFTau_Track_idx, &b_PFTau_Track_idx);
   fChain->SetBranchAddress("KFTau_discriminatorByKFit", &KFTau_discriminatorByKFit, &b_KFTau_discriminatorByKFit);
   fChain->SetBranchAddress("KFTau_discriminatorByQC", &KFTau_discriminatorByQC, &b_KFTau_discriminatorByQC);
   fChain->SetBranchAddress("KFTau_nKinTaus", &KFTau_nKinTaus, &b_KFTau_nKinTaus);
   fChain->SetBranchAddress("KFTau_TauFitInitial_p4", &KFTau_TauFitInitial_p4, &b_KFTau_TauFitInitial_p4);
   fChain->SetBranchAddress("KFTau_NeutrinoInitial_p4", &KFTau_NeutrinoInitial_p4, &b_KFTau_NeutrinoInitial_p4);
   fChain->SetBranchAddress("KFTau_a1Initial_p4", &KFTau_a1Initial_p4, &b_KFTau_a1Initial_p4);
   fChain->SetBranchAddress("KFTau_pions", &KFTau_pions, &b_KFTau_pions);
   fChain->SetBranchAddress("KFTau_Initial_pions", &KFTau_Initial_pions, &b_KFTau_Initial_pions);
   fChain->SetBranchAddress("KFTau_Fit_PrimaryVertex", &KFTau_Fit_PrimaryVertex, &b_KFTau_Fit_PrimaryVertex);
   fChain->SetBranchAddress("KFTau_Fit_InitialPrimaryVertex", &KFTau_Fit_InitialPrimaryVertex, &b_KFTau_Fit_InitialPrimaryVertex);
   fChain->SetBranchAddress("KFTau_Fit_InitialPrimaryVertexReFit", &KFTau_Fit_InitialPrimaryVertexReFit, &b_KFTau_Fit_InitialPrimaryVertexReFit);
   fChain->SetBranchAddress("KFTau_Fit_SecondaryVertex", &KFTau_Fit_SecondaryVertex, &b_KFTau_Fit_SecondaryVertex);
   fChain->SetBranchAddress("KFTau_Fit_InitialSecondaryVertex", &KFTau_Fit_InitialSecondaryVertex, &b_KFTau_Fit_InitialSecondaryVertex);
   fChain->SetBranchAddress("KFTau_Fit_Chi2Prob", &KFTau_Fit_Chi2Prob, &b_KFTau_Fit_Chi2Prob);
   fChain->SetBranchAddress("KFTau_TauVis_p4", &KFTau_TauVis_p4, &b_KFTau_TauVis_p4);
   fChain->SetBranchAddress("KFTau_TauFit_p4", &KFTau_TauFit_p4, &b_KFTau_TauFit_p4);
   fChain->SetBranchAddress("KFTau_Neutrino_p4", &KFTau_Neutrino_p4, &b_KFTau_Neutrino_p4);
   fChain->SetBranchAddress("KFTau_MatchedHPS_idx", &KFTau_MatchedHPS_idx, &b_KFTau_MatchedHPS_idx);
   fChain->SetBranchAddress("KFTau_Track_idx", &KFTau_Track_idx, &b_KFTau_Track_idx);
   fChain->SetBranchAddress("KFTau_indexOfFitInfo", &KFTau_indexOfFitInfo, &b_KFTau_indexOfFitInfo);
   fChain->SetBranchAddress("KFTau_Fit_TauPrimVtx", &KFTau_Fit_TauPrimVtx, &b_KFTau_Fit_TauPrimVtx);
   fChain->SetBranchAddress("KFTau_Fit_chi2", &KFTau_Fit_chi2, &b_KFTau_Fit_chi2);
   fChain->SetBranchAddress("KFTau_Fit_ndf", &KFTau_Fit_ndf, &b_KFTau_Fit_ndf);
   fChain->SetBranchAddress("KFTau_Fit_charge", &KFTau_Fit_charge, &b_KFTau_Fit_charge);
   fChain->SetBranchAddress("KFTau_Fit_csum", &KFTau_Fit_csum, &b_KFTau_Fit_csum);
   fChain->SetBranchAddress("KFTau_Fit_iterations", &KFTau_Fit_iterations, &b_KFTau_Fit_iterations);
   fChain->SetBranchAddress("KFTau_Fit_BDTVal", &KFTau_Fit_BDTVal, &b_KFTau_Fit_BDTVal);
   fChain->SetBranchAddress("KFTau_Fit_TauEnergyFraction", &KFTau_Fit_TauEnergyFraction, &b_KFTau_Fit_TauEnergyFraction);
   fChain->SetBranchAddress("KFTau_Fit_RefitVisibleMass", &KFTau_Fit_RefitVisibleMass, &b_KFTau_Fit_RefitVisibleMass);
//    fChain->SetBranchAddress("KFTau_Fit_Chi2Prob", &KFTau_Fit_Chi2Prob, &b_KFTau_Fit_Chi2Prob);
   fChain->SetBranchAddress("KFTau_Fit_PV_PV_significance", &KFTau_Fit_PV_PV_significance, &b_KFTau_Fit_PV_PV_significance);
   fChain->SetBranchAddress("KFTau_Fit_SV_PV_significance", &KFTau_Fit_SV_PV_significance, &b_KFTau_Fit_SV_PV_significance);
   fChain->SetBranchAddress("KFTau_Daughter_pdgid", &KFTau_Daughter_pdgid, &b_KFTau_Daughter_pdgid);
   fChain->SetBranchAddress("KFTau_Daughter_charge", &KFTau_Daughter_charge, &b_KFTau_Daughter_charge);
   fChain->SetBranchAddress("KFTau_Daughter_ambiguity", &KFTau_Daughter_ambiguity, &b_KFTau_Daughter_ambiguity);
   fChain->SetBranchAddress("KFTau_Daughter_par", &KFTau_Daughter_par, &b_KFTau_Daughter_par);
   fChain->SetBranchAddress("KFTau_Daughter_parCov", &KFTau_Daughter_parCov, &b_KFTau_Daughter_parCov);
   fChain->SetBranchAddress("KFTau_Daughter_inputpar", &KFTau_Daughter_inputpar, &b_KFTau_Daughter_inputpar);
   fChain->SetBranchAddress("KFTau_Daughter_inputparCov", &KFTau_Daughter_inputparCov, &b_KFTau_Daughter_inputparCov);
   fChain->SetBranchAddress("ReducedVtx_chi2", &ReducedVtx_chi2, &b_ReducedVtx_chi2);
   fChain->SetBranchAddress("ReducedVtx_nTrk", &ReducedVtx_nTrk, &b_ReducedVtx_nTrk);
   fChain->SetBranchAddress("ReducedVtx_ndof", &ReducedVtx_ndof, &b_ReducedVtx_ndof);
   fChain->SetBranchAddress("ReducedVtx_x", &ReducedVtx_x, &b_ReducedVtx_x);
   fChain->SetBranchAddress("ReducedVtx_y", &ReducedVtx_y, &b_ReducedVtx_y);
   fChain->SetBranchAddress("ReducedVtx_z", &ReducedVtx_z, &b_ReducedVtx_z);
   fChain->SetBranchAddress("ReducedVtx_Cov", &ReducedVtx_Cov, &b_ReducedVtx_Cov);
   fChain->SetBranchAddress("ReducedVtx_Track_idx", &ReducedVtx_Track_idx, &b_ReducedVtx_Track_idx);
   fChain->SetBranchAddress("ReducedVtx_isFake", &ReducedVtx_isFake, &b_ReducedVtx_isFake);
   fChain->SetBranchAddress("isPatJet", &isPatJet, &b_isPatJet);
   fChain->SetBranchAddress("PFJet_p4", &PFJet_p4, &b_PFJet_p4);
   fChain->SetBranchAddress("PFJet_Poca", &PFJet_Poca, &b_PFJet_Poca);
   fChain->SetBranchAddress("PFJet_chargedEmEnergy", &PFJet_chargedEmEnergy, &b_PFJet_chargedEmEnergy);
   fChain->SetBranchAddress("PFJet_chargedHadronEnergy", &PFJet_chargedHadronEnergy, &b_PFJet_chargedHadronEnergy);
   fChain->SetBranchAddress("PFJet_chargedHadronMultiplicity", &PFJet_chargedHadronMultiplicity, &b_PFJet_chargedHadronMultiplicity);
   fChain->SetBranchAddress("PFJet_chargedMuEnergy", &PFJet_chargedMuEnergy, &b_PFJet_chargedMuEnergy);
   fChain->SetBranchAddress("PFJet_chargedMultiplicity", &PFJet_chargedMultiplicity, &b_PFJet_chargedMultiplicity);
   fChain->SetBranchAddress("PFJet_electronEnergy", &PFJet_electronEnergy, &b_PFJet_electronEnergy);
   fChain->SetBranchAddress("PFJet_electronMultiplicity", &PFJet_electronMultiplicity, &b_PFJet_electronMultiplicity);
   fChain->SetBranchAddress("PFJet_HFEMEnergy", &PFJet_HFEMEnergy, &b_PFJet_HFEMEnergy);
   fChain->SetBranchAddress("PFJet_HFEMMultiplicity", &PFJet_HFEMMultiplicity, &b_PFJet_HFEMMultiplicity);
   fChain->SetBranchAddress("PFJet_HFHadronEnergy", &PFJet_HFHadronEnergy, &b_PFJet_HFHadronEnergy);
   fChain->SetBranchAddress("PFJet_HFHadronMultiplicity", &PFJet_HFHadronMultiplicity, &b_PFJet_HFHadronMultiplicity);
   fChain->SetBranchAddress("PFJet_muonEnergy", &PFJet_muonEnergy, &b_PFJet_muonEnergy);
   fChain->SetBranchAddress("PFJet_muonMultiplicity", &PFJet_muonMultiplicity, &b_PFJet_muonMultiplicity);
   fChain->SetBranchAddress("PFJet_neutralEmEnergy", &PFJet_neutralEmEnergy, &b_PFJet_neutralEmEnergy);
   fChain->SetBranchAddress("PFJet_neutralHadronEnergy", &PFJet_neutralHadronEnergy, &b_PFJet_neutralHadronEnergy);
   fChain->SetBranchAddress("PFJet_neutralHadronMultiplicity", &PFJet_neutralHadronMultiplicity, &b_PFJet_neutralHadronMultiplicity);
   fChain->SetBranchAddress("PFJet_photonEnergy", &PFJet_photonEnergy, &b_PFJet_photonEnergy);
   fChain->SetBranchAddress("PFJet_photonMultiplicity", &PFJet_photonMultiplicity, &b_PFJet_photonMultiplicity);
   fChain->SetBranchAddress("PFJet_jetArea", &PFJet_jetArea, &b_PFJet_jetArea);
   fChain->SetBranchAddress("PFJet_maxDistance", &PFJet_maxDistance, &b_PFJet_maxDistance);
   fChain->SetBranchAddress("PFJet_nConstituents", &PFJet_nConstituents, &b_PFJet_nConstituents);
   fChain->SetBranchAddress("PFJet_pileup", &PFJet_pileup, &b_PFJet_pileup);
   fChain->SetBranchAddress("PFJet_etaetaMoment", &PFJet_etaetaMoment, &b_PFJet_etaetaMoment);
   fChain->SetBranchAddress("PFJet_etaphiMoment", &PFJet_etaphiMoment, &b_PFJet_etaphiMoment);
   fChain->SetBranchAddress("PFJet_Track_idx", &PFJet_Track_idx, &b_PFJet_Track_idx);
   fChain->SetBranchAddress("PFJet_MatchedHPS_idx", &PFJet_MatchedHPS_idx, &b_PFJet_MatchedHPS_idx);
   fChain->SetBranchAddress("PFJet_numberOfDaughters", &PFJet_numberOfDaughters, &b_PFJet_numberOfDaughters);
   fChain->SetBranchAddress("PFJet_chargedEmEnergyFraction", &PFJet_chargedEmEnergyFraction, &b_PFJet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("PFJet_chargedHadronEnergyFraction", &PFJet_chargedHadronEnergyFraction, &b_PFJet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("PFJet_neutralHadronEnergyFraction", &PFJet_neutralHadronEnergyFraction, &b_PFJet_neutralHadronEnergyFraction);
   fChain->SetBranchAddress("PFJet_neutralEmEnergyFraction", &PFJet_neutralEmEnergyFraction, &b_PFJet_neutralEmEnergyFraction);
   fChain->SetBranchAddress("PFJet_partonFlavour", &PFJet_partonFlavour, &b_PFJet_partonFlavour);
   fChain->SetBranchAddress("PFJet_bDiscriminator", &PFJet_bDiscriminator, &b_PFJet_bDiscriminator);
   fChain->SetBranchAddress("PFJet_BTagWeight", &PFJet_BTagWeight, &b_PFJet_BTagWeight);
   fChain->SetBranchAddress("PFJet_TracksP4", &PFJet_TracksP4, &b_PFJet_TracksP4);
   fChain->SetBranchAddress("PFJet_nTrk", &PFJet_nTrk, &b_PFJet_nTrk);
   fChain->SetBranchAddress("isPatMET", &isPatMET, &b_isPatMET);
   fChain->SetBranchAddress("MET_et", &MET_et, &b_MET_et);
   fChain->SetBranchAddress("MET_pt", &MET_pt, &b_MET_pt);
   fChain->SetBranchAddress("MET_phi", &MET_phi, &b_MET_phi);
   fChain->SetBranchAddress("MET_sumET", &MET_sumET, &b_MET_sumET);
   fChain->SetBranchAddress("MET_metSignificance", &MET_metSignificance, &b_MET_metSignificance);
   fChain->SetBranchAddress("MET_MuonEtFraction", &MET_MuonEtFraction, &b_MET_MuonEtFraction);
   fChain->SetBranchAddress("MET_NeutralEMFraction", &MET_NeutralEMFraction, &b_MET_NeutralEMFraction);
   fChain->SetBranchAddress("MET_NeutralHadEtFraction", &MET_NeutralHadEtFraction, &b_MET_NeutralHadEtFraction);
   fChain->SetBranchAddress("MET_Type6EtFraction", &MET_Type6EtFraction, &b_MET_Type6EtFraction);
   fChain->SetBranchAddress("MET_Type7EtFraction", &MET_Type7EtFraction, &b_MET_Type7EtFraction);
   fChain->SetBranchAddress("MET_Corr_et", &MET_Corr_et, &b_MET_Corr_et);
   fChain->SetBranchAddress("MET_Corr_pt", &MET_Corr_pt, &b_MET_Corr_pt);
   fChain->SetBranchAddress("MET_Corr_phi", &MET_Corr_phi, &b_MET_Corr_phi);
   fChain->SetBranchAddress("MET_Corr_SumET", &MET_Corr_SumET, &b_MET_Corr_SumET);
   fChain->SetBranchAddress("Event_EventNumber", &Event_EventNumber, &b_Event_EventNumber);
   fChain->SetBranchAddress("Event_RunNumber", &Event_RunNumber, &b_Event_RunNumber);
   fChain->SetBranchAddress("Event_bunchCrossing", &Event_bunchCrossing, &b_Event_bunchCrossing);
   fChain->SetBranchAddress("Event_orbitNumber", &Event_orbitNumber, &b_Event_orbitNumber);
   fChain->SetBranchAddress("Event_luminosityBlock", &Event_luminosityBlock, &b_Event_luminosityBlock);
   fChain->SetBranchAddress("Event_isRealData", &Event_isRealData, &b_Event_isRealData);
   fChain->SetBranchAddress("PileupInfo_NumInteractions_nm1", &PileupInfo_NumInteractions_nm1, &b_PileupInfo_NumInteractions_nm1);
   fChain->SetBranchAddress("PileupInfo_NumInteractions_n0", &PileupInfo_NumInteractions_n0, &b_PileupInfo_NumInteractions_n0);
   fChain->SetBranchAddress("PileupInfo_NumInteractions_np1", &PileupInfo_NumInteractions_np1, &b_PileupInfo_NumInteractions_np1);
   fChain->SetBranchAddress("EvtWeight3D", &EvtWeight3D, &b_EvtWeight3D);
   fChain->SetBranchAddress("TauSpinnerWeight", &TauSpinnerWeight, &b_TauSpinnerWeight);
   fChain->SetBranchAddress("SelEffWeight", &SelEffWeight, &b_SelEffWeight);
   fChain->SetBranchAddress("RadiationCorrWeight", &RadiationCorrWeight, &b_RadiationCorrWeight);
   fChain->SetBranchAddress("MinVisPtFilter", &MinVisPtFilter, &b_MinVisPtFilter);
   fChain->SetBranchAddress("KinWeightPt", &KinWeightPt, &b_KinWeightPt);
   fChain->SetBranchAddress("KinWeightEta", &KinWeightEta, &b_KinWeightEta);
   fChain->SetBranchAddress("KinWeightMassPt", &KinWeightMassPt, &b_KinWeightMassPt);
   fChain->SetBranchAddress("EmbeddedWeight", &EmbeddedWeight, &b_EmbeddedWeight);
   fChain->SetBranchAddress("Track_p4", &Track_p4, &b_Track_p4);
   fChain->SetBranchAddress("Track_Poca", &Track_Poca, &b_Track_Poca);
   fChain->SetBranchAddress("Track_charge", &Track_charge, &b_Track_charge);
   fChain->SetBranchAddress("Track_chi2", &Track_chi2, &b_Track_chi2);
   fChain->SetBranchAddress("Track_ndof", &Track_ndof, &b_Track_ndof);
   fChain->SetBranchAddress("Track_numberOfLostHits", &Track_numberOfLostHits, &b_Track_numberOfLostHits);
   fChain->SetBranchAddress("Track_numberOfValidHits", &Track_numberOfValidHits, &b_Track_numberOfValidHits);
   fChain->SetBranchAddress("Track_qualityMask", &Track_qualityMask, &b_Track_qualityMask);
   fChain->SetBranchAddress("Track_par", &Track_par, &b_Track_par);
   fChain->SetBranchAddress("Track_parCov", &Track_parCov, &b_Track_parCov);
   fChain->SetBranchAddress("GenEventInfoProduct_signalProcessID", &GenEventInfoProduct_signalProcessID, &b_GenEventInfoProduct_signalProcessID);
   fChain->SetBranchAddress("GenEventInfoProduct_weight", &GenEventInfoProduct_weight, &b_GenEventInfoProduct_weight);
   fChain->SetBranchAddress("GenEventInfoProduct_weights", &GenEventInfoProduct_weights, &b_GenEventInfoProduct_weights);
   fChain->SetBranchAddress("GenEventInfoProduct_qScale", &GenEventInfoProduct_qScale, &b_GenEventInfoProduct_qScale);
   fChain->SetBranchAddress("GenEventInfoProduct_alphaQED", &GenEventInfoProduct_alphaQED, &b_GenEventInfoProduct_alphaQED);
   fChain->SetBranchAddress("GenEventInfoProduct_alphaQCD", &GenEventInfoProduct_alphaQCD, &b_GenEventInfoProduct_alphaQCD);
   fChain->SetBranchAddress("MC_p4", &MC_p4, &b_MC_p4);
   fChain->SetBranchAddress("MC_pdgid", &MC_pdgid, &b_MC_pdgid);
   fChain->SetBranchAddress("MC_charge", &MC_charge, &b_MC_charge);
   fChain->SetBranchAddress("MC_midx", &MC_midx, &b_MC_midx);
   fChain->SetBranchAddress("MC_childpdgid", &MC_childpdgid, &b_MC_childpdgid);
   fChain->SetBranchAddress("MCSignalParticle_p4", &MCSignalParticle_p4, &b_MCSignalParticle_p4);
   fChain->SetBranchAddress("MCSignalParticle_pdgid", &MCSignalParticle_pdgid, &b_MCSignalParticle_pdgid);
   fChain->SetBranchAddress("MCSignalParticle_charge", &MCSignalParticle_charge, &b_MCSignalParticle_charge);
   fChain->SetBranchAddress("MCSignalParticle_Poca", &MCSignalParticle_Poca, &b_MCSignalParticle_Poca);
   fChain->SetBranchAddress("MCSignalParticle_Tauidx", &MCSignalParticle_Tauidx, &b_MCSignalParticle_Tauidx);
   fChain->SetBranchAddress("MCTauandProd_p4", &MCTauandProd_p4, &b_MCTauandProd_p4);
   fChain->SetBranchAddress("MCTauandProd_Vertex", &MCTauandProd_Vertex, &b_MCTauandProd_Vertex);
   fChain->SetBranchAddress("MCTauandProd_pdgid", &MCTauandProd_pdgid, &b_MCTauandProd_pdgid);
   fChain->SetBranchAddress("MCTauandProd_midx", &MCTauandProd_midx, &b_MCTauandProd_midx);
   fChain->SetBranchAddress("MCTauandProd_charge", &MCTauandProd_charge, &b_MCTauandProd_charge);
   fChain->SetBranchAddress("MCTau_JAK", &MCTau_JAK, &b_MCTau_JAK);
   fChain->SetBranchAddress("MCTau_DecayBitMask", &MCTau_DecayBitMask, &b_MCTau_DecayBitMask);
   fChain->SetBranchAddress("HTLTriggerName", &HTLTriggerName, &b_HTLTriggerName);
   fChain->SetBranchAddress("TriggerAccept", &TriggerAccept, &b_TriggerAccept);
   fChain->SetBranchAddress("TriggerError", &TriggerError, &b_TriggerError);
   fChain->SetBranchAddress("TriggerWasRun", &TriggerWasRun, &b_TriggerWasRun);
   fChain->SetBranchAddress("HLTPrescale", &HLTPrescale, &b_HLTPrescale);
   fChain->SetBranchAddress("NHLTL1GTSeeds", &NHLTL1GTSeeds, &b_NHLTL1GTSeeds);
   fChain->SetBranchAddress("L1SEEDPrescale", &L1SEEDPrescale, &b_L1SEEDPrescale);
   fChain->SetBranchAddress("L1SEEDInvalidPrescale", &L1SEEDInvalidPrescale, &b_L1SEEDInvalidPrescale);
   fChain->SetBranchAddress("L1SEEDisTechBit", &L1SEEDisTechBit, &b_L1SEEDisTechBit);
   fChain->SetBranchAddress("MuonTriggerMatch", &MuonTriggerMatch, &b_MuonTriggerMatch);
   fChain->SetBranchAddress("ElectronTriggerMatch", &ElectronTriggerMatch, &b_ElectronTriggerMatch);
   fChain->SetBranchAddress("JetTriggerMatch", &JetTriggerMatch, &b_JetTriggerMatch);
   fChain->SetBranchAddress("TauTriggerMatch", &TauTriggerMatch, &b_TauTriggerMatch);
   fChain->SetBranchAddress("HLTTrigger_objs_Pt", &HLTTrigger_objs_Pt, &b_HLTTrigger_objs_Pt);
   fChain->SetBranchAddress("HLTTrigger_objs_Eta", &HLTTrigger_objs_Eta, &b_HLTTrigger_objs_Eta);
   fChain->SetBranchAddress("HLTTrigger_objs_Phi", &HLTTrigger_objs_Phi, &b_HLTTrigger_objs_Phi);
   fChain->SetBranchAddress("L1TriggerName", &L1TriggerName, &b_L1TriggerName);
   fChain->SetBranchAddress("L1TriggerDecision", &L1TriggerDecision, &b_L1TriggerDecision);
   fChain->SetBranchAddress("L1ErrorCode", &L1ErrorCode, &b_L1ErrorCode);
   fChain->SetBranchAddress("L1Prescale", &L1Prescale, &b_L1Prescale);
   Notify();
}

Bool_t NtupleReader::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void NtupleReader::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t NtupleReader::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef NtupleReader_cxx
