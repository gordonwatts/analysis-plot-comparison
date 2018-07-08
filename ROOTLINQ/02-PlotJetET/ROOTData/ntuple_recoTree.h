/////////////////////////////////////////////////////////////////////////
//   This class has been automatically generated 
//   (at Sun Jul 08 13:35:02 2018 by ROOT version 5.34/36)
//   from TTree recoTree/Reduced tree
//   found on file: C:\Users\gordo\Documents\GRIDDS\user.emma.mc15_13TeV.361023.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ3W.merge.DAOD_EXOT15.e3668_s2576_s2132_r7773_r7676_p2952.v201\copied\ntuples_QCD_JZ3__0_addFullEtaMLP.root
/////////////////////////////////////////////////////////////////////////


#ifndef ntuple_recoTree_h
#define ntuple_recoTree_h

// System Headers needed by the proxy
#if defined(__CINT__) && !defined(__MAKECINT__)
   #define ROOT_Rtypes
   #define ROOT_TError
#endif
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TPad.h>
#include <TH1.h>
#include <TSelector.h>
#include <TBranchProxy.h>
#include <TBranchProxyDirector.h>
#include <TBranchProxyTemplate.h>
#include <TFriendProxy.h>
using namespace ROOT;

// forward declarations needed by this particular proxy


// Header needed by this particular proxy
#include <vector>


class junk_macro_parsettree_recoTree_Interface {
   // This class defines the list of methods that are directly used by ntuple_recoTree,
   // and that can be overloaded in the user's script
public:
   void junk_macro_parsettree_recoTree_Begin(TTree*) {}
   void junk_macro_parsettree_recoTree_SlaveBegin(TTree*) {}
   Bool_t junk_macro_parsettree_recoTree_Notify() { return kTRUE; }
   Bool_t junk_macro_parsettree_recoTree_Process(Long64_t) { return kTRUE; }
   void junk_macro_parsettree_recoTree_SlaveTerminate() {}
   void junk_macro_parsettree_recoTree_Terminate() {}
};


class ntuple_recoTree : public TSelector, public junk_macro_parsettree_recoTree_Interface {
public :
   TTree          *fChain;         //!pointer to the analyzed TTree or TChain
   TH1            *htemp;          //!pointer to the histogram
   TBranchProxyDirector fDirector; //!Manages the proxys

   // Optional User methods
   TClass         *fClass;    // Pointer to this class's description

