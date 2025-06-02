#include "Man.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cstring>
#pragma warning(disable : 4996)

//using namespace std;

Man::Man(int lName) {
	std::cout << "Constructor is working" << std::endl;
	pName = new char[lName + 1];
}
Man::~Man() {
	std::cout << "Destructor is working" << std::endl;
	delete[] pName;
}
void Man::SetName(const char* fromBuf) {
	strncpy(pName, fromBuf, l_name);
	pName[l_name] = 0;
}
void Man::SetBirthYear(const char* fromBuf) {	
	birth_year = atoi(fromBuf + l_name);	
}
void Man::SetPay(const char* fromBuf) {
	pay = atof(fromBuf + l_name + l_year);	
}

bool Man::CompareName(const char* name) const {
	if((strstr(pName, name)) && (pName[strlen(name)] == ' '))
		return true;
	else
		return false;
}
void Man::Print() const {
	std::cout << pName << birth_year << ' ' << pay << std::endl;
}
