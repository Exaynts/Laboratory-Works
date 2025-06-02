#pragma once
#include "StringObject.h"
#include <bitset>
#include <format>

class BinString : public StringObject {
public:
    // �����������
    BinString(const string& id, const string& val);
    // ����� ������
    void show() const override;
    // ���������� ������
    string add(const StringObject& other) const override;
    // ��������� ������
    string subtract(const StringObject& other) const override;
    // ����� ������ � n-������ ��������. n = 2, 8, 10, 16
    string showBin() const override;
    string showOct() const override;
    string showDec() const override;
    string showHex() const override;

private:
    // ������� ��������� ������ ������ � 8- � 16-������ ������
    string toOctal(const string& binary) const;
    string toHexadecimal(const string& binary) const;
};
