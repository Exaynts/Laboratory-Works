#include "SymbString.h"

SymbString::SymbString(const string& id, const string& val): StringObject(id, val) {
}

void SymbString::show() const {
    cout << "SymbString - ";
    StringObject::show();
}

string SymbString::add(const StringObject& other) const {
    return value + other.getValue();
}

string SymbString::subtract(const StringObject& other) const {
    size_t pos = value.find(other.getValue());
    if (pos != string::npos) {
        string result = value;
        result.erase(pos, other.getValue().length());
        return result;
    }
    return value;
}