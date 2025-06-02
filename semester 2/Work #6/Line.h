// Line.h
#include "Function.h"
#include <string>

// Класс для представления функции y = a * x + b
class Line : public Function {
public:
    Line() : name("a * x + b") {}
    const std::string& GetName() const override { return name; }
    void Calculate() override;
protected:
    std::string name; // мат. обозначение функции
    double a;
    double b;
};

extern Line f_line;