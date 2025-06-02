#pragma once
#include <vector>
#include "Function.h"
#include "Action.h"
using namespace std;

class Menu
{
private:
	int Select_Item(int) const;
	vector<Function*> pObj;
	vector<Action*> pAct;
public:
	Menu(vector<Function*>, vector<Action*>);
	Function* Select_Object() const;
	Action* Select_Action(Function*) const;
};

