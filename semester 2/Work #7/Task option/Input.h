#pragma once
#include <iostream>
using namespace std;
class Input {
public:
	static int Input_natural_int() {
		int input;
		while (!(cin >> input) or (cin.peek() != '\n') or (input <= 0)) {
			cin.clear();
			while (cin.get() != '\n');
			cout << "¬ведите натуральное число!" << endl;
		}
		cin.ignore();
		return input;
	}
};
