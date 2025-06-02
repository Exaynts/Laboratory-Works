#pragma once
#include <string>
#include <iostream>
using namespace std;

class StringObject {
protected:
    string id;
    string value;

public:
    StringObject(const string& id, const string& val);
    virtual ~StringObject() = default;

    string getId() const;
    string getValue() const;

    virtual void show() const;
    virtual string add(const StringObject& other) const = 0;
    virtual string subtract(const StringObject& other) const = 0;

    virtual string showBin() const;
    virtual string showOct() const;
    virtual string showDec() const;
    virtual string showHex() const;
};
