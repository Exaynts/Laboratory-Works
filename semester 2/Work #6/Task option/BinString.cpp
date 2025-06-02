#include "BinString.h"
#include <stdexcept>

// Конструктор
BinString::BinString(const string& id, const string& val): StringObject(id, val) {
    for (char c: val) {
        if (c != '0' and c != '1') {
            throw invalid_argument("BinString может содержать только '0' и '1'");
        }
    }
}

void BinString::show() const {
    cout << "BinString - ";
    StringObject::show();
}

string BinString::add(const StringObject& other) const {
    try {
        bitset<64> bits1(value);
        bitset<64> bits2(other.showBin());
        return (bits1.to_ulong() + bits2.to_ulong()) > 0 ?
            bitset<64>(bits1.to_ulong() + bits2.to_ulong()).to_string() : "0";
    }
    catch (...) {
        return "Ошибка в сложении строк (чисел)";
    }
}

string BinString::subtract(const StringObject& other) const {
    try {
        bitset<64> bits1(value);
        bitset<64> bits2(other.showBin());
        if (bits1.to_ulong() < bits2.to_ulong()) {
            return "0";
        }
        return bitset<64>(bits1.to_ulong() - bits2.to_ulong()).to_string();
    }
    catch (...) {
        return "Ошибка в вычитании строк (чисел)";
    }
}

string BinString::showBin() const {
    return value;
}

string BinString::showOct() const {
    return toOctal(value);
}

string BinString::showDec() const {
    bitset<64> bits(value);
    return to_string(bits.to_ulong());
}

string BinString::showHex() const {
    return toHexadecimal(value);
}

string BinString::toOctal(const string& binary) const {
    bitset<64> bits(binary);
    return format("{:o}", bits.to_ulong()); // Преобразуем строку из двоичного вида в восьмеричный
}

string BinString::toHexadecimal(const string& binary) const {
    bitset<64> bits(binary);
    return format("{:x}", bits.to_ulong()); // Преобразуем строку из двоичного вида в шестнадцатеричный
}