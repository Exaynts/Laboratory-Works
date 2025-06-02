#pragma once
#include "BinString.h"
#include "Factory.h"
#include <iostream>
#include "SymbString.h"

// Ввод нужного натурального числа
static int Input_int(int max) {
    int input;
    while (!(cin >> input) or (cin.peek() != '\n') or (input <= 0) or (input > max)) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Введите число от 1 до " << max << ":\n";
    }
    cin.ignore();
    return input;
}

class Menu {
public:
    // Показ опций
    static void displayMenu() {
        cout << "\nМеню:\n"
            << "1) Создать SymbString (символьную строку)\n"
            << "2) Создать BinString (двоичную строку)\n"
            << "3) Удалить строку\n"
            << "4) Показать все строки\n"
            << "5) Показать строку в восьмеричном формате\n"
            << "6) Показать строку в десятичном формате\n"
            << "7) Показать строку в шестнадцатеричном формате\n"
            << "8) Выполнить сложение строк\n"
            << "9) Выполнить вычитание строк\n"
            << "10) Выход из программы\n"
            << "Опция #";
    }
    // Главное меню
    static void Main_Menu() {
        Factory factory;
        string id, value, id1, id2;
        int choice;
        do {
            // Выбипаем опцию
            displayMenu();
            choice = Input_int(10); // 10 -- количество возможных опций
            // Реализация опций
            switch (choice) {
            case 1: {
                cout << "Введите ID строки: ";
                getline(cin, id);
                cout << "Введите строковое значение: ";
                getline(cin, value);
                factory.createObject("SymbString", id, value);
                break;
            }
            case 2: {
                cout << "Введите ID строки: ";
                getline(cin, id);
                cout << "Введите двоичное значение (использовать только символы '0' и '1'): ";
                getline(cin, value);
                factory.createObject("BinString", id, value);
                break;
            }
            case 3: {
                cout << "Введите ID строки для удаления: ";
                getline(cin, id);
                factory.deleteObject(id);
                break;
            }
            case 4: {
                factory.showAllObjects();
                break;
            }
            case 5: {
                cout << "Введите ID строки: ";
                getline(cin, id);
                factory.showObjectOct(id);
                break;
            }
            case 6: {
                cout << "Введите ID строки: ";
                getline(cin, id);
                factory.showObjectDec(id);
                break;
            }
            case 7: {
                cout << "Введите ID строки: ";
                getline(cin, id);
                factory.showObjectHex(id);
                break;
            }
            case 8: {
                cout << "Введите ID первого строки: ";
                getline(cin, id1);
                cout << "Введите ID второго строки: ";
                getline(cin, id2);
                factory.performAddition(id1, id2);
                break;
            }
            case 9: {
                cout << "Введите ID первой строки: ";
                getline(cin, id1);
                cout << "Введите ID второй строки: ";
                getline(cin, id2);
                factory.performSubtraction(id1, id2);
                break;
            }
            case 10: {
                break;
            }
            default: {
                cout << "Неверный номер выбора!\n";
                break;
            }
            }
        } while (choice != 10);

    }
};

