#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// Исключение для пустого дерева
class EmptyTreeException : public runtime_error {
public:
    EmptyTreeException() : runtime_error("В дереве нет ни одного элемента") {}
};

// Исключение для элемента не найден
class ElementNotFoundException : public runtime_error {
public:
    ElementNotFoundException() : runtime_error("Элемент не удалось найти") {}
};
