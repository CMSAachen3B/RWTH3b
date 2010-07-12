import FWCore.ParameterSet.Config as cms
from Configuration.StandardSequences.MagneticField_cff import *
from Configuration.StandardSequences.Geometry_cff import *
from TrackingTools.TransientTrack.TransientTrackBuilder_cfi import *
from RecoTauTag.KinematicTau.InputTrackSelector_cfi import pfTau #choose tau type according to InputTrackSelector_cfi.py

KinematicTauProducer = cms.EDFilter("KinematicTauAdvancedProducer",#creates reco::CandidateRefVector containing refs to selected jets
	#parameters for KinematicConstrainedVertexFitter
	fitParameters = cms.PSet(#parameters for KinematicConstrainedVertexFitter
		maxDistance = cms.double(.001),#stopping condition
		maxNbrOfIterations = cms.int32(20),	#number of iterations
		maxOfInitialValue = cms.double(9999.)
	),
	primVtx = cms.InputTag("PrimVtxSelector","primVtx"),#selected offlinePrimaryVerticesFromCTFTrack
	selectedTauCandidates = cms.InputTag("InputTrackSelector","InputTauRefs"),
	discriminators = cms.vstring(#all discrimns from evtDump on 3_1_4 skim to be stored in SelectedKinematicDecay
		pfTau+"PFTauDiscriminationAgainstElectron",
		pfTau+"PFTauDiscriminationAgainstMuon",
		pfTau+"PFTauDiscriminationByECALIsolation",
		pfTau+"PFTauDiscriminationByECALIsolationUsingLeadingPion",
		pfTau+"PFTauDiscriminationByIsolation",
		pfTau+"PFTauDiscriminationByIsolationUsingLeadingPion",
		pfTau+"PFTauDiscriminationByLeadingPionPtCut",
		pfTau+"PFTauDiscriminationByLeadingTrackFinding",
		pfTau+"PFTauDiscriminationByLeadingTrackPtCut",
		pfTau+"PFTauDiscriminationByTrackIsolation",
		pfTau+"PFTauDiscriminationByTrackIsolationUsingLeadingPion"
	),
	inputTracks = cms.InputTag("InputTrackSelector","InputTracks"),#selected tracks from PFTaus (daughters of selectedTauCandidates)

	minKinTau = cms.untracked.uint32(1)#minimum kin. taus to produce (otherwise filter returns false)	
)
