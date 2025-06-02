#include "Array.h"
#include <iostream>
#include <vector>

void Menu() {
    // Определение массива
    cout << "Enter the length of array:" << endl;
    int n; // Длины массива
    cout << "n = ";
    cin >> n;
    Array numbers(n);
   
    // Выбор метода
    string method{"0"};
    while (method != "End") {
        cout << "\n\tSelect method:" << endl;
        cout << "Get_length, Get_Nums, Get_elem, Set_elem, Input, Print_elem, Print_all, Sum, Multiply, End." 
        << endl << "Method: ";
        cin >> method;
        if (method == "Get_length") {
            numbers.Get_length();
        }
        else if (method == "Get_Nums") {
            numbers.Get_Nums();
        }
        else if (method == "Get_elem") {
            numbers.Get_elem(n);
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
            cout << "Enter the length of the array you want to add/subtract the original to : " << endl;
            int n2;
            cin >> n2;
            Array numbers2(n2);
            cout << "Fill the array:" << endl;
            numbers2.Input();
            cout << "Write '+' if you want to add the array, '-' if you want to subtract it:" << endl;
            char sign;
            cin >> sign;
            numbers.Sum(numbers2, sign);
        }
        else if (method == "Multiply") {
            cout << "Write the value of the scalar you want to multiply/divide the array by" << endl;
            int scalar;
            cin >> scalar;
            cout << "Write '*' if you want to multiply, '/' if you want to divide" << endl;
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