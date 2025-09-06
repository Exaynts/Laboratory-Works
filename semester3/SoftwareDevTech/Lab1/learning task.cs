using System;
using System.IO;
using System.Text;
namespace Test {
    // Класс прямоугольного параллелепипеда
    class Parallelepiped
    {
        private double a, b, c;
        public void Load()
        {
            a = Convert.ToDouble(Console.ReadLine());
            b = Convert.ToDouble(Console.ReadLine());
            c = Convert.ToDouble(Console.ReadLine());
        }
        public double GetS() { return 2 * (a * b + a * c + b * c); }
        public double GetV() { return a * b * c; }
        public void Info()
        {
            Console.WriteLine("Параллепипед: ");
            Console.WriteLine($"a: {a} b: {b} c: {c}", a, b, c);
            Console.WriteLine(string.Format("S = {0:0.00}", GetS()));
            Console.WriteLine(string.Format("V = {0:0.00}", GetV()));
        }
    }
    class Program 
    {
        static void Main(string[] args) {
            // Для Release
#if !DEBUG
            TextWriter save_out = Console.Out;
            TextReader save_in = Console.In;
            // Создаём файл при необходимости
            if (!File.Exists(@"par_input.txt"))
            {
                File.WriteAllText(@"par_input.txt", "11\r\n22\r\n33");
            }
            // Перенаправляем потоки чтения и записи с консоли в файл
            var new_out = new StreamWriter(@"par_output.txt");
            var new_in = new StreamReader(@"par_input.txt");
            // Читаем и записываем данные
            Console.SetOut(new_out);
            Console.SetIn(new_in);
#endif
            Parallelepiped p = new Parallelepiped();
            p.Load(); // Чтение из файла par_input.txt
            p.Info(); // Вывод в файл par_output.txt
#if !DEBUG
            // Сохранение данных ввода и вывода
            Console.SetOut(save_out);
            new_out.Close();
            Console.SetIn(save_in);
            new_in.Close();
#else
    Console.ReadKey();
#endif
        }
    }
}