   // Proxy for each of the branches, leaves and friends of the tree
   TULong64Proxy                             eventNumber;
   TIntProxy                                 eventCount;
   TUIntProxy                                runNumber;
   TUIntProxy                                lumiBlock;
   TUIntProxy                                backgroundFlags;
   TDoubleProxy                              eventWeight;
   TULong64Proxy                             prwHash;
   TStlSimpleProxy<vector<double> >          pdfEventWeights;
   TDoubleProxy                              pileupEventWeight;
   TDoubleProxy                              xSecEventWeight;
   TDoubleProxy                              actualIntPerCrossing;
   TDoubleProxy                              averageIntPerCrossing;
   TDoubleProxy                              event_HT;
   TDoubleProxy                              event_MHToHT;
   TIntProxy                                 event_NJets;
   TIntProxy                                 event_NCleanJets;
   TIntProxy                                 event_NBIBJets;
   TDoubleProxy                              event_HTMiss;
   TDoubleProxy                              event_Meff;
   TDoubleProxy                              event_sumMinDR;
   TDoubleProxy                              event_tauRoI_maxET;
   TBoolProxy                                event_passCalRatio_cleanLLP_TAU60;
   TBoolProxy                                event_passCalRatio_cleanLLP_TAU60_noiso;
   TBoolProxy                                event_passL1TAU60;
   TBoolProxy                                event_passCalRatio_cleanLLP_LLPNOMATCH;
   TBoolProxy                                event_passCalRatio_cleanLLP_LLPNOMATCH_noiso;
   TBoolProxy                                event_passEmulationCalRatio_cleanLLP_LLPNOMATCH_noiso;
   TBoolProxy                                event_passL1LLPNOMATCH;
   TBoolProxy                                event_passEmulationL1LLPNOMATCH;
   TBoolProxy                                event_passCalRatio_cleanLLP_LLPRO;
   TBoolProxy                                event_passCalRatio_cleanLLP_LLPRO_noiso;
   TBoolProxy                                event_passL1LLPRO;
   TBoolProxy                                event_passJ25;
   TBoolProxy                                event_passJ100;
   TBoolProxy                                event_passJ400;
   TBoolProxy                                event_passJ150_bperf_split;
   TBoolProxy                                event_passJ15_bperf_split;
   TBoolProxy                                event_passJ320_bperf_split;
   TBoolProxy                                event_passJ45_bperf_split_3j45;
   TBoolProxy                                event_passJ55_bperf_split;
   TBoolProxy                                event_passJ85_bperf_split;
   TBoolProxy                                event_pass3J175;
   TBoolProxy                                event_pass3J200;
   TBoolProxy                                event_pass4J100;
   TBoolProxy                                event_pass4J110;
   TBoolProxy                                event_pass4J120;
   TDoubleProxy                              event_PSJ25;
   TDoubleProxy                              event_PSJ100;
   TDoubleProxy                              event_PSJ400;
   TDoubleProxy                              event_PSJ150_bperf_split;
   TDoubleProxy                              event_PSJ15_bperf_split;
   TDoubleProxy                              event_PSJ320_bperf_split;
   TDoubleProxy                              event_PSJ45_bperf_split_3j45;
   TDoubleProxy                              event_PSJ55_bperf_split;
   TDoubleProxy                              event_PSJ85_bperf_split;
   TDoubleProxy                              event_PS3J175;
   TDoubleProxy                              event_PS3J200;
   TDoubleProxy                              event_PS4J100;
   TDoubleProxy                              event_PS4J110;
   TDoubleProxy                              event_PS4J120;
   TDoubleProxy                              dPhiLeadBDTsignalWeight_cleanJet;
   TDoubleProxy                              dRLeadBDTsignalWeight_cleanJet;
   TDoubleProxy                              dPhiLeadBDTmultijetsWeight_cleanJet;
   TDoubleProxy                              dRLeadBDTmultijetsWeight_cleanJet;
   TDoubleProxy                              eventBDT_value;
   TStlSimpleProxy<vector<unsigned long> >   BDT3weights_signal_cleanJet_index;
   TStlSimpleProxy<vector<unsigned long> >   BDT3weights_multijets_cleanJet_index;
   TStlSimpleProxy<vector<unsigned long> >   BDT3weights_bib_cleanJet_index;
   TStlSimpleProxy<vector<bool> >            CalibJet_isGoodStand;
   TStlSimpleProxy<vector<bool> >            CalibJet_isGoodLLP;
   TStlSimpleProxy<vector<double> >          CalibJet_ET;
   TStlSimpleProxy<vector<double> >          CalibJet_pT;
   TStlSimpleProxy<vector<double> >          CalibJet_eta;
   TStlSimpleProxy<vector<double> >          CalibJet_phi;
   TStlSimpleProxy<vector<double> >          CalibJet_width;
   TStlSimpleProxy<vector<double> >          CalibJet_logRatio;
   TStlSimpleProxy<vector<double> >          CalibJet_time;
   TStlSimpleProxy<vector<double> >          CalibJet_jvt;
   TStlSimpleProxy<vector<int> >             CalibJet_passJVT;
   TStlSimpleProxy<vector<float> >           CalibJet_BDT3weights_signal;
   TStlSimpleProxy<vector<float> >           CalibJet_BDT3weights_multijets;
   TStlSimpleProxy<vector<float> >           CalibJet_BDT3weights_bib;
   TStlSimpleProxy<vector<bool> >            CalibJet_isCRHLTJet;
   TStlSimpleProxy<vector<int> >             CalibJet_indexLLP;
   TStlSimpleProxy<vector<unsigned int> >    CalibJet_nTrk;
   TStlSimpleProxy<vector<double> >          CalibJet_sumTrkpT;
   TStlSimpleProxy<vector<double> >          CalibJet_maxTrkpT;
   TStlSimpleProxy<vector<double> >          CalibJet_minDRTrkpt2;
   TStlSimpleProxy<vector<double> >          CalibJet_BIBDeltaTimingM;
   TStlSimpleProxy<vector<double> >          CalibJet_BIBDeltaTimingP;
   TStlSimpleProxy<vector<bool> >            CalibJet_matchPassEmul;
   TStlSimpleProxy<vector<int> >             CalibJet_cluster_nClusters;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_center;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_x;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_y;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_z;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_r;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_Lxy;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_ET;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_pT;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_eta;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_phi;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_time;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_lambda;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_lateral;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_longitudinal;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_first_Eden;
   TStlSimpleProxy<vector<double> >          CalibJet_cluster_lead_fracE_ofjet;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lxy;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lz;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lxy_fullEta;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lz_fullEta;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lxy_highEta;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lz_highEta;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lxy_lowEta;
   TStlSimpleProxy<vector<double> >          CalibJet_Reg_Lz_lowEta;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer0_cenbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer1_cenbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer2_cenbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer1_tilegap;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer2_tilegap;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer3_tilegap;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer0_extbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer1_extbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer2_extbar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer0_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer1_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer2_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_layer3_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer0_bar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer1_bar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer2_bar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer3_bar;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer0_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer1_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer2_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EEM_layer3_end;
   TStlSimpleProxy<vector<double> >          CalibJet_f_EH_l1frac;
   TStlSimpleProxy<vector<double> >          LLP_E;
   TStlSimpleProxy<vector<double> >          LLP_pT;
   TStlSimpleProxy<vector<double> >          LLP_eta;
   TStlSimpleProxy<vector<double> >          LLP_phi;
   TStlSimpleProxy<vector<double> >          LLP_beta;
   TStlSimpleProxy<vector<double> >          LLP_timing;
   TStlSimpleProxy<vector<double> >          LLP_Lxy;
   TStlSimpleProxy<vector<double> >          LLP_Lz;
   TStlSimpleProxy<vector<double> >          LLP_dR_Jet;
   TStlSimpleProxy<vector<int> >             LLP_nJet_dRlt04;


