void test_02_jetpt()
{
    TStopwatch sw;
    sw.Start();

    auto file = TFile::Open("/mnt/c/Users/gordo/Documents/GRIDDS/user.emma.mc15_13TeV.361023.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ3W.merge.DAOD_EXOT15.e3668_s2576_s2132_r7773_r7676_p2952.v201/copied/ntuples_QCD_JZ3__0_addFullEtaMLP.root", "READ");
    TTreeReader reader("recoTree", file);
    TTreeReaderArray<double> jet_pts(reader, "CalibJet_pT");

    auto f = new TFile("../02-reader.root", "RECREATE");
    auto h = new TH1F("jetpt", "Jet pT; Jet pT [GeV]", 100, 0.0, 500.0);

    while(reader.Next()) {
        for (auto pt: jet_pts) {
            h->Fill(pt);
        }
    }

    f->Write();
    f->Close();

    sw.Stop();
    sw.Print();
}
