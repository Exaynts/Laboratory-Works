using System;
using System.Diagnostics;
using System.IO;
namespace Test {
    internal class Program {
        static void Main(string[] args) {
        Pyramid4 p4 = Pyramid4.Create();
        Console.WriteLine("Change the console color? Print 'yes' or 'no'");
            while (true) {
#if DEBUG
             Console.WriteLine("Cycle's iteration");
#endif
            string choose = Console.ReadLine();
            if (choose == "yes") {
                p4.Info(ConsoleColor.DarkBlue, ConsoleColor.White); break;
            }
            else if (choose == "no") {
                p4.Info(); break;
            }
            else { Console.WriteLine("Invalid choosing!"); continue; }
            }
#if DEBUG
        Console.ReadKey();
#endif
        }
    }
}
