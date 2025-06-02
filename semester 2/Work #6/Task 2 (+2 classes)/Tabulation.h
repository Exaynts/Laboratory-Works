#pragma once
#include "Action.h"
class Tabulation : public Action
{
private:
	std::string name;
public:
	Tabulation() : name("Tabulation") {}
	const std::string& Get_Name() const { return name; };
	void Operate(Function*);
};

extern Tabulation tabulation;

