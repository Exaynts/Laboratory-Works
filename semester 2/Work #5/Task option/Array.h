#pragma once
#include <iostream>
#include <vector>
using namespace std;

void Menu();
class Array {
    int length; // Äëèíà ìàññèâà ÷èñåë
    vector <int> nums;
public:
    // Определение массива по умолчанию
    Array();
    // Определение массива произвольной длины
    Array(int len);

    // Геттеры
    int Get_length();
    vector<int> Get_Nums();
    // Получение элемента массива
    int Get_elem(int i);
    // Изменение элемента массива
    void Set_elem(int i, int value);

    // Заполнение массива пользователем
    void Input();

    // Вывод элемента массива
    void Print_elem(int i);
    // Вывод всего массива
    void Print_all();

    // Сумма двух массивов
    void Sum(Array numbers2, char sign); // sign это "+" или "-"
    // Умножение массива на скаляр
    void Multiply(int scalar, char sign); // sign это "*" или "/"
};
