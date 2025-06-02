// Exp.h
#include "Function.h"
#include <string>

// Класс для представления функции y = e^x
class Exp : public Function {
public:
    Exp() : name("e^x") {}
    const std::string& GetName() const override { return name; }
    void Calculate() override;
protected:
    std::string name; // мат. обозначение функции
};

extern Exp f_exp;