   ntuple_recoTree(TTree *tree=0) : 
      fChain(0),
      htemp(0),
      fDirector(tree,-1),
      fClass                (TClass::GetClass("ntuple_recoTree")),
      eventNumber                              (&fDirector,"eventNumber"),
      eventCount                               (&fDirector,"eventCount"),
      runNumber                                (&fDirector,"runNumber"),
      lumiBlock                                (&fDirector,"lumiBlock"),
      backgroundFlags                          (&fDirector,"backgroundFlags"),
      eventWeight                              (&fDirector,"eventWeight"),
      prwHash                                  (&fDirector,"prwHash"),
      pdfEventWeights                          (&fDirector,"pdfEventWeights"),
      pileupEventWeight                        (&fDirector,"pileupEventWeight"),
      xSecEventWeight                          (&fDirector,"xSecEventWeight"),
      actualIntPerCrossing                     (&fDirector,"actualIntPerCrossing"),
      averageIntPerCrossing                    (&fDirector,"averageIntPerCrossing"),
      event_HT                                 (&fDirector,"event_HT"),
      event_MHToHT                             (&fDirector,"event_MHToHT"),
      event_NJets                              (&fDirector,"event_NJets"),
      event_NCleanJets                         (&fDirector,"event_NCleanJets"),
      event_NBIBJets                           (&fDirector,"event_NBIBJets"),
      event_HTMiss                             (&fDirector,"event_HTMiss"),
      event_Meff                               (&fDirector,"event_Meff"),
      event_sumMinDR                           (&fDirector,"event_sumMinDR"),
      event_tauRoI_maxET                       (&fDirector,"event_tauRoI_maxET"),
      event_passCalRatio_cleanLLP_TAU60        (&fDirector,"event_passCalRatio_cleanLLP_TAU60"),
      event_passCalRatio_cleanLLP_TAU60_noiso  (&fDirector,"event_passCalRatio_cleanLLP_TAU60_noiso"),
      event_passL1TAU60                        (&fDirector,"event_passL1TAU60"),
      event_passCalRatio_cleanLLP_LLPNOMATCH   (&fDirector,"event_passCalRatio_cleanLLP_LLPNOMATCH"),
      event_passCalRatio_cleanLLP_LLPNOMATCH_noiso(&fDirector,"event_passCalRatio_cleanLLP_LLPNOMATCH_noiso"),
      event_passEmulationCalRatio_cleanLLP_LLPNOMATCH_noiso(&fDirector,"event_passEmulationCalRatio_cleanLLP_LLPNOMATCH_noiso"),
      event_passL1LLPNOMATCH                   (&fDirector,"event_passL1LLPNOMATCH"),
      event_passEmulationL1LLPNOMATCH          (&fDirector,"event_passEmulationL1LLPNOMATCH"),
      event_passCalRatio_cleanLLP_LLPRO        (&fDirector,"event_passCalRatio_cleanLLP_LLPRO"),
      event_passCalRatio_cleanLLP_LLPRO_noiso  (&fDirector,"event_passCalRatio_cleanLLP_LLPRO_noiso"),
      event_passL1LLPRO                        (&fDirector,"event_passL1LLPRO"),
      event_passJ25                            (&fDirector,"event_passJ25"),
      event_passJ100                           (&fDirector,"event_passJ100"),
      event_passJ400                           (&fDirector,"event_passJ400"),
      event_passJ150_bperf_split               (&fDirector,"event_passJ150_bperf_split"),
      event_passJ15_bperf_split                (&fDirector,"event_passJ15_bperf_split"),
      event_passJ320_bperf_split               (&fDirector,"event_passJ320_bperf_split"),
      event_passJ45_bperf_split_3j45           (&fDirector,"event_passJ45_bperf_split_3j45"),
      event_passJ55_bperf_split                (&fDirector,"event_passJ55_bperf_split"),
      event_passJ85_bperf_split                (&fDirector,"event_passJ85_bperf_split"),
      event_pass3J175                          (&fDirector,"event_pass3J175"),
      event_pass3J200                          (&fDirector,"event_pass3J200"),
      event_pass4J100                          (&fDirector,"event_pass4J100"),
      event_pass4J110                          (&fDirector,"event_pass4J110"),
      event_pass4J120                          (&fDirector,"event_pass4J120"),
      event_PSJ25                              (&fDirector,"event_PSJ25"),
      event_PSJ100                             (&fDirector,"event_PSJ100"),
      event_PSJ400                             (&fDirector,"event_PSJ400"),
      event_PSJ150_bperf_split                 (&fDirector,"event_PSJ150_bperf_split"),
      event_PSJ15_bperf_split                  (&fDirector,"event_PSJ15_bperf_split"),
      event_PSJ320_bperf_split                 (&fDirector,"event_PSJ320_bperf_split"),
      event_PSJ45_bperf_split_3j45             (&fDirector,"event_PSJ45_bperf_split_3j45"),
      event_PSJ55_bperf_split                  (&fDirector,"event_PSJ55_bperf_split"),
      event_PSJ85_bperf_split                  (&fDirector,"event_PSJ85_bperf_split"),
      event_PS3J175                            (&fDirector,"event_PS3J175"),
      event_PS3J200                            (&fDirector,"event_PS3J200"),
      event_PS4J100                            (&fDirector,"event_PS4J100"),
      event_PS4J110                            (&fDirector,"event_PS4J110"),
      event_PS4J120                            (&fDirector,"event_PS4J120"),
      dPhiLeadBDTsignalWeight_cleanJet         (&fDirector,"dPhiLeadBDTsignalWeight_cleanJet"),
      dRLeadBDTsignalWeight_cleanJet           (&fDirector,"dRLeadBDTsignalWeight_cleanJet"),
      dPhiLeadBDTmultijetsWeight_cleanJet      (&fDirector,"dPhiLeadBDTmultijetsWeight_cleanJet"),
      dRLeadBDTmultijetsWeight_cleanJet        (&fDirector,"dRLeadBDTmultijetsWeight_cleanJet"),
      eventBDT_value                           (&fDirector,"eventBDT_value"),
      BDT3weights_signal_cleanJet_index        (&fDirector,"BDT3weights_signal_cleanJet_index"),
      BDT3weights_multijets_cleanJet_index     (&fDirector,"BDT3weights_multijets_cleanJet_index"),
      BDT3weights_bib_cleanJet_index           (&fDirector,"BDT3weights_bib_cleanJet_index"),
      CalibJet_isGoodStand                     (&fDirector,"CalibJet_isGoodStand"),
      CalibJet_isGoodLLP                       (&fDirector,"CalibJet_isGoodLLP"),
      CalibJet_ET                              (&fDirector,"CalibJet_ET"),
      CalibJet_pT                              (&fDirector,"CalibJet_pT"),
      CalibJet_eta                             (&fDirector,"CalibJet_eta"),
      CalibJet_phi                             (&fDirector,"CalibJet_phi"),
      CalibJet_width                           (&fDirector,"CalibJet_width"),
      CalibJet_logRatio                        (&fDirector,"CalibJet_logRatio"),
      CalibJet_time                            (&fDirector,"CalibJet_time"),
      CalibJet_jvt                             (&fDirector,"CalibJet_jvt"),
      CalibJet_passJVT                         (&fDirector,"CalibJet_passJVT"),
      CalibJet_BDT3weights_signal              (&fDirector,"CalibJet_BDT3weights_signal"),
      CalibJet_BDT3weights_multijets           (&fDirector,"CalibJet_BDT3weights_multijets"),
      CalibJet_BDT3weights_bib                 (&fDirector,"CalibJet_BDT3weights_bib"),
      CalibJet_isCRHLTJet                      (&fDirector,"CalibJet_isCRHLTJet"),
      CalibJet_indexLLP                        (&fDirector,"CalibJet_indexLLP"),
      CalibJet_nTrk                            (&fDirector,"CalibJet_nTrk"),
      CalibJet_sumTrkpT                        (&fDirector,"CalibJet_sumTrkpT"),
      CalibJet_maxTrkpT                        (&fDirector,"CalibJet_maxTrkpT"),
      CalibJet_minDRTrkpt2                     (&fDirector,"CalibJet_minDRTrkpt2"),
      CalibJet_BIBDeltaTimingM                 (&fDirector,"CalibJet_BIBDeltaTimingM"),
      CalibJet_BIBDeltaTimingP                 (&fDirector,"CalibJet_BIBDeltaTimingP"),
      CalibJet_matchPassEmul                   (&fDirector,"CalibJet_matchPassEmul"),
      CalibJet_cluster_nClusters               (&fDirector,"CalibJet_cluster_nClusters"),
      CalibJet_cluster_lead_center             (&fDirector,"CalibJet_cluster_lead_center"),
      CalibJet_cluster_lead_x                  (&fDirector,"CalibJet_cluster_lead_x"),
      CalibJet_cluster_lead_y                  (&fDirector,"CalibJet_cluster_lead_y"),
      CalibJet_cluster_lead_z                  (&fDirector,"CalibJet_cluster_lead_z"),
      CalibJet_cluster_lead_r                  (&fDirector,"CalibJet_cluster_lead_r"),
      CalibJet_cluster_lead_Lxy                (&fDirector,"CalibJet_cluster_lead_Lxy"),
      CalibJet_cluster_lead_ET                 (&fDirector,"CalibJet_cluster_lead_ET"),
      CalibJet_cluster_lead_pT                 (&fDirector,"CalibJet_cluster_lead_pT"),
      CalibJet_cluster_lead_eta                (&fDirector,"CalibJet_cluster_lead_eta"),
      CalibJet_cluster_lead_phi                (&fDirector,"CalibJet_cluster_lead_phi"),
      CalibJet_cluster_lead_time               (&fDirector,"CalibJet_cluster_lead_time"),
      CalibJet_cluster_lead_lambda             (&fDirector,"CalibJet_cluster_lead_lambda"),
      CalibJet_cluster_lead_lateral            (&fDirector,"CalibJet_cluster_lead_lateral"),
      CalibJet_cluster_lead_longitudinal       (&fDirector,"CalibJet_cluster_lead_longitudinal"),
      CalibJet_cluster_lead_first_Eden         (&fDirector,"CalibJet_cluster_lead_first_Eden"),
      CalibJet_cluster_lead_fracE_ofjet        (&fDirector,"CalibJet_cluster_lead_fracE_ofjet"),
      CalibJet_Reg_Lxy                         (&fDirector,"CalibJet_Reg_Lxy"),
      CalibJet_Reg_Lz                          (&fDirector,"CalibJet_Reg_Lz"),
      CalibJet_Reg_Lxy_fullEta                 (&fDirector,"CalibJet_Reg_Lxy_fullEta"),
      CalibJet_Reg_Lz_fullEta                  (&fDirector,"CalibJet_Reg_Lz_fullEta"),
      CalibJet_Reg_Lxy_highEta                 (&fDirector,"CalibJet_Reg_Lxy_highEta"),
      CalibJet_Reg_Lz_highEta                  (&fDirector,"CalibJet_Reg_Lz_highEta"),
      CalibJet_Reg_Lxy_lowEta                  (&fDirector,"CalibJet_Reg_Lxy_lowEta"),
      CalibJet_Reg_Lz_lowEta                   (&fDirector,"CalibJet_Reg_Lz_lowEta"),
      CalibJet_f_EH_layer0_cenbar              (&fDirector,"CalibJet_f_EH_layer0_cenbar"),
      CalibJet_f_EH_layer1_cenbar              (&fDirector,"CalibJet_f_EH_layer1_cenbar"),
      CalibJet_f_EH_layer2_cenbar              (&fDirector,"CalibJet_f_EH_layer2_cenbar"),
      CalibJet_f_EH_layer1_tilegap             (&fDirector,"CalibJet_f_EH_layer1_tilegap"),
      CalibJet_f_EH_layer2_tilegap             (&fDirector,"CalibJet_f_EH_layer2_tilegap"),
      CalibJet_f_EH_layer3_tilegap             (&fDirector,"CalibJet_f_EH_layer3_tilegap"),
      CalibJet_f_EH_layer0_extbar              (&fDirector,"CalibJet_f_EH_layer0_extbar"),
      CalibJet_f_EH_layer1_extbar              (&fDirector,"CalibJet_f_EH_layer1_extbar"),
      CalibJet_f_EH_layer2_extbar              (&fDirector,"CalibJet_f_EH_layer2_extbar"),
      CalibJet_f_EH_layer0_end                 (&fDirector,"CalibJet_f_EH_layer0_end"),
      CalibJet_f_EH_layer1_end                 (&fDirector,"CalibJet_f_EH_layer1_end"),
      CalibJet_f_EH_layer2_end                 (&fDirector,"CalibJet_f_EH_layer2_end"),
      CalibJet_f_EH_layer3_end                 (&fDirector,"CalibJet_f_EH_layer3_end"),
      CalibJet_f_EEM_layer0_bar                (&fDirector,"CalibJet_f_EEM_layer0_bar"),
      CalibJet_f_EEM_layer1_bar                (&fDirector,"CalibJet_f_EEM_layer1_bar"),
      CalibJet_f_EEM_layer2_bar                (&fDirector,"CalibJet_f_EEM_layer2_bar"),
      CalibJet_f_EEM_layer3_bar                (&fDirector,"CalibJet_f_EEM_layer3_bar"),
      CalibJet_f_EEM_layer0_end                (&fDirector,"CalibJet_f_EEM_layer0_end"),
      CalibJet_f_EEM_layer1_end                (&fDirector,"CalibJet_f_EEM_layer1_end"),
      CalibJet_f_EEM_layer2_end                (&fDirector,"CalibJet_f_EEM_layer2_end"),
      CalibJet_f_EEM_layer3_end                (&fDirector,"CalibJet_f_EEM_layer3_end"),
      CalibJet_f_EH_l1frac                     (&fDirector,"CalibJet_f_EH_l1frac"),
      LLP_E                                    (&fDirector,"LLP_E"),
      LLP_pT                                   (&fDirector,"LLP_pT"),
      LLP_eta                                  (&fDirector,"LLP_eta"),
      LLP_phi                                  (&fDirector,"LLP_phi"),
      LLP_beta                                 (&fDirector,"LLP_beta"),
      LLP_timing                               (&fDirector,"LLP_timing"),
      LLP_Lxy                                  (&fDirector,"LLP_Lxy"),
      LLP_Lz                                   (&fDirector,"LLP_Lz"),
      LLP_dR_Jet                               (&fDirector,"LLP_dR_Jet"),
      LLP_nJet_dRlt04                          (&fDirector,"LLP_nJet_dRlt04")
      { }
   ~ntuple_recoTree();
   Int_t   Version() const {return 1;}
   void    Begin(::TTree *tree);
   void    SlaveBegin(::TTree *tree);
   void    Init(::TTree *tree);
   Bool_t  Notify();
   Bool_t  Process(Long64_t entry);
   void    SlaveTerminate();
   void    Terminate();

