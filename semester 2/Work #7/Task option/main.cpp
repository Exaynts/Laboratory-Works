#include <iostream>
#include <string>
#include "binary_tree.h"

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    try {
        // int
        BinaryTree<int> intTree;
        intTree.Insert(5);
        intTree.Insert(3);
        intTree.Insert(7);
        intTree.Insert(2);
        intTree.Insert(4);

        auto intResult = intTree.Get_All_Elem();
        cout << "Обход дерева: ";
        for (int num : intResult) {
            cout << num << " ";
        }
        cout << endl;

        // Проверка наличия элемента в дереве
        cout << "Содержит 4: " << boolalpha << intTree.contains(4) << endl;
        cout << "Содержит 10: " << boolalpha << intTree.contains(10) << endl;

        // Удаление элемента
        intTree.remove(3);
        intResult = intTree.Get_All_Elem();
        cout << "После удаления 3: ";
        for (int num : intResult) {
            cout << num << " ";
        }
        cout << endl;

        // double
        BinaryTree<double> doubleTree;
        doubleTree.Insert(3.14);
        doubleTree.Insert(2.71);
        doubleTree.Insert(1.41);

        auto doubleResult = doubleTree.Get_All_Elem();
        cout << "Обход дерева: ";
        for (double num : doubleResult) {
            cout << num << " ";
        }
        cout << endl;

        // string
        BinaryTree<string> stringTree;
        stringTree.Insert("яблоко");
        stringTree.Insert("банан");
        stringTree.Insert("вишня");

        auto stringResult = stringTree.Get_All_Elem();
        cout << "Обход дерева: ";
        for (const auto& str : stringResult) {
            cout << str << " ";
        }
        cout << endl;

        // Тестирование исключений
        BinaryTree<int> emptyTree;
        try {
            emptyTree.remove(1);
        }
        catch (const EmptyTreeException& e) {
            cout << "Поймано исключение: " << e.what() << endl;
        }

        try {
            intTree.remove(100);
        }
        catch (const ElementNotFoundException& e) {
            cout << "Поймано исключение: " << e.what() << endl;
        }

    }
    catch (const exception& e) {
        cerr << "Ошибка: " << e.what() << endl;
    }

    return 0;
}
