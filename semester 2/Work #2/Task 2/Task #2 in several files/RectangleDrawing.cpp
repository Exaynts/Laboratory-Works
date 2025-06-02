#include <iostream>
#include <vector>
using namespace std;

// Отрисовка прямоугольника с помощью псевдографики
void RectangleDrawing(int x1, int x2, int y1, int y2) {
    cout << "*Getting rectangle's image and its diagonal*" << endl;
    // Создание матрицы для прямоугольника
    int xx = abs(x2 - x1) + 1;
    int yy = abs(y2 - y1) + 1;
    vector <vector<string>> Matrix(xx, vector <string>(yy));
    // Заполнение значением по умолчанию
    for (int i = 1; i < xx - 1; i++) {
        for (int j = 1; j < yy - 1; j++) {
            Matrix[i][j] = " ";
        }
    }
    // Заполнение сторон прямоугольника
    for (int i = 0; i < yy; i++) {
        Matrix[0][i] = "*";
        Matrix[xx - 1][i] = "*";
    }
    for (int i = 0; i < xx; i++) {
        Matrix[i][0] = "*";
        Matrix[i][yy - 1] = "*";
    }
    // Заполнение диагонали прямоугольника
    for (int i = 0; i < xx; i++) {
        int j1 = i * yy / xx;
        int j2 = (i + 1) * yy / xx;
        for (j1; j1 < j2; j1++) {
            Matrix[i][j1] = "*";
        }
    }
    // Вывод матрицы на консоль
    for (int i = 0; i < xx; i++) {
        cout << endl;
        for (int j = 0; j < yy; j++) {
            cout << Matrix[i][j];
        }
    }
    cout << endl;
}
