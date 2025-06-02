#include "BinString.h"
#include <clocale>
#include "Factory.h"
#include <iostream>
#include "Menu.h"
#include "SymbString.h"

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251>NULL");
    Menu::Main_Menu();

    return 0;
}