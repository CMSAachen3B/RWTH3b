import FWCore.ParameterSet.Config as cms
from Configuration.StandardSequences.MagneticField_cff import *
from Configuration.StandardSequences.Geometry_cff import *
from Configuration.StandardSequences.FrontierConditions_GlobalTag_cff import * #https://twiki.cern.ch/twiki/bin/view/CMS/SWGuideFrontierConditions#Global_Tags_for_Monte_Carlo_Prod
GlobalTag.globaltag = 'MC_31X_V3::All'
from TrackingTools.TransientTrack.TransientTrackBuilder_cfi import *


#pfTau = 'shrinkingCone'		#Signal cone: dR = 5/Et, Iso Cone = 0.5, 0.07 < dR < 0.15; where Et is the tau tranvserse energy
#pfTau = 'fixedCone'				#Signal cone: dR = 0.07, Iso Cone = 0.5
pfTau = 'fixedConeHighEff'		#Signal cone: dR = 0.15, Iso Cone = 0.5


pfTauSelector = cms.EDFilter("PFTauSelector",
   src = cms.InputTag(pfTau+"PFTauProducer"),#fixedConeHighEffPFTauProducer
   discriminators = cms.VPSet(
      cms.PSet( discriminator=cms.InputTag(pfTau+"PFTauDiscrimination"+"ByIsolation"),selectionCut=cms.double(0.5)),
      cms.PSet( discriminator=cms.InputTag(pfTau+"PFTauDiscrimination"+"AgainstElectrons"),selectionCut=cms.double(0.5))
   )
)

InputTrackSelector = cms.EDFilter("InputTrackSelector",#creates PFTauRefVector and collection of vector<reco::TrackRefVector> for each tau cand
	tauCandidates = cms.InputTag(pfTau+"PFTauProducer"),
	minTracks = cms.uint32(3),#only tau candidates with more/equal than minTracks are selected
	minTau = cms.untracked.uint32(1),#minimum taus to select (otherwise filter returns false)
    primVtx = cms.InputTag("offlinePrimaryVertices"),#offlinePrimaryVerticesFromCTFTrack
	minVtxTracks = cms.untracked.int32(3),
	maxChi2ndf = cms.untracked.double(10.0),
)

tauSelectorSeq = cms.Sequence(
	pfTauSelector
	*InputTrackSelector
)
