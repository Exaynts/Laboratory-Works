#pragma once
#include "Array.h"
#include <iostream>
#include <vector>

void Menu() {
    // Инициализация массива
    cout << "Enter the length of array:" << endl;
    int n; // Длина массива
    cout << "Length of array: ";
    while (!(cin >> n) or (cin.peek() != '\n') or (n <= 0)) { // Проверка ввода
        cin.clear();
        while (cin.get() != '\n');
        cout << "Input natural number!" << endl;
    }

    Array numbers(n);
    numbers.Input();
    // Выбор метода
    string method{"0"};
    while (method != "End") {
        cout << "\n\tSelect method:" << endl;
        cout << "Get_length, Input, Set_elem, Print_elem, Print_all, Sum, Multiply, End." 
        << endl << "Method: ";
        cin >> method;
        if (method == "Get_length") {
            numbers.Get_length();
        }
        else if (method == "Input") {
            numbers.Get_length();
        }
        else if (method == "Set_elem") {
            cout << "Enter element's index : " << endl;
            int index;
            cin >> index;
            cout << "Enter new value of element: " << endl;
            int value;
            cin >> value;
            numbers.Set_elem(index, value);
        }
        else if (method == "Input") {
            numbers.Input();
        }
        else if (method == "Print_elem") {
            cout << "Enter element's index : " << endl;
            int index;
            cin >> index;
            numbers.Print_elem(index);
        }
        else if (method == "Print_all") {
            numbers.Print_all();
        }
        else if (method == "Sum") {
            Array numbers2(n);
            cout << "Fill the array:" << endl;
            numbers2.Input();
            cout << "Write '+' if you want to add the array, '-' if you want to subtract it: ";
            char sign;
            cin >> sign;
            numbers.Sum(numbers2, sign);
        }
        else if (method == "Multiply") {
            cout << "Write the integer value of the scalar you want to multiply/divide the array by: ";
            int scalar;
            cin >> scalar;
            cout << "\nWrite '*' if you want to multiply, '/' if you want to divide: ";
            char sign;
            cin >> sign;
            numbers.Multiply(scalar, sign);
        }
        else if (method == "End")
            break;
        else {
            cout << "There is no such method. Please enter the method name correctly" << endl;
        }
    }
}