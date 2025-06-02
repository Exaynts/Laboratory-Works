#include <iostream>
#include <math.h>
using namespace std;

// Конструктор объекта по умолчанию
void Rectangle() {
    int x1 = 0;
    int x2 = 0;
    int y1 = 0;
    int y2 = 0;
}
// Конструктор перезагрузки с параметрами;
void Rectangle(int p_x1, int p_x2, int p_y1, int p_y2) {
    int x1 = p_x1;
    int x2 = p_x2;
    int y1 = p_y1;
    int y2 = p_y2;
    cout << "meow" << endl;
}
// Обработка значений полей (Вычисление длины диагонали)
float CalculatingOfDiagonal(int x1, int x2, int y1, int y2) {
    float diagonal;
    diagonal = pow(((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)), 0.5);
    return diagonal;
}
// Строка информации об объекте
void InfoOfRectangle (int x1, int x2, int y1, int y2) {
    cout << endl << "x1 = " << x1 << ", x2 = " << x2 << ", y1 = " << y1 << ", y2 = " << y2 <<
    ", rectangle's diagonal = " << CalculatingOfDiagonal(x1, y1, x2, y2) << endl;
}
