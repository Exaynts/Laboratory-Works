#pragma once
#include "StringObject.h"

class SymbString : public StringObject {
public:
    SymbString(const string& id, const string& val);
    void show() const override;
    string add(const StringObject& other) const override;
    string subtract(const StringObject& other) const override;
};
