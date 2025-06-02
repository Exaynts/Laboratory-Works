#include <iostream>
#include "Function.h"
#include "Action.h"
#include "Calculation.h"
#include "Tabulation.h"
#include "Any_Action.h"
#include "Parabola.h"
#include "Polynomial.h"
#include "Gamma.h"
#include "Exp.h"
#include "Line.h"
#include "Menu.h"

using namespace std;

vector<Function*> func_list = { &f_exp, &f_line, &f_parabola, &f_polynomial, &f_gamma};
vector<Action*> act_list = { &calculation, &tabulation, &any_action };

int main()
{
    Menu menu(func_list, act_list);
    while (Function* pObj = menu.Select_Object()){
        Action* pAct = menu.Select_Action(pObj);
        pAct->Operate(pObj);
    }
    cout << "Bye\n";
    return 0;
}

