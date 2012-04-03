#include "ZDouble3prong.h"
#include "TLorentzVector.h"
#include <cstdlib>
#include "HistoConfig.h"
#include <iostream>

#include "Tools.h"
#include "PDG_Var.h"
#include "TauDataFormat/TauNtuple/interface/DataMCType.h"

ZDouble3prong::ZDouble3prong(TString Name_, TString id_):
  Selection(Name_,id_)
  ,tau_pt(22)
  ,tau_eta(2.0)
  ,jet_pt(20)
  ,jet_eta(2.4)
{
  //  verbose=true;
}

ZDouble3prong::~ZDouble3prong(){
  for(int j=0; j<Npassed.size(); j++){
    std::cout << "ZDouble3prong::~ZDouble3prong Selection Summary before: " 
	 << Npassed.at(j).GetBinContent(1)     << " +/- " << Npassed.at(j).GetBinError(1)     << " after: "
	 << Npassed.at(j).GetBinContent(NCuts) << " +/- " << Npassed.at(j).GetBinError(NCuts) << std::endl;
  }
  std::cout << "ZDouble3prong::~ZDouble3prong()" << std::endl;
}

void  ZDouble3prong::Configure(){
  // Setup Cut Values
  for(int i=0; i<NCuts;i++){
    cut.push_back(0);
    value.push_back(0);
    pass.push_back(false);
    if(i==TriggerOk)          cut.at(TriggerOk)=1;
    if(i==PrimeVtx)           cut.at(PrimeVtx)=1;
    if(i==NJets)              cut.at(NJets)=1;
    if(i==MET)                cut.at(MET)=40;
    if(i==NTauKinFit)         cut.at(NTauKinFit)=2;
    if(i==NTauPt)             cut.at(NTauPt)=2;
    if(i==NTauEta)            cut.at(NTauEta)=2 ;
    if(i==TauIso)             cut.at(TauIso)=0.4 ;
    if(i==TauTauVertex)       cut.at(TauTauVertex)=3;
    if(i==deltaPhi)           cut.at(deltaPhi)=-1/sqrt(2);
    if(i==charge)             cut.at(charge)=0;
    if(i==ZMassmax)           cut.at(ZMassmax)=PDG_Var::Z_mass()+30;
    if(i==ZMassmin)           cut.at(ZMassmin)=PDG_Var::Z_mass()-30;
  }

  TString hlabel;
  TString htitle;
  for(unsigned int i=0; i<NCuts; i++){
    title.push_back("");
    distindx.push_back(false);
    dist.push_back(std::vector<float>());
    Accumdist.push_back(std::vector<TH1D>());
    Nminus1dist.push_back(std::vector<TH1D>());

    TString c="_Cut_";
    if(i<10)c+="0";
    c+=i;
  
    if(i==PrimeVtx){
      title.at(i)="Number of Prime Vertices $(N>$";
      title.at(i)+=cut.at(PrimeVtx);
      title.at(i)+=")";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="Number of Prime Vertices";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_PrimeVtx_",htitle,31,-0.5,30.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_PrimeVtx_",htitle,31,-0.5,30.5,hlabel,"Events"));
    }
    else if(i==TriggerOk){
      title.at(i)="Trigger ";
      hlabel="Trigger ";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_TriggerOk_",htitle,17,-0.5,16.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_TriggerOk_",htitle,17,-0.5,16.5,hlabel,"Events"));
    }
    else if(i==NJets){
      title.at(i)="Number of Jets $>=$";
      title.at(i)+=cut.at(NJets);
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="Number of Jets";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_NJets_",htitle,11,-0.5,10.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_NJets_",htitle,11,-0.5,10.5,hlabel,"Events"));
    }
    else if(i==NTauKinFit){
      title.at(i)="Number of Kin. Fit $\\tau >=$";
      title.at(i)+=cut.at(NTauKinFit);
      title.at(i)+="(GeV)";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="Number of Kin. Fit #tau";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_NTauKinFit_",htitle,6,-0.5,5.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_NTauKinFit_",htitle,6,-0.5,5.5,hlabel,"Events"));
    }
    else if(i==NTauPt){
      title.at(i)="Number of $\\tau$ [$P_{T}^{\\tau}>$";
      title.at(i)+=tau_pt;
      title.at(i)+="(GeV)] $>=$";
      title.at(i)+=cut.at(NTauPt);
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="Number of #tau [Kin. Fit+P^{T}]";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_NTauPt_",htitle,6,-0.5,5.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_NTauPt_",htitle,6,-0.5,5.5,hlabel,"Events"));
      distindx.at(i)=true;
      Nminus1dist.at(i)=HConfig.GetTH1D(Name+c+"_Nminus1dist_NTauPt_","P_{T,#tau} (N-1 Distribution)",100,0,200,"P_{T,#tau} (GeV)","Events");
      Accumdist.at(i)=HConfig.GetTH1D(Name+c+"_Accum1dist_NTauPt_","P_{T,#tau} (Accumulative Distribution)",100,0,200,"P_{T,#tau} (GeV)","Events");
    }
    else if(i==NTauEta){
      title.at(i)="Number of $\\tau$ [$|\\eta^{\\tau}|<$";
      title.at(i)+=tau_eta;
      title.at(i)+="] $>=$";
      title.at(i)+=cut.at(NTauPt);
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="Number of #tau [Kin. Fit+P^{T}+#eta]";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_NTauEta_",htitle,6,-0.5,5.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_NTauEta_",htitle,6,-0.5,5.5,hlabel,"Events"));
      distindx.at(i)=true;
      Nminus1dist.at(i)=HConfig.GetTH1D(Name+c+"_Nminus1dist_NTauEta_","#eta{#tau} (N-1 Distribution)",100,0,200,"#eta_{#tau} (GeV)","Events");
      Accumdist.at(i)=HConfig.GetTH1D(Name+c+"_Accumdist_NTauEta_","#eta_{#tau} (Accumulative Distribution)",100,0,200,"#eta_{#tau} (GeV)","Events");
    }
    else if(i==MET){
      title.at(i)="$E_{T}^{Miss} < $";
      title.at(i)+=cut.at(MET);
      title.at(i)+="(GeV)";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="E_{T}^{Miss} (GeV)";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_MET_",htitle,40,0,200,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_MET_",htitle,40,0,200,hlabel,"Events"));
    } 
    else if(i==charge){
      title.at(i)="$\\tau-\\tau$ Charge = ";
      title.at(i)+=cut.at(charge);
      title.at(i)+="";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="#tau-#tau Charge ";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_HT_",htitle,21,-5.5,5.5,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_HT_",htitle,21,-5.5,5.5,hlabel,"Events"));
    }
    else if(i==deltaPhi){
      title.at(i)="$cos(\\phi_{\\tau-\\tau}) < $";
      char buffer[50];
      sprintf(buffer,"%5.2f",cut.at(deltaPhi));
      title.at(i)+=buffer;
      title.at(i)+="";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="cos(#phi_{#tau-#tau}";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_HadTopMass_",htitle,40,-1,1,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_HadTopMass_",htitle,40,-1,1,hlabel,"Events"));
    }
    else if(i==ZMassmax){
      title.at(i)="$M_{\\tau-\\tau} > $";
      char buffer[50];
      sprintf(buffer,"%5.2f",cut.at(ZMassmax));
      title.at(i)+=buffer;
      title.at(i)+="(GeV)";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="M_{#tau,#tau} (GeV)";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_TauMETTopMT_",htitle,60,0,300,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_TauMETTopMT_",htitle,60,0,300,hlabel,"Events"));
    }
    else if(i==ZMassmin){
      title.at(i)="$M_{\\tau-\\tau} < $";
      char buffer[50];
      sprintf(buffer,"%5.2f",cut.at(ZMassmin));
      title.at(i)+=buffer;
      title.at(i)+="(GeV)";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="M_{#tau,#tau} (GeV)";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_TauMETdphi_",htitle,60,0,300,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_TauMETdphi_",htitle,60,0,300,hlabel,"Events"));
   } 
    else if(i==TauIso){
      title.at(i)="$dr(\\tau,Jet) > $";
      char buffer[50];
      sprintf(buffer,"%5.2f",cut.at(TauIso));
      title.at(i)+=buffer;
      title.at(i)+="";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="dr(#tau,Jet) ";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_TauMETdphi_",htitle,40,0,200,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_TauMETdphi_",htitle,40,0,200,hlabel,"Events"));
    }
    else if(i==TauTauVertex){
      title.at(i)="has $\\tau-\\tau$ vertex";
      htitle=title.at(i);
      htitle.ReplaceAll("$","");
      htitle.ReplaceAll("\\","#");
      hlabel="has #tau-#tau vertex ";
      Nminus1.push_back(HConfig.GetTH1D(Name+c+"_Nminus1_TauTauVertex_",htitle,100,-25,25,hlabel,"Events"));
      Nminus0.push_back(HConfig.GetTH1D(Name+c+"_Nminus0_TauTauVertex_",htitle,100,-25,25,hlabel,"Events"));
    }
    //-----------
  }
  // Setup NPassed Histogams
  Npassed=HConfig.GetTH1D(Name+"_NPass","Cut Flow",NCuts+1,-1,NCuts,"Number of Accumulative Cuts Passed","Events");
  // Setup Extra Histograms
  NVtx=HConfig.GetTH1D(Name+"_NVtx","NVtx",26,-0.5,25.5,"Number of Vertex","Events");
  NGoodVtx=HConfig.GetTH1D(Name+"_NGoodVtx","NGoodVtx",26,-0.05,25.5,"Number of Good Vertex","Events");
  NTrackperVtx=HConfig.GetTH1D(Name+"_NTracksperVtx","NTracksperVtx",151,-0.5,150.5,"Number of Track per Vertex","Events");
  ZDouble3prongMT=HConfig.GetTH1D(Name+"_ZDouble3prongMT","ZDouble3prongMT",100,0,250,"M_{T,#tau,MET}","Events");
  TagEtaPT=HConfig.GetTH2D(Name+"_TagEtaPT","TagEtaPT",25,0,2.5,50,0,50,"#eta","P_{T}^{Tag}");


  KFTau_Fit_chiprob=HConfig.GetTH1D(Name+"_KFTau_Fit_prob","KFTau_Fit_prob",25,0,1,"Kinematic Fit Probability","Events");
  KFTau_Fit_a1mass=HConfig.GetTH1D(Name+"_KFTau_Fit_a1mass","KFTau_Fit_a1mass",25,0,2.5,"Kinematic Fit a_{1} Mass","Events");
  KFTau_Fit_chi2=HConfig.GetTH1D(Name+"_KFTau_Fit_chi2","KFTau_Fit_chi",25,0,25,"Kinematic Fit #chi^{2}","Events");
  KFTau_Fit_ndf=HConfig.GetTH1D(Name+"_KFTau_Fit_ndf","KFTau_Fit_ndf",25,0,25,"Kinematic Fit ndf","Events");
  KFTau_Fit_ambiguity=HConfig.GetTH1D(Name+"_KFTau_Fit_ambiguity","KFTau_Fit_ambiguity",5,-2.5,2.5,"Kinematic Fit Ambiguity","Events");
  KFTau_Fit_csum=HConfig.GetTH1D(Name+"_KFTau_Fit_csum","KFTau_Fit_csum",100,0,1.0,"Kinematic Fit csum","Events");
  KFTau_Fit_iterations=HConfig.GetTH1D(Name+"_KFTau_Fit_iterations","KFTau_Fit_iterations",25,0,25,"Kinematic Fit Iterations","Events");
  KFTau_Fit_TauEnergyFraction=HConfig.GetTH1D(Name+"_KFTau_Fit_TauEnergyFraction","KFTau_Fit_TauEnergyFraction",50,0,5.0,"Transverse Energy Fration,","Events");
  KFTau_Fit_PV_PV_significance=HConfig.GetTH1D(Name+"_ KFTau_Fit_PV_PV_significance"," KFTau_Fit_PV_PV_significance",50,0,10,"Kinematic Fit PV-PV_{Rotated} Significance","Events");
  KFTau_Fit_SV_PV_significance=HConfig.GetTH1D(Name+"_ KFTau_Fit_SV_PV_significance","KFTau_Fit_SV_PV_significance",50,0,10,"Kinematic Fit SV-PV_{Rotated} Significance","Events");


  Selection::ConfigureHistograms();
  HConfig.GetHistoInfo(types,CrossSectionandAcceptance,legend,colour);
  for(int i=0;i<CrossSectionandAcceptance.size();i++){
    std::cout << i << " CrossSectionandAcceptance " << CrossSectionandAcceptance.at(i) << std::endl;
  }
}




