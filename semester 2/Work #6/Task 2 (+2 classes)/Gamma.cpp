#include "Gamma.h"
#include <iostream>
#include <math.h>
using namespace std;

double Gamma::Get_Val() const {
	// int x
	if (x == int(x)) {
		if (x >= 0) {
			double ans = 1;
			for (int i = 1; i <= x; i++) {
				ans *= i;
			}
			return ans;
		}
		else {
			cout << "Answer is not defined! (Answer y = 0 is not correct)\n";
			return 0;
		}
	}
	// not int x
	else {
		cout << "The calsulation accuracy (for example ~1 000 000)\n";
		long int acc = Input_natural();
		double dt = 1.0 / acc;
		double ans = 0;
		// 2^(x+1)/x* integral from 0 to 1 [-ln(t)^(x-1)]dt
		for (long int i = 1; i < acc; i++) { // Для избехания деления на ноль не высчитываем крайние прямоугольнички
			ans += i*dt * pow(-log(i*dt), x+1)*dt;
		}
		ans *= pow(2, x + 2) / (x+1);
		return ans;
	}
}

Gamma f_gamma;