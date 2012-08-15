import FWCore.ParameterSet.Config as cms

postProcessorKinematicFitValidation = cms.EDAnalyzer(
    "DQMGenericClient",
    subDirs = cms.untracked.vstring("Tau/KinematicFitTau*"),
    efficiency = cms.vstring(""),
    resolution = cms.vstring(""),
    normalization = cms.untracked.vstring("JAKID nEvt",
                                          "TauMatched nEvt",
                                          "NuEChange nEvt",
                                          "NuMass nEvt",
                                          "NuMatchdphiJAKID5 nEvt",
                                          "NuMatchdphiJAKID8 nEvt",
                                          "NuMatchdthetaJAKID5 nEvt",
                                          "NuMatchdthetaJAKID8 nEvt",
                                          "NuMatcheJAKID5 nEvt",
                                          "NuMatcheJAKID8 nEvt",
                                          "NuPhiChange nEvt",
                                          "NuThetaChange nEvt",
                                          "PionEChange nEvt",
                                          "PionMass nEvt",
                                          "PionMatchdphiJAKID5 nEvt",
                                          "PionMatchdphiJAKID8 nEvt",
                                          "PionMatchdthetaJAKID5 nEvt",
                                          "PionMatchdthetaJAKID8 nEvt",
                                          "PionMatcheJAKID5 nEvt",
                                          "PionMatcheJAKID8 nEvt",
                                          "PionPhiChange nEvt",
                                          "PionThetaChange nEvt",
                                          "SecVtxXChange nEvt",
                                          "SecVtxYChange nEvt",
                                          "SecVtxZChange nEvt",
                                          "TauEChange nEvt",
                                          "TauMass nEvt",
                                          "TauMatchdphiJAKID5 nEvt",
                                          "TauMatchdphiJAKID8 nEvt",
                                          "TauMatchdthetaJAKID5 nEvt",
                                          "TauMatchdthetaJAKID8 nEvt",
                                          "TauMatcheJAKID5 nEvt",
                                          "TauMatcheJAKID8 nEvt",
                                          "TauPhiChange nEvt",
                                          "TauThetaChange nEvt",
                                          "VtxXChange nEvt",
                                          "VtxYChange nEvt",
                                          "VtxZChange nEvt",
                                          "dNuMass nEvt",
                                          "dPionMass nEvt",
                                          "dTauMass nEvt"
                                          )
    )

