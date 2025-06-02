// Parabola.h
#include "Function.h"
#include <string>

// Класс для представления функции y = a * x^2 + b * x + c
class Parabola : public Function {
public:
    Parabola() : name("a * x^2 + b * x + c") {}
    const std::string& GetName() const override { return name; }
    void Calculate() override;
protected:
    std::string name; // мат. обозначение функции
    double a, b, c;
};

extern Parabola f_parabola;