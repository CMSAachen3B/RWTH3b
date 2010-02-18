import FWCore.ParameterSet.Config as cms
from Configuration.StandardSequences.MagneticField_cff import *
from Configuration.StandardSequences.Geometry_cff import *
from Configuration.StandardSequences.FrontierConditions_GlobalTag_cff import * #https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideFrontierConditions#Global_Tags_for_Monte_Carlo_Prod
GlobalTag.globaltag = 'MC_31X_V3::All'
from TrackingTools.TransientTrack.TransientTrackBuilder_cfi import *


ThreeProngInputSelector = cms.EDFilter("ThreeProngInputSelector",#creates PFTauRefVector and collection of vector<reco::TrackRefVector> of size 3 for each tau cand and recreates the primary vertex 
	tauCandidates = cms.InputTag("InputTracks"),
    primVtx = cms.InputTag("offlinePrimaryVertices"),#offlinePrimaryVerticesFromCTFTrack
	minVtxTracks = cms.untracked.int32(3),
	maxChi2ndf = cms.untracked.double(10.0),
)
