#include "Function.h"
#include <vector>

//����� ��� ������������� �������� y = a[0] + a[1]*x + ... + a[n]*x^n
class Polynomial : public Function
{
protected:
	std::string name;
	//double a, b, c;
	int n;
	vector <double> coeffs;
public:
	Polynomial() : name("a[0] + ... + a[n]*x^n") {}
	const std::string& Get_Name() const { return name; }
	void Set_Coeff();
	double Get_Val() const;
};

extern Polynomial f_polynomial;
