#include "Polynomial.h"
#include <iostream>
using namespace std;

void Polynomial::Set_Coeff() {
	cout << "Degree of polynomial: \n";
	n = Input_natural();
	for (int i = 0; i <= n; i++) {
		cout << "Enter a[" << i << "] = ";
		double coeff;
		cin >> coeff;
		coeffs.push_back(coeff);
	}
	cin.get();
}

double Polynomial::Get_Val() const {
	double ans = 0;
	for (int i = 0; i <= n; i++) {
		ans += coeffs[i] * pow(x, i);
	}
	return ans; }

Polynomial f_polynomial;