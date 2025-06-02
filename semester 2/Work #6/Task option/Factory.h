#pragma once
#include "StringObject.h"
#include <vector>
#include <algorithm>

// � �������� �������� ����� ��������� ������ ��������
class Factory {
private:
    // ��������� ���������� �� �������
    vector<StringObject*> objects;

public:
    // ������� ������
    void createObject(const string& type, const string& id, const string& value);
    // ������� ������
    void deleteObject(const string& id);
    // �������� ��� �������
    void showAllObjects() const;
    // ����� ������
    StringObject* findObject(const string& id) const;
    // ��������� �������� ��������
    void performAddition(const string& id1, const string& id2);
    // ��������� ��������� ��������
    void performSubtraction(const string& id1, const string& id2);
    // ����� ������� � n-������ �������
    // void showObjectBin(const string& id);
    void showObjectOct(const string& id);
    void showObjectDec(const string& id);
    void showObjectHex(const string& id);
    // ����������
    ~Factory();
};

