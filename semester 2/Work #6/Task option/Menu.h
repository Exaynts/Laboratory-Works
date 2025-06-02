#pragma once
#include "BinString.h"
#include "Factory.h"
#include <iostream>
#include "SymbString.h"

// ���� ������� ������������ �����
static int Input_int(int max) {
    int input;
    while (!(cin >> input) or (cin.peek() != '\n') or (input <= 0) or (input > max)) {
        cin.clear();
        while (cin.get() != '\n');
        cout << "������� ����� �� 1 �� " << max << ":\n";
    }
    cin.ignore();
    return input;
}

class Menu {
public:
    // ����� �����
    static void displayMenu() {
        cout << "\n����:\n"
            << "1) ������� SymbString (���������� ������)\n"
            << "2) ������� BinString (�������� ������)\n"
            << "3) ������� ������\n"
            << "4) �������� ��� ������\n"
            << "5) �������� ������ � ������������ �������\n"
            << "6) �������� ������ � ���������� �������\n"
            << "7) �������� ������ � ����������������� �������\n"
            << "8) ��������� �������� �����\n"
            << "9) ��������� ��������� �����\n"
            << "10) ����� �� ���������\n"
            << "����� #";
    }
    // ������� ����
    static void Main_Menu() {
        Factory factory;
        string id, value, id1, id2;
        int choice;
        do {
            // �������� �����
            displayMenu();
            choice = Input_int(10); // 10 -- ���������� ��������� �����
            // ���������� �����
            switch (choice) {
            case 1: {
                cout << "������� ID ������: ";
                getline(cin, id);
                cout << "������� ��������� ��������: ";
                getline(cin, value);
                factory.createObject("SymbString", id, value);
                break;
            }
            case 2: {
                cout << "������� ID ������: ";
                getline(cin, id);
                cout << "������� �������� �������� (������������ ������ ������� '0' � '1'): ";
                getline(cin, value);
                factory.createObject("BinString", id, value);
                break;
            }
            case 3: {
                cout << "������� ID ������ ��� ��������: ";
                getline(cin, id);
                factory.deleteObject(id);
                break;
            }
            case 4: {
                factory.showAllObjects();
                break;
            }
            case 5: {
                cout << "������� ID ������: ";
                getline(cin, id);
                factory.showObjectOct(id);
                break;
            }
            case 6: {
                cout << "������� ID ������: ";
                getline(cin, id);
                factory.showObjectDec(id);
                break;
            }
            case 7: {
                cout << "������� ID ������: ";
                getline(cin, id);
                factory.showObjectHex(id);
                break;
            }
            case 8: {
                cout << "������� ID ������� ������: ";
                getline(cin, id1);
                cout << "������� ID ������� ������: ";
                getline(cin, id2);
                factory.performAddition(id1, id2);
                break;
            }
            case 9: {
                cout << "������� ID ������ ������: ";
                getline(cin, id1);
                cout << "������� ID ������ ������: ";
                getline(cin, id2);
                factory.performSubtraction(id1, id2);
                break;
            }
            case 10: {
                break;
            }
            default: {
                cout << "�������� ����� ������!\n";
                break;
            }
            }
        } while (choice != 10);

    }
};

