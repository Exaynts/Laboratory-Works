#pragma once
#include "StringObject.h"
#include <vector>
#include <algorithm>

// В качестве объектов будут выступать строки символов
class Factory {
private:
    // Хранилище указателей на объекты
    vector<StringObject*> objects;

public:
    // Создать объект
    void createObject(const string& type, const string& id, const string& value);
    // Удалить объект
    void deleteObject(const string& id);
    // Показать все объекты
    void showAllObjects() const;
    // Найти объект
    StringObject* findObject(const string& id) const;
    // Выполнить сложение объектов
    void performAddition(const string& id1, const string& id2);
    // Выполнить вычитание объектов
    void performSubtraction(const string& id1, const string& id2);
    // Показ объекта в n-ричном формате
    // void showObjectBin(const string& id);
    void showObjectOct(const string& id);
    void showObjectDec(const string& id);
    void showObjectHex(const string& id);
    // Деструктор
    ~Factory();
};

