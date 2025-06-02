#include "StringObject.h"

StringObject::StringObject(const string& id, const string& val): id(id), value(val) {
}

string StringObject::getId() const {
    return id;
}

string StringObject::getValue() const {
    return value;
}

void StringObject::show() const {
    cout << "ID: " << id << ", Значение: " << value << endl;
}

string StringObject::showBin() const {
    return "";
}

string StringObject::showOct() const {
    return "";
}

string StringObject::showDec() const {
    return "";
}

string StringObject::showHex() const {
    return "";
}