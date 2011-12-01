#include "HistoConfig.h"

#include <cstdlib>
#include <algorithm>                                     
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include "Riostream.h"
#include <fstream>
#include <istream>
#include <strstream>
#include <cstdlib>
#include "TH1D.h"
#include <math.h>

// Static var
std::vector<int>          HistoConfig::ID;
std::vector<double>       HistoConfig::CS;
std::vector<unsigned int> HistoConfig::IDtoHistoMap;
std::vector<TString>      HistoConfig::HistoName;
std::vector<TString>      HistoConfig::HistoLegend;
std::vector<int>          HistoConfig::HistoColour;
bool                      HistoConfig::loaded=false;

HistoConfig::HistoConfig(){
}


bool HistoConfig::Load(){
  return HistoConfig::Load("InputData/Par.dat");
}

bool HistoConfig::Load(TString Name_)  
{
  if(loaded) return true;
  std::cout << "HistoConfig::Load("<< Name_ <<")" << std::endl;
  ID.clear();
  IDtoHistoMap.clear();
  HistoName.clear();
  HistoLegend.clear();

  // Open File
  ifstream input_file;
  char *file_=(char*)Name_.Data();
  input_file.open(file_, std::ios::in);
  if (!(input_file)){
    std::cout << "\nERROR: Opening xml file "<< Name_ <<" for HistoConfig has failed.\n" << std::endl;
    return false;
  }
  loaded=true;
  std::cout << "\nOpened HistoConfig xml file: "<< Name_ <<".\n" << std::endl;

  std::string s;
  unsigned int a=0;
  while(getline(input_file, s)){
    a++;
    if(a>250) break;
    std::stringstream line(s); 
    TString type;
    int id;
    double cs;
    TString name;
    TString leg;
    int colour;
    line >> type >> id >> cs >> name >> leg >> colour;
    type.ToLower();
    if(!type.Contains("histo:")) continue;
    bool isnew=true;
    for(unsigned int i=0; i<ID.size();i++){
      if(ID.at(i)==id) isnew=false;
    }
    if(isnew){
      unsigned int i;
      for(i=0; i<HistoName.size();i++){
	if(HistoName.at(i)==name) break;
      }
      ID.push_back(id);
      CS.push_back(cs);
      IDtoHistoMap.push_back(i);
      if(i==HistoName.size() || i==0){
	HistoName.push_back(name);
	HistoLegend.push_back(leg);
	HistoColour.push_back(colour);
      }
    }
  }
  input_file.close();
  for(int i=0; i<ID.size();i++){
    std::cout << "Hitogram Data/MC ID: " << ID.at(i) << " CS: " << CS.at(i) << " Name: " <<  HistoName.at(IDtoHistoMap.at(i)) << " Legend: " <<  HistoLegend.at(IDtoHistoMap.at(i)) << " Colour: " << HistoColour.at(IDtoHistoMap.at(i)) << std::endl;
  }

  std::cout << "HistoConfig::Load("<< Name_ <<") complete" << std::endl;
  if(HistoName.size()>1) return true;
  return false;
}

HistoConfig::~HistoConfig(){

}

//utility Functions
bool HistoConfig::GetHisto(bool isdata,int id,unsigned int &histo){
  if(isdata)id=0;
  for(int i=0; i<ID.size(); i++){
    if(ID.at(i)==id){
      histo=IDtoHistoMap.at(i);
      return true;
    } 
  }
  return false;
}

double HistoConfig::GetCrossSection(int id){
  for(int i=0; i<ID.size(); i++){
    if(ID.at(i)==id){
      return CS.at(i);
    }
  }
  return 0;
}

void HistoConfig::GetHistoInfo(std::vector<TString> &types,std::vector<float> &CrossSectionandAcceptance,std::vector<TString> &legend,std::vector<int> &colour){
  types=HistoName;
  legend=HistoLegend;
  colour=HistoColour;
  CrossSectionandAcceptance.clear();
  for(int i=0; i<HistoName.size();i++){
    CrossSectionandAcceptance.push_back(0);
    for(int j=0;j<IDtoHistoMap.size();j++){
      if(i==IDtoHistoMap.at(j)){
	CrossSectionandAcceptance.at(i)+=CS.at(j);
      }
    }
  }
}

unsigned int HistoConfig::GetNHisto(){
  return HistoName.size();
}

TString HistoConfig::GetName(unsigned int i){
  if(i<=0 && i<HistoName.size()) return HistoName.at(i);
  return "unknown";
}

TString HistoConfig::GetLeg(unsigned int i){
  if(i<=0 && i<HistoLegend.size()) return HistoLegend.at(i);
  return "unknown";
}

std::vector<TH1D> HistoConfig::GetTH1D(TString name,TString title, int nbins, double min, double max, TString xaxis, TString yaxis){
  std::vector<TH1D> histos;
  for(int i=0;i<HistoName.size();i++){
    histos.push_back(TH1D(name+HistoName.at(i),HistoLegend.at(i),nbins,min,max));
  }
  return histos;
}

std::vector<TH2D> HistoConfig::GetTH2D(TString name,TString title,int nbinsx, double minx, double maxx, 
				       int nbinsy, double miny, double maxy, TString xaxis, TString yaxis){
  std::vector<TH2D> histos;
  for(int i=0;i<HistoName.size();i++){
    histos.push_back(TH2D(name+HistoName.at(i),HistoLegend.at(i),nbinsx,minx,maxx, nbinsy,miny,maxy));
  }
  return histos;
}

