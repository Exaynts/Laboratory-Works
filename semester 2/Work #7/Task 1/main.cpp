// main.cpp
#include <iostream>
#include <string>
#include "SparseArr.h"

int main() {
    // Тестирование с double
    SparseArr<double> sal(2000000);
    sal[127649] = 1.1;
    sal[38225] = 1.2;
    sal[2004056] = 1.3;  // Ошибка индекса
    sal[1999999] = 1.4;
    sal.Show("sal");
    std::cout << "sal[38225] = " << sal[38225] << std::endl;
    sal[38225] = sal[93];
    std::cout << "After the modification of sal:\n";
    sal.Show("sal");

    // Тестирование с std::string
    SparseArr<std::string> sa2(1000);
    sa2[333] = "Nick";
    sa2[222] = "Peter";
    sa2[444] = "Ann";
    sa2.Show("sa2");
    sa2[222] = sa2[555];
    sa2.Show("sa2");
    return 0;
}