void  ZDouble3prong::Store_ExtraDist(){
 Extradist1d.push_back(&NVtx);
 Extradist1d.push_back(&NGoodVtx);
 Extradist1d.push_back(&NTrackperVtx);
 Extradist2d.push_back(&TagEtaPT);

 Extradist1d.push_back(&KFTau_Fit_chiprob);
 Extradist1d.push_back(&KFTau_Fit_a1mass);
 Extradist1d.push_back(&KFTau_Fit_chi2);
 Extradist1d.push_back(&KFTau_Fit_ndf);
 Extradist1d.push_back(&KFTau_Fit_ambiguity);
 Extradist1d.push_back(&KFTau_Fit_csum);
 Extradist1d.push_back(&KFTau_Fit_iterations);
 Extradist1d.push_back(&KFTau_Fit_TauEnergyFraction);
 Extradist1d.push_back(&KFTau_Fit_PV_PV_significance);
 Extradist1d.push_back(&KFTau_Fit_SV_PV_significance);

}

void  ZDouble3prong::doEvent(){
  unsigned int t;
  int id(Ntp->GetMCID());
  if(!HConfig.GetHisto(Ntp->isData(),id,t)){ std::cout << "failed to find id" <<std::endl; return;}

  if(verbose)std::cout << "void  ZDouble3prong::doEvent() A" << std::endl;

  value.at(TriggerOk)=0;
  if(Ntp->TriggerAccept("HLT_DoubleIsoPFTau20"))value.at(TriggerOk)+=1;
  if(Ntp->TriggerAccept("HLT_DoubleIsoPFTau35"))value.at(TriggerOk)+=2;
  if(Ntp->TriggerAccept("HLT_DoubleIsoPFTau40"))value.at(TriggerOk)+=4;
  if(Ntp->TriggerAccept("HLT_DoubleIsoPFTau45"))value.at(TriggerOk)+=8;
  pass.at(TriggerOk)=value.at(TriggerOk)==cut.at(TriggerOk);

  // Apply Selection
  unsigned int nGoodVtx=0;
  for(unsigned int i=0;i<Ntp->NVtx();i++){
    if(Ntp->isVtxGood(i))nGoodVtx++;
  }
  value.at(PrimeVtx)=nGoodVtx;
  pass.at(PrimeVtx)=(value.at(PrimeVtx)>=cut.at(PrimeVtx));
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() B" << std::endl;

  ///////////////////////////////////////////////
  //
  // Tau Cuts
  //
  std::vector<unsigned int> GoodTaus;
  for(unsigned i=0;i<Ntp->NKFTau();i++){
    if(Ntp->isGoodKFTau(i))GoodTaus.push_back(i);
  }
  value.at(NTauKinFit)=GoodTaus.size();
  pass.at(NTauKinFit)=(value.at(NTauKinFit)>=cut.at(NTauKinFit));
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() C" << std::endl;

  for(unsigned i=0;i<GoodTaus.size();i++){
    dist.at(NTauPt).push_back(Ntp->KFTau_TauVis_p4(GoodTaus.at(i)).Pt());
    if(Ntp->KFTau_TauVis_p4(GoodTaus.at(i)).Pt()<tau_pt){
      GoodTaus.erase(GoodTaus.begin()+i);
      i--;
    }
  }
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() D" << std::endl;
  value.at(NTauPt)=GoodTaus.size();
  pass.at(NTauPt)=(value.at(NTauPt)>=cut.at(NTauPt));
  for(unsigned i=0;i<GoodTaus.size();i++){
    dist.at(NTauEta).push_back(Ntp->KFTau_TauFit_p4(GoodTaus.at(i)).Eta());
    if(fabs(Ntp->KFTau_TauFit_p4(GoodTaus.at(i)).Eta())>tau_eta){
      GoodTaus.erase(GoodTaus.begin()+i);
      i--;
    }
  }
  value.at(NTauEta)=GoodTaus.size();
  pass.at(NTauEta)=(value.at(NTauEta)==cut.at(NTauEta));
  unsigned int tauidx1(999),tauidx2(999);
  if(GoodTaus.size()>=1)tauidx1=GoodTaus.at(0);
  if(GoodTaus.size()>=2)tauidx2=GoodTaus.at(1);
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() E " << tauidx1 <<" "<< tauidx1 << " " << tauidx2 << " "  << tauidx2 << std::endl;

  // tau-tau Charge
  value.at(charge)=-5;
  if(tauidx1!=999 && tauidx2!=999){
    value.at(charge)=Ntp->KFTau_Fit_charge(tauidx1)+Ntp->KFTau_Fit_charge(tauidx2);
  }
  pass.at(charge)=(value.at(charge)==0);
 
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() F" << std::endl;
  value.at(deltaPhi)=1;
  if(tauidx1!=999 && tauidx2!=999){
    TLorentzVector Tau1=Ntp->KFTau_TauFit_p4(tauidx1);
    TLorentzVector Tau2=Ntp->KFTau_TauFit_p4(tauidx2);
    value.at(deltaPhi)=cos(Tools::DeltaPhi(Tau1.Phi(),Tau2.Phi()));
    TLorentzVector Z=Tau1+Tau2;
    value.at(ZMassmax)=Z.M();
    value.at(ZMassmin)=Z.M();
  }
  pass.at(deltaPhi)=(value.at(deltaPhi)<cut.at(deltaPhi));
  pass.at(ZMassmax)=(value.at(ZMassmax)<cut.at(ZMassmax));
  pass.at(ZMassmin)=(value.at(ZMassmin)>cut.at(ZMassmin));
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() F0" << std::endl;
  value.at(TauIso)=5;
  int overlap1(0), overlap2(0);
  for(int i=0;i<Ntp->NPFJets();i++){
    double dR=5;
    if(tauidx1!=999) dR=Tools::dr(Ntp->KFTau_TauFit_p4(tauidx1),Ntp->PFJet_p4(i));
    if(dR<cut.at(TauIso))overlap1++;
    if(tauidx2!=999) dR=Tools::dr(Ntp->KFTau_TauFit_p4(tauidx2),Ntp->PFJet_p4(i));
    if(dR<cut.at(TauIso))overlap2++;
  }
  pass.at(TauIso)=(2==overlap1+overlap2);

  pass.at(TauTauVertex)=false;
  value.at(TauTauVertex)=0;
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() F2" << std::endl;
  if(tauidx1!=999 && tauidx2!=999) {
    unsigned int dim=3;
    TVector3 tau1_vtx=Ntp->KFTau_RotatedVtx(tauidx1);
    TMatrixF tau1_cov=Ntp->KFTau_RotatedVtx_Cov(tauidx1);
    TVector3 tautau_vtx=Ntp->KFTau_RotatedVtx(tauidx2);
    TMatrixF tautau_cov=Ntp->KFTau_RotatedVtx_Cov(tauidx2);
    tautau_vtx+=tau1_vtx;
    tautau_cov+=tau1_cov;
    double det=0;
    tautau_cov.Invert(&det);
    if(det!=0){
      std::vector<float> dist;
      dist.push_back(tautau_vtx.X());
      dist.push_back(tautau_vtx.Y());
      dist.push_back(tautau_vtx.Z());
      float sig=0;
      for(unsigned int i=0;i<dim;i++){
	for(unsigned int j=0;j<dim;j++){
	  sig+=dist.at(i)*dist.at(j)*tautau_cov[i][j];
	}
      }
      value.at(TauTauVertex)=sig;
      pass.at(TauTauVertex)=value.at(TauTauVertex)<cut.at(TauTauVertex);
    }
  }
  pass.at(TauTauVertex)=false;
 

  ///////////////////////////////////////////////
  //
  // Jet Cuts
  //
  std::vector<unsigned int> GoodJets;
  for(int i=0;i<Ntp->NPFJets();i++){
    if(/*Ntp->isGoodJet(i) &&*/ Ntp->PFJet_p4(i).Pt()>jet_pt && fabs(Ntp->PFJet_p4(i).Eta())<jet_eta){
      bool overlap=false;
      for(unsigned j=0;j<GoodTaus.size();j++){
	//	if(Tools::dr(Ntp->KFTau_TauFit_p4(GoodTaus.at(j)),Ntp->PFJet_p4(i))<0.5) overlap=true;
      }
      if(!overlap)GoodJets.push_back(i);
    }
  }

  value.at(NJets)=GoodJets.size();
  //pass.at(NJets)=(value.at(NJets)>=cut.at(NJets));
  pass.at(NJets)=true;
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() G" << std::endl;
  ///////////////////////////////////////////////
  //
  // Event Shape and Energy Cuts
  //
  double MET_Ex(Ntp->MET_ex()),MET_Ey(Ntp->MET_ey());
  // correct for neutrino from taus
  for(unsigned int i=0; i<GoodTaus.size();i++){
    MET_Ex+=Ntp->KFTau_Neutrino_p4(GoodTaus.at(i)).Px();
    MET_Ey+=Ntp->KFTau_Neutrino_p4(GoodTaus.at(i)).Py();
  }
  value.at(MET)=sqrt(MET_Ex*MET_Ex+MET_Ey*MET_Ey);
  pass.at(MET)=(value.at(MET)<cut.at(MET));
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() H" << std::endl;
  ///////////////////////////////////////////////////////////
  //Do QCD bkg
  /*  if(!pass.at(charge)){
    if(Ntp->isData()){
      if(!HConfig.GetHisto(!Ntp->isData(),DataMCType::QCD,t)){ std::cout << "failed to find id "<< DataMCType::QCD <<std::endl; return;}
      pass.at(charge)=true;
    }
    }*/
  //////////////////////////////////////////////////////////
  double wobs(1),w(1);
  if(!Ntp->isData()){
    if(verbose)std::cout << "void  ZDouble3prong::doEvent() J" << std::endl;
    //w*=Ntp->EvtWeight3D();
    if(verbose)std::cout << "void  ZDouble3prong::doEvent() k" << w << " " << wobs << std::endl;
  }
  else{w=1;wobs=1;}
  if(verbose) std::cout << "w=" << w << " " << wobs << " " << w*wobs << std::endl;
  bool status=AnalysisCuts(t,w,wobs); 
  if(verbose)std::cout << "void  ZDouble3prong::doEvent() L" << std::endl;
  ///////////////////////////////////////////////////////////
  // Add plots
  if(status){
    if(verbose)std::cout<<"MC type: " << Ntp->GetMCID() <<std::endl;
    NVtx.at(t).Fill(Ntp->NVtx(),w);
    unsigned int nGoodVtx=0;
    for(unsigned int i=0;i<Ntp->NVtx();i++){
      NTrackperVtx.at(t).Fill(Ntp->Vtx_Track_idx(i).size(),w);
      if(Ntp->isVtxGood(i))nGoodVtx++;
    }
    NGoodVtx.at(t).Fill(nGoodVtx,w);;

    if(tauidx1!=999 && tauidx2!=999){
      if(verbose)std::cout << "void  ZDouble3prong::doEvent() J" << std::endl;
      KFTau_Fit_chiprob.at(t).Fill(Ntp->KFTau_Fit_Chi2Prob(tauidx1),w);
      KFTau_Fit_a1mass.at(t).Fill(Ntp->KFTau_Fit_RefitVisibleMass(tauidx1),w);
      KFTau_Fit_chi2.at(t).Fill(Ntp->KFTau_Fit_chi2(tauidx1),w);
      KFTau_Fit_ndf.at(t).Fill(Ntp->KFTau_Fit_ndf(tauidx1),w);
      KFTau_Fit_ambiguity.at(t).Fill(Ntp->KFTau_Fit_ambiguity(tauidx1),w);
      KFTau_Fit_csum.at(t).Fill(Ntp->KFTau_Fit_csum(tauidx1),w);
      KFTau_Fit_iterations.at(t).Fill(Ntp->KFTau_Fit_iterations(tauidx1),w);
      KFTau_Fit_TauEnergyFraction.at(t).Fill(Ntp->KFTau_Fit_TauEnergyFraction(tauidx1),w);
      KFTau_Fit_PV_PV_significance.at(t).Fill(Ntp->KFTau_Fit_PV_PV_significance(tauidx1),w);
      KFTau_Fit_SV_PV_significance.at(t).Fill(Ntp-> KFTau_Fit_PV_PV_significance(tauidx1),w);


      KFTau_Fit_chiprob.at(t).Fill(Ntp->KFTau_Fit_Chi2Prob(tauidx2),w);
      KFTau_Fit_a1mass.at(t).Fill(Ntp->KFTau_Fit_RefitVisibleMass(tauidx2),w);
      KFTau_Fit_chi2.at(t).Fill(Ntp->KFTau_Fit_chi2(tauidx2),w);
      KFTau_Fit_ndf.at(t).Fill(Ntp->KFTau_Fit_ndf(tauidx2),w);
      KFTau_Fit_ambiguity.at(t).Fill(Ntp->KFTau_Fit_ambiguity(tauidx2),w);
      KFTau_Fit_csum.at(t).Fill(Ntp->KFTau_Fit_csum(tauidx2),w);
      KFTau_Fit_iterations.at(t).Fill(Ntp->KFTau_Fit_iterations(tauidx2),w);
      KFTau_Fit_TauEnergyFraction.at(t).Fill(Ntp->KFTau_Fit_TauEnergyFraction(tauidx2),w);
      KFTau_Fit_PV_PV_significance.at(t).Fill(Ntp->KFTau_Fit_PV_PV_significance(tauidx2),w);
      KFTau_Fit_SV_PV_significance.at(t).Fill(Ntp-> KFTau_Fit_PV_PV_significance(tauidx2),w);
      if(verbose)std::cout << "void  ZDouble3prong::doEvent() K" << std::endl;
    }
  }
}



