using System;

/*Будет создаваться четырехугольная пирамида,
с равносторонним треугольником в основании, 
а последняя точка будет располагаться над центром треугольника*/
namespace Test {
    internal class Pyramid4 {
        // Параметры
        private double a, h;
        // Конструкторы
        public Pyramid4() { a = 1; h = 1; }
        public Pyramid4(double height): this() { a = 1; h = height; }
        private Pyramid4(double base_side, double height) { a = base_side; h = height;}
        // Ввод данных
        private void Load() {
            a = Convert.ToDouble(Console.ReadLine());
            h = Convert.ToDouble(Console.ReadLine());
        }
        // Создание экземпляра из ввода
        public static Pyramid4 Create() {
            double a = 1, h = 1; // значения по умолчанию
            try {
                Console.Write("a = "); 
                a = Convert.ToDouble(Console.ReadLine()); 
            }
            catch (FormatException) {}
            try {
                Console.Write("h = "); 
                h = Convert.ToDouble(Console.ReadLine()); 
            }
            catch (FormatException) {}
            return new Pyramid4(a, h);
        }
        // Нахождение объёма
        public double GetV() { return Math.Pow(3, -0.5)/ 4; }
        public double GetV(double a) { return Math.Pow(3, -0.5)*a*a/ 4; }
        public double GetV(double a, double h) { return Math.Pow(3, -0.5) * a * a*h / 4; }
        // Нахождение площади поверхности
        public double GetS(double a, double h) {
            double S_base = a * a * Math.Pow(3, 0.5) / 4; // Нижняя сторона
            double S_side = a/2 * Math.Pow(h*h+a*a/12, 0.5); // Боковая сторона
            return S_base + 3 * S_side; }

        // Вывод информации о пирамиде
        public void Info()
        {
            String str = "         **          Пирамида    \n" +
                         "       **  ******                \n" +
                         "     **       *  ****            \n" +
                         "    *           **   ****        \n" +
                         "  **              **      ****   \n" +
                         "*********************************\n";
            Console.WriteLine(str);
            Console.WriteLine(string.Format(
                "base_side = {0:0.00}, height = {1:0.00}", a, h));
            Console.WriteLine(string.Format("V = {0:0.00}", GetV(a, h)));
            Console.WriteLine(string.Format("S = {0:0.00}", GetS(a, h)));
        }
        // Вывод информации о пирамиде с изменением цвета консоли
        public void Info(ConsoleColor fg, ConsoleColor bgc)
        {
            Console.ForegroundColor = fg; // Цвет текста
            Console.BackgroundColor = bgc; // Цвет фона
            Info();
        }
    }
}
