using LINQToTreeHelpers;
using LINQToTreeHelpers.FutureUtils;
using ROOTNET;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using static System.Console;


namespace _01_Plot_MET
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

            using (var f = new FutureTFile(new FileInfo("../../../../01.root")))
            {
                tree
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
