#pragma once
#include "StringObject.h"
#include <bitset>
#include <format>

class BinString : public StringObject {
public:
    // Конструктор
    BinString(const string& id, const string& val);
    // Показ строки
    void show() const override;
    // Добавление строки
    string add(const StringObject& other) const override;
    // Вычитание строки
    string subtract(const StringObject& other) const override;
    // Показ строки в n-ричных форматах. n = 2, 8, 10, 16
    string showBin() const override;
    string showOct() const override;
    string showDec() const override;
    string showHex() const override;

private:
    // Перевод двоичного набора строки в 8- и 16-ричный формат
    string toOctal(const string& binary) const;
    string toHexadecimal(const string& binary) const;
};
