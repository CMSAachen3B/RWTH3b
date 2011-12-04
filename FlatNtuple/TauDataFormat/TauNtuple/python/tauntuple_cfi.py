import FWCore.ParameterSet.Config as cms

NtupleMaker = cms.EDProducer('TauNtuple',
                             primVtx = cms.InputTag("offlinePrimaryVertices"),
                             hpsTauProducer=cms.InputTag("hpsPFTauProducer"),
                             hpsPFTauDiscriminationByTightIsolation =cms.InputTag("hpsPFTauDiscriminationByTightIsolation"), 
                             hpsPFTauDiscriminationByMediumIsolation=cms.InputTag("hpsPFTauDiscriminationByMediumIsolation"),
                             hpsPFTauDiscriminationByLooseIsolation =cms.InputTag("hpsPFTauDiscriminationByLooseIsolation"),
                             pfMet = cms.InputTag('pfMet'),
                             muons   = cms.InputTag('muons'),
                             kinematicTaus  = cms.InputTag("KinematicTauBasicProducer"),
                             kinematicTausAdvanced = cms.InputTag("DetailedProducer","SelectedKinematicDecays"),
                             tauPrimaryVtx  =cms.InputTag("ThreeProngInputSelector","primVtx"),
                             pfjets         = cms.InputTag("ak5PFJets"),
                             generalTracks  = cms.InputTag("generalTracks"),
                             gensrc         = cms.InputTag('genParticles'),
                             discriminators = cms.vstring("PFRecoTauDiscriminationByKinematicFit","PFRecoTauDiscriminationByKinematicFitQuality"),
                             do_MCComplete  = cms.untracked.bool(False),
                             do_MCSummary   = cms.untracked.bool(True)
)
