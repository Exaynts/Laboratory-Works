// main.cpp
/*
#include <iostream>
#include <vector>
#include "Function.h"
#include "Exp.h"
#include "Line.h"
#include "Parabola.h"
#include "Menu.h"

using namespace std;

Function* pObjs[] = { &f_exp, &f_line, &f_parabola };
vector<Function*> funcList(pObjs, pObjs + sizeof(pObjs)/sizeof(Function*));

int main() {
    Menu menu(funcList);
    while (Function* pObj = menu.SelectObject())
        pObj->Calculate();
    cout << "Bye!\n";
    return 0;
}
*/