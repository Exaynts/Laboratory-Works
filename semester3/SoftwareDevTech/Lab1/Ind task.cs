using System;
using System.IO;
using System.Text;
namespace Test {
    // Класс цилиндра
    class Cylinder
    {
        private double r, h, pi = Math.PI;
        // Ввод данных
        public void Input()
        {
            Console.Write("Радиус основания: ");
            r = Convert.ToDouble(Console.ReadLine());
            Console.Write("Высота: ");
            h = Convert.ToDouble(Console.ReadLine());
        }
        // Площадь поверхности
        public double GetS() { return 2*pi*r*(r+h); }
        // Объем
        public double GetV() { return pi*r*r*h; }
        // Инфомация о цилиндре
        public void Info() {
            Console.WriteLine($"Радиус основания = {r} \r\nВысота = {h}");
        }
        // Вывод данных
        public void Output()
        {
            Console.WriteLine("\r\nВывод данных:");
            Info();
            // Вычисленные данные
            Console.WriteLine(string.Format("Площадь основания = {0:0.00}", GetS()));
            Console.WriteLine(string.Format("Объём = {0:0.00}", GetV()));
        }
    }
    class Program 
    {
        static void Main(string[] args) {
#if DEBUG
    Console.WriteLine("Включен режим отладки");
#endif
            Cylinder cyl = new Cylinder();
#if RELEASE
    Console.WriteLine("Введите данные о цилиндре:");
#endif
            cyl.Input();
            cyl.Output(); 
        }
    }
}
