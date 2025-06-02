#include "Line.h"
#include <iostream>

using namespace std;

void Line::Set_Coeff() {
	cout << "Enter a: "; a = Input_float();;
	cout << "Enter b: "; b = Input_float();;
}

//Глобальный объект
Line f_line;