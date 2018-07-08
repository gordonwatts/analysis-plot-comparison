// Test 01 - Plot jet pT

// Run with the command:
//
// Testing done with root 6.14
//

void test_02_jetpt()
{
    TStopwatch sw;
    sw.Start();
    ROOT::EnableImplicitMT();
    ROOT::RDataFrame df("recoTree", "/mnt/c/Users/gordo/Documents/GRIDDS/user.emma.mc15_13TeV.361023.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ3W.merge.DAOD_EXOT15.e3668_s2576_s2132_r7773_r7676_p2952.v201/copied/ntuples_QCD_JZ3__0_addFullEtaMLP.root");

    auto f = new TFile("../02-dataframe.root", "RECREATE");
    auto met = df.Histo1D("CalibJet_pT");
    met->Write();
    f->Write();
    f->Close();
    delete f;

    sw.Stop();
    sw.Print();
}
