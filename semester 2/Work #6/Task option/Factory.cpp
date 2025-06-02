#include "Factory.h"
#include "SymbString.h"
#include "BinString.h"
#include <iostream>

// ������� ������
void Factory::createObject(const string& type, const string& id, const string& value) {
    try {
        if (type == "SymbString") {
            objects.push_back(new SymbString(id, value));
        }
        else if (type == "BinString") {
            objects.push_back(new BinString(id, value));
        }
        else {
            cout << "������: ����������� ��� ������: " << type << endl;
            return;
        }
        cout << "������ ������� �������." << endl;
    }
    catch (const exception& e) {
        cout << "������ ��� �������� ������: " << e.what() << endl;
    }
}

// ������� ������
void Factory::deleteObject(const string& id) {
    auto it = find_if(objects.begin(), objects.end(),
        [&id](const StringObject* obj) { return obj->getId() == id; });

    if (it != objects.end()) {
        delete* it;
        objects.erase(it);
        cout << "������ � ID '" << id << "' ������." << endl;
    }
    else {
        cout << "������ � ID '" << id << "' �� �������." << endl;
    }
}

// �������� ��� �������
void Factory::showAllObjects() const {
    if (objects.empty()) {
        cout << "� ������� ��� �����." << endl;
        return;
    }

    cout << "\n��� ������ � �������:" << endl;
    for (const auto obj : objects) {
        obj->show();
    }
}

// ����� ������
StringObject* Factory::findObject(const string& id) const {
    auto it = find_if(objects.begin(), objects.end(), [&id](const StringObject* obj) { 
        return obj->getId() == id; }); // ������� ������ � ������� find_if

    if (it != objects.end()) {
        return *it;
    }
    return nullptr;
}

// ��������� �������� ��������
void Factory::performAddition(const string& id1, const string& id2) {
    StringObject* obj1 = findObject(id1);
    StringObject* obj2 = findObject(id2);

    if (!obj1 or !obj2) {
        cout << "���� ��� ��� ������ �� �������." << endl;
        return;
    }

    try {
        string result = obj1->add(*obj2);
        cout << "��������� �������� �����: " << result << endl;
    }
    catch (const exception& e) {
        cout << "������ ��� �������� �����: " << e.what() << endl;
    }
}

// ��������� ��������� ��������
void Factory::performSubtraction(const string& id1, const string& id2) {
    StringObject* obj1 = findObject(id1);
    StringObject* obj2 = findObject(id2);

    if (!obj1 or !obj2) {
        cout << "���� ��� ��� ������ �� �������." << endl;
        return;
    }

    try {
        string result = obj1->subtract(*obj2);
        cout << "��������� ���������: " << result << endl;
    }
    catch (const exception& e) {
        cout << "������ ��� ���������: " << e.what() << endl;
    }
}

// ����� ������� � 8-������ �������
void Factory::showObjectOct(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string oct = obj->showOct();
        if (!oct.empty()) {
            cout << "������������ �������������: " << oct << endl;
        }
        else {
            cout << "������������ ������������� ���������� ��� ����� ���� ������." << endl;
        }
    }
    else {
        cout << "������ �� �������." << endl;
    }
}

// ����� ������� � 10-������ �������
void Factory::showObjectDec(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string dec = obj->showDec();
        if (!dec.empty()) {
            cout << "���������� �������������: " << dec << endl;
        }
        else {
            cout << "���������� ������������� ���������� ��� ����� ���� ������." << endl;
        }
    }
    else {
        cout << "������ �� �������." << endl;
    }
}

// ����� ������� � 16-������ �������
void Factory::showObjectHex(const string& id) {
    StringObject* obj = findObject(id);
    if (obj) {
        string hex = obj->showHex();
        if (!hex.empty()) {
            cout << "����������������� �������������: " << hex << endl;
        }
        else {
            cout << "����������������� ������������� ���������� ��� ����� ���� ������." << endl;
        }
    }
    else {
        cout << "������ �� �������." << endl;
    }
}

// ����������
Factory::~Factory() {
    for (auto obj : objects) {
        delete obj;
    }
    objects.clear();
}