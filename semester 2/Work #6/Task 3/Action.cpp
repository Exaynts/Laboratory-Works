// Action.cpp
#include <iostream>
#include <cstdio>
#include "Action.h"
#include "HexString.h"
#define _CRT_SECURE_NO_WARNINGS

using namespace std;

long Action::GetDecimal(AString* pObj) const {
    if (dynamic_cast<HexString*>(pObj)) {
        long dest;
        string source = pObj->GetVal();
        sscanf_s(source.c_str(), "%lX", &dest);
        return dest;
    }
    else {
        cout << "Action not supported." << endl;
        return -1;
    }
}