#pragma once
#include "Function.h"

//Класс для представления функции y = a * x ^ 2 + b * x + c
class Gamma : public Function
{
protected:
	std::string name;
	double a, b, c;
public:
	Gamma() : name("gamma(x+1) / factorial(x)") {}
	const std::string& Get_Name() const { return name; }
	void Set_Coeff() {};
	double Get_Val() const;
};

extern Gamma f_gamma;
