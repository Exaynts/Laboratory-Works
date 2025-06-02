#include "Any_Action.h"
#include <iostream>
using namespace std;

void Any_Action::Operate(Function* func) {
	cout << "Your advertising might be here!\n";
	cin.get();
}

//Глобальный объект
Any_Action any_action;