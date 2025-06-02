#include "Tabulation.h"
#include <iostream>
#include <iomanip>

using namespace std;

void Tabulation::Operate(Function* func) {
	cout << "Tabulation for function y = ";
	cout << func->Get_Name() << endl;
	func->Set_Coeff();

	double x_beg, x_step, x_end;
	cout << "Enter x_beg: "; cin >> x_beg;
	cout << "Enter x_step: "; cin >> x_step;
	cout << "Enter x_end: "; cin >> x_end;
	cin.get();

	cout << "_____________________\n";
	cout << "     x         y  \n";
	cout << "_____________________\n";
	double x = x_beg;
	while (x <= x_end) {
		func->Set_Arg(x);
		cout << setw(6) << x << setw(14) << func->Get_Val() << endl;
		x += x_step;
	}
	cin.get();
}

Tabulation tabulation;