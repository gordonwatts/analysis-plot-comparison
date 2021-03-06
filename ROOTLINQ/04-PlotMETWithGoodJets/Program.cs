﻿using LINQToTreeHelpers;
using LINQToTreeHelpers.FutureUtils;
using ROOTNET;
using System;
using System.IO;
using System.Linq;
using static System.Console;

namespace _04_PlotMETWithGoodJets
{
    class Program
    {
        static void Main(string[] args)
        {
            var t = new NTStopwatch();
            t.Start();
            var filename = @"C:\Users\gordo\Documents\GRIDDS\user.emma.mc15_13TeV.361023.Pythia8EvtGen_A14NNPDF23LO_jetjet_JZ3W.merge.DAOD_EXOT15.e3668_s2576_s2132_r7773_r7676_p2952.v201\copied\ntuples_QCD_JZ3__0_addFullEtaMLP.root";
            var tree = ROOTData.QueryablerecoTree.CreateQueriable(new FileInfo(filename));
            tree.IgnoreQueryCache = true;

            using (var f = new FutureTFile(new FileInfo("../../../../04.root")))
            {
                tree
                    .Where(e =>  e.jets.Where(j => Math.Abs(j.CalibJet_eta) < 1.0 && j.CalibJet_pT > 40.0).Count() >= 2)
                    .Select(e => e.event_HTMiss)
                    .Plot("met", "MET; Missing H_{T} [GeV]", 100, 0.0, 500.0)
                    .Save(f);
            }
            t.Stop();
            t.Print();
            WriteLine("done");
        }
    }
}
