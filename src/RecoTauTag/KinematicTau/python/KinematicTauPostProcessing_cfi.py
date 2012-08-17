import FWCore.ParameterSet.Config as cms

postProcessorKinematicFitValidation = cms.EDAnalyzer(
    "DQMGenericClient",
    subDirs = cms.untracked.vstring("Tau/KinematicFitTau*"),
    efficiency = cms.vstring(""),
    resolution = cms.vstring(""),
    normalization = cms.untracked.vstring("JAKIDZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatchedZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuEChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatchdphiJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatchdphiJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatchdthetaJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatchdthetaJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatcheJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuMatcheJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuPhiChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "NuThetaChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionEChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatchdphiJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatchdphiJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatchdthetaJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatchdthetaJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatcheJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionMatcheJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionPhiChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "PionThetaChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "SecVtxXChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "SecVtxYChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "SecVtxZChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauEChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatchdphiJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatchdphiJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatchdthetaJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatchdthetaJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatcheJAKID5ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauMatcheJAKID8ZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauPhiChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "TauThetaChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "VtxXChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "VtxYChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "VtxZChangeZeroAmbiguity nEvtZeroAmbiguity",
                                          "dNuMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "dPionMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "dTauMassZeroAmbiguity nEvtZeroAmbiguity",
                                          "JAKIDPlusSolution nEvtPlusSolution",
                                          "TauMatchedPlusSolution nEvtPlusSolution",
                                          "NuEChangePlusSolution nEvtPlusSolution",
                                          "NuMassPlusSolution nEvtPlusSolution",
                                          "NuMatchdphiJAKID5PlusSolution nEvtPlusSolution",
                                          "NuMatchdphiJAKID8PlusSolution nEvtPlusSolution",
                                          "NuMatchdthetaJAKID5PlusSolution nEvtPlusSolution",
                                          "NuMatchdthetaJAKID8PlusSolution nEvtPlusSolution",
                                          "NuMatcheJAKID5PlusSolution nEvtPlusSolution",
                                          "NuMatcheJAKID8PlusSolution nEvtPlusSolution",
                                          "NuPhiChangePlusSolution nEvtPlusSolution",
                                          "NuThetaChangePlusSolution nEvtPlusSolution",
                                          "PionEChangePlusSolution nEvtPlusSolution",
                                          "PionMassPlusSolution nEvtPlusSolution",
                                          "PionMatchdphiJAKID5PlusSolution nEvtPlusSolution",
                                          "PionMatchdphiJAKID8PlusSolution nEvtPlusSolution",
                                          "PionMatchdthetaJAKID5PlusSolution nEvtPlusSolution",
                                          "PionMatchdthetaJAKID8PlusSolution nEvtPlusSolution",
                                          "PionMatcheJAKID5PlusSolution nEvtPlusSolution",
                                          "PionMatcheJAKID8PlusSolution nEvtPlusSolution",
                                          "PionPhiChangePlusSolution nEvtPlusSolution",
                                          "PionThetaChangePlusSolution nEvtPlusSolution",
                                          "SecVtxXChangePlusSolution nEvtPlusSolution",
                                          "SecVtxYChangePlusSolution nEvtPlusSolution",
                                          "SecVtxZChangePlusSolution nEvtPlusSolution",
                                          "TauEChangePlusSolution nEvtPlusSolution",
                                          "TauMassPlusSolution nEvtPlusSolution",
                                          "TauMatchdphiJAKID5PlusSolution nEvtPlusSolution",
                                          "TauMatchdphiJAKID8PlusSolution nEvtPlusSolution",
                                          "TauMatchdthetaJAKID5PlusSolution nEvtPlusSolution",
                                          "TauMatchdthetaJAKID8PlusSolution nEvtPlusSolution",
                                          "TauMatcheJAKID5PlusSolution nEvtPlusSolution",
                                          "TauMatcheJAKID8PlusSolution nEvtPlusSolution",
                                          "TauPhiChangePlusSolution nEvtPlusSolution",
                                          "TauThetaChangePlusSolution nEvtPlusSolution",
                                          "VtxXChangePlusSolution nEvtPlusSolution",
                                          "VtxYChangePlusSolution nEvtPlusSolution",
                                          "VtxZChangePlusSolution nEvtPlusSolution",
                                          "dNuMassPlusSolution nEvtPlusSolution",
                                          "dPionMassPlusSolution nEvtPlusSolution",
                                          "dTauMassPlusSolution nEvtPlusSolution",
                                          "JAKIDMinusSolution nEvtMinusSolution",
                                          "TauMatchedMinusSolution nEvtMinusSolution",
                                          "NuEChangeMinusSolution nEvtMinusSolution",
                                          "NuMassMinusSolution nEvtMinusSolution",
                                          "NuMatchdphiJAKID5MinusSolution nEvtMinusSolution",
                                          "NuMatchdphiJAKID8MinusSolution nEvtMinusSolution",
                                          "NuMatchdthetaJAKID5MinusSolution nEvtMinusSolution",
                                          "NuMatchdthetaJAKID8MinusSolution nEvtMinusSolution",
                                          "NuMatcheJAKID5MinusSolution nEvtMinusSolution",
                                          "NuMatcheJAKID8MinusSolution nEvtMinusSolution",
                                          "NuPhiChangeMinusSolution nEvtMinusSolution",
                                          "NuThetaChangeMinusSolution nEvtMinusSolution",
                                          "PionEChangeMinusSolution nEvtMinusSolution",
                                          "PionMassMinusSolution nEvtMinusSolution",
                                          "PionMatchdphiJAKID5MinusSolution nEvtMinusSolution",
                                          "PionMatchdphiJAKID8MinusSolution nEvtMinusSolution",
                                          "PionMatchdthetaJAKID5MinusSolution nEvtMinusSolution",
                                          "PionMatchdthetaJAKID8MinusSolution nEvtMinusSolution",
                                          "PionMatcheJAKID5MinusSolution nEvtMinusSolution",
                                          "PionMatcheJAKID8MinusSolution nEvtMinusSolution",
                                          "PionPhiChangeMinusSolution nEvtMinusSolution",
                                          "PionThetaChangeMinusSolution nEvtMinusSolution",
                                          "SecVtxXChangeMinusSolution nEvtMinusSolution",
                                          "SecVtxYChangeMinusSolution nEvtMinusSolution",
                                          "SecVtxZChangeMinusSolution nEvtMinusSolution",
                                          "TauEChangeMinusSolution nEvtMinusSolution",
                                          "TauMassMinusSolution nEvtMinusSolution",
                                          "TauMatchdphiJAKID5MinusSolution nEvtMinusSolution",
                                          "TauMatchdphiJAKID8MinusSolution nEvtMinusSolution",
                                          "TauMatchdthetaJAKID5MinusSolution nEvtMinusSolution",
                                          "TauMatchdthetaJAKID8MinusSolution nEvtMinusSolution",
                                          "TauMatcheJAKID5MinusSolution nEvtMinusSolution",
                                          "TauMatcheJAKID8MinusSolution nEvtMinusSolution",
                                          "TauPhiChangeMinusSolution nEvtMinusSolution",
                                          "TauThetaChangeMinusSolution nEvtMinusSolution",
                                          "VtxXChangeMinusSolution nEvtMinusSolution",
                                          "VtxYChangeMinusSolution nEvtMinusSolution",
                                          "VtxZChangeMinusSolution nEvtMinusSolution",
                                          "dNuMassMinusSolution nEvtMinusSolution",
                                          "dPionMassMinusSolution nEvtMinusSolution",
                                          "dTauMassMinusSolution nEvtMinusSolution"
                                          )
    )
