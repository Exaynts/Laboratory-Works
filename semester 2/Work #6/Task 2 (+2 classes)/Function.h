#pragma once
#ifndef  FUNCTION_H
#define FUNCTION_H

#include <iostream>
#include <string>
using namespace std;

class Function
{
protected:
	double x; //аргумент
public:
	virtual ~Function(){}
	virtual void Set_Coeff() = 0;
	void Set_Arg(double arg) { x = arg; }
	virtual double Get_Val() const = 0;
	virtual const std::string& Get_Name() const = 0;
};

#endif // ! FUNCTION_H
static double Input_float() {
	double input;
	while (!(cin >> input) or (cin.peek() != '\n')) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "Enter the number correctly!" << endl;
	}
	return input;
}
static unsigned long int Input_natural() {
	unsigned long int input;
	while (!(cin >> input) or (cin.peek() != '\n') or input <= 0) {
		cin.clear();
		while (cin.get() != '\n');
		cout << "Enter the natural number correctly!" << endl;
	}
	return input;
}

