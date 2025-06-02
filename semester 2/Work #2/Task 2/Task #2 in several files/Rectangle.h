#pragma once
#include "Rectangle.cpp"
#include "RectangleDrawing.cpp"
class Rectangle {
    int x1;
    int x2;
    int y1;
    int y2;
public:
    // Конструктор объекта по умолчанию
    Rectangle() {
    }
    // Конструктор перезагрузки с параметрами;
    Rectangle(int p_x1, int p_x2,  int p_y1,  int p_y2) {
    }
    //Отрисовка прямоугольника с помощью псевдографики
    void RectangleDrawing(int x1, int x2, int y1, int y2) {
    }
    // Обработка значений полей (Вычисление длины диагонали)
    float CalculatingOfDiagonal(int x1, int x2, int y1, int y2) {
    }
    // Строка информации об объекте
    void InfoOfRectangle(int x1, int x2, int y1, int y2) {
    }
    // Деструктор объекта
    ~Rectangle() {
        cout << "The rectangle has been removed" << endl;
    }
} rectangle;
