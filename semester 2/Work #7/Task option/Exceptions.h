#pragma once
#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

// ���������� ��� ������� ������
class EmptyTreeException : public runtime_error {
public:
    EmptyTreeException() : runtime_error("� ������ ��� �� ������ ��������") {}
};

// ���������� ��� �������� �� ������
class ElementNotFoundException : public runtime_error {
public:
    ElementNotFoundException() : runtime_error("������� �� ������� �����") {}
};
