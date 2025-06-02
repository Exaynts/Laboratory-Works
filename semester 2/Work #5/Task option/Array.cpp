#include "Array.h"
#include "Menu.cpp"
#include <iostream>
#include <vector>

// Определение массива по умолчанию
Array::Array() {
    length = 1;
    nums = vector<int>(length);
}
// Определение массива произврльной длины
Array::Array(int len) {
    length = len;
    nums = vector<int>(length);
}

// Геттеры
int Array::Get_length() {
    return length;
}
vector<int> Array::Get_Nums() {
    return nums;
}
// Получение элемента массива
int Array::Get_elem(int i) {
    if (i < length && i >= 0) {
        return nums[i];
    }
    else {
        cout << "Element can't be found" << endl;
    }
}
// Изменение элемента массива
void Array::Set_elem(int i, int value) {
    if (i < length && i >= 0) {
        nums[i] = value;
    }
    else {
        cout << "List index is out of range!" << endl;
    }
}

// Заполнение массива пользователем
void Array::Input() {
    cout << "Array input:" << endl;
    int value;
    for (int i = 0; i < length; i++) {
        cout << "i" << i << " = ";
        cin >> value;
        nums[i] = value;
    }
}

// Вывод элемента массива
void Array::Print_elem(int i) {
    if (i < length and i >= 0) {
        cout << nums[i] << endl;
    }
    else {
        cout << "The element can't be found" << endl;
    }
}
// Вывод всего массива
void Array::Print_all() {
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << std::endl;
}

// Сумма двух массивов
void Array::Sum(Array numbers2, char sign) { // sign это "+" или "-"
    if (length != numbers2.Get_length()) {
        cout << "The lengths of the arrays aren't equal!" << endl;
    }
    else {
        int s = 0;
        if (sign == '+')
            s = 1;
        else if (sign == '-')
            s = -1;
        else {
            cout << "Char error!";
        }

        for (int i = 0; i < length; i++) {
            nums[i] += s * numbers2.nums[i];
        }
    }
}
// Умножение массива на скаляр
void Array::Multiply(int scalar, char sign) { // sign это "*" или "/"
    if (sign == '*') {
        for (int i = 0; i < length; i++) {
            nums[i] *= scalar;
        }
    }
    else if (sign == '/') {
        if (scalar == 0) {
            cout << "Division by zero!" << endl;
        }
        else {
            for (int i = 0; i < length; i++) {
                nums[i] /= scalar;
            }
        }
    }
    else {
        cout << "Char error!";
    }
}
