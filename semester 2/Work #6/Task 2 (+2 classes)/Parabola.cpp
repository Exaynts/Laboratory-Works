#include "Parabola.h"
#include <iostream>

using namespace std;

void Parabola::Set_Coeff(){
	cout << "Enter a = "; a = Input_float();
	cout << "Enter b = "; b = Input_float();
	cout << "Enter c = "; c = Input_float();
	cin.get();	
}

Parabola f_parabola;