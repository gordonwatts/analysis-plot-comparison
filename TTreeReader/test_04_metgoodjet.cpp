void test_04_metgoodjet()
{
    TStopwatch sw;
    sw.Start();

    auto file = TFile::Open("/mnt/c/Users/gordo/Documents/GRIDDS/user.emma.mc15_13TeV.361023.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ3W.merge.DAOD_EXOT15.e3668_s2576_s2132_r7773_r7676_p2952.v201/copied/ntuples_QCD_JZ3__0_addFullEtaMLP.root", "READ");
    TTreeReader reader("recoTree", file);
    TTreeReaderArray<double> jet_pts(reader, "CalibJet_pT");
    TTreeReaderArray<double> jet_eta(reader, "CalibJet_eta");
    TTreeReaderValue<double> a(reader, "event_HTMiss");

    auto f = new TFile("../04-reader.root", "RECREATE");
    auto h = new TH1F("met", "met; met [GeV]", 100, 0.0, 500.0);

    while(reader.Next()) {
        int counter = 0;
        for (int i = 0; i < jet_pts.GetSize(); i++){
            if (abs(jet_eta[i]) < 1.0 && jet_pts[i] > 40.0) {
                counter++;
            }
        }
        if (counter >= 2) {
            h->Fill(*a);
        }
    }

    f->Write();
    f->Close();

    sw.Stop();
    sw.Print();
}
