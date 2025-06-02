#include <iostream>
#include "Rectangle.h"
using namespace std;

int main() {
    // Ввод данных
    int x1, x2, y1, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter y2: ";
    cin >> y2;

    // Создание объекта класса Legs
    Rectangle(x1, x2, y1, y2);
    // Вывод информации
    InfoOfRectangle(x1, x2, y1, y2);
    RectangleDrawing(x1, x2, y1, y2);

    // Выполнение программы для значений-констант
    const int xx1 = 12, xx2 = 0, yy1 = 5, yy2 = 0;
    InfoOfRectangle(xx1, xx2, yy1, yy2);
    RectangleDrawing(xx1, xx2, yy1, yy2);
    return 0;
}
