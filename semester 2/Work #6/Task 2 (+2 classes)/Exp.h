#pragma once
#include "Function.h"
#include "math.h"

//Класс для представления функции y = e ^ x
class Exp : public Function
{
protected:
	std::string name;
public:
	Exp() : name("e ^ x") {}
	const std::string& Get_Name() const { return name; }
	void Set_Coeff() {}
	double Get_Val() const { return exp(x); }
};

//Глобальный объект
extern Exp f_exp;