   ClassDef(ntuple_recoTree,0);


//inject the user's code
#include "junk_macro_parsettree_recoTree.C"
};

#endif


#ifdef __MAKECINT__
#pragma link C++ class ntuple_recoTree;
#endif


inline ntuple_recoTree::~ntuple_recoTree() {
   // destructor. Clean up helpers.

}

inline void ntuple_recoTree::Init(TTree *tree)
{
//   Set branch addresses
   if (tree == 0) return;
   fChain = tree;
   fDirector.SetTree(fChain);
   if (htemp == 0) {
      htemp = fDirector.CreateHistogram(GetOption());
      htemp->SetTitle("junk_macro_parsettree_recoTree.C");
      fObject = htemp;
   }
}

Bool_t ntuple_recoTree::Notify()
{
   // Called when loading a new file.
   // Get branch pointers.
   fDirector.SetTree(fChain);
   junk_macro_parsettree_recoTree_Notify();
   
   return kTRUE;
}
   

inline void ntuple_recoTree::Begin(TTree *tree)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
   junk_macro_parsettree_recoTree_Begin(tree);

}

inline void ntuple_recoTree::SlaveBegin(TTree *tree)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   Init(tree);

   junk_macro_parsettree_recoTree_SlaveBegin(tree);

}

inline Bool_t ntuple_recoTree::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // It can be passed to either TTree::GetEntry() or TBranch::GetEntry()
   // to read either all or the required parts of the data. When processing
   // keyed objects with PROOF, the object is already loaded and is available
   // via the fObject pointer.
   //
   // This function should contain the "body" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.

   // WARNING when a selector is used with a TChain, you must use
   //  the pointer to the current TTree to call GetEntry(entry).
   //  The entry is always the local entry number in the current tree.
   //  Assuming that fChain is the pointer to the TChain being processed,
   //  use fChain->GetTree()->GetEntry(entry).


   fDirector.SetReadEntry(entry);
   junk_macro_parsettree_recoTree();
   junk_macro_parsettree_recoTree_Process(entry);
   return kTRUE;

}

inline void ntuple_recoTree::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.
   junk_macro_parsettree_recoTree_SlaveTerminate();
}

inline void ntuple_recoTree::Terminate()
{
   // Function called at the end of the event loop.
   htemp = (TH1*)fObject;
   Int_t drawflag = (htemp && htemp->GetEntries()>0);
   
   if (gPad && !drawflag && !fOption.Contains("goff") && !fOption.Contains("same")) {
      gPad->Clear();
   } else {
      if (fOption.Contains("goff")) drawflag = false;
      if (drawflag) htemp->Draw(fOption);
   }
   junk_macro_parsettree_recoTree_Terminate();
}
