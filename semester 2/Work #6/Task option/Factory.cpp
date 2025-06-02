#include "Factory.h"
#include "SymbString.h"
#include "BinString.h"
#include <iostream>

// Создать объект
void Factory::createObject(const string& type, const string& id, const string& value) {
    try {
        if (type == "SymbString") {
            objects.push_back(new SymbString(id, value));
        }
        else if (type == "BinString") {
            objects.push_back(new BinString(id, value));
        }
        else {
            cout << "Ошибка: неизвестный тип строки: " << type << endl;
            return;
        }
        cout << "Строка успешно создана." << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка при создании строки: " << e.what() << endl;
    }
}

// Удалить объект
void Factory::deleteObject(const string& id) {
    auto it = find_if(objects.begin(), objects.end(),
        [&id](const StringObject* obj) { return obj->getId() == id; });

    if (it != objects.end()) {
        delete* it;
        objects.erase(it);
        cout << "Строка с ID '" << id << "' удалёна." << endl;
    }
    else {
        cout << "Строка с ID '" << id << "' не найдена." << endl;
    }
}

// Показать все объекты
void Factory::showAllObjects() const {
    if (objects.empty()) {
        cout << "В фабрике нет строк." << endl;
        return;
    }

    cout << "\nВсе строки в фабрике:" << endl;
    for (const auto obj : objects) {
        obj->show();
    }
}

// Найти объект
StringObject* Factory::findObject(const string& id) const {
    auto it = find_if(objects.begin(), objects.end(), [&id](const StringObject* obj) { 
        return obj->getId() == id; }); // Находим объект с помощью find_if

    if (it != objects.end()) {
        return *it;
    }
    return nullptr;
}

// Выполнить сложение объектов
void Factory::performAddition(const string& id1, const string& id2) {
    StringObject* obj1 = findObject(id1);
    StringObject* obj2 = findObject(id2);

    if (!obj1 or !obj2) {
        cout << "Одна или обе строки не найдены." << endl;
        return;
    }

    try {
        string result = obj1->add(*obj2);
        cout << "Результат сложения строк: " << result << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка при сложении строк: " << e.what() << endl;
    }
}

// Выполнить вычитание объектов
void Factory::performSubtraction(const string& id1, const string& id2) {
    StringObject* obj1 = findObject(id1);
    StringObject* obj2 = findObject(id2);

    if (!obj1 or !obj2) {
        cout << "Одна или обе строки не найдены." << endl;
        return;
    }

    try {
        string result = obj1->subtract(*obj2);
        cout << "Результат вычитания: " << result << endl;
    }
    catch (const exception& e) {
        cout << "Ошибка при вычитании: " << e.what() << endl;
    }
}

// Показ объекта в 8-ричном формате
void Factory::showObjectOct(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string oct = obj->showOct();
        if (!oct.empty()) {
            cout << "Восьмеричное представление: " << oct << endl;
        }
        else {
            cout << "Восьмеричное представление недоступно для этого типа строки." << endl;
        }
    }
    else {
        cout << "Строка не найдена." << endl;
    }
}

// Показ объекта в 10-ричном формате
void Factory::showObjectDec(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string dec = obj->showDec();
        if (!dec.empty()) {
            cout << "Десятичное представление: " << dec << endl;
        }
        else {
            cout << "Десятичное представление недоступно для этого типа строки." << endl;
        }
    }
    else {
        cout << "Строка не найдена." << endl;
    }
}

// Показ объекта в 16-ричном формате
void Factory::showObjectHex(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string hex = obj->showHex();
        if (!hex.empty()) {
            cout << "Шестнадцатеричное представление: " << hex << endl;
        }
        else {
            cout << "Шестнадцатеричное представление недоступно для этого типа строки." << endl;
        }
    }
    else {
        cout << "Строка не найдена." << endl;
    }
}

// Деструктор
Factory::~Factory() {
    for (auto obj : objects) {
        delete obj;
    }
    objects.clear();
}