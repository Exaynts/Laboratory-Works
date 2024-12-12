# Laboratory-works
#include <iostream>
#include <vector>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	cout << "Длина стека = ";
	int len;
	cin >> len;
	// Ввод значений стека
	vector <int> List(len);
	for (int i = 0; i < len; i++) {
		cout << "List[" << i << "] = ";
		cin >> List[i];
		cout << endl;
	}
	// Вычисление среднего арифметического четных элементов стека
	int sum = 0;
	int i = 0;
	while (i < len) {
		sum += List[i];
		i += 2;
	}
	float average = float(sum) / (len / 2 + len % 2);
	cout << "Среднее чётных элементов равно " << average << endl;
	// Вывод стека
	for (int i = 0; i < len; i++) {
		cout << "List[" << i << "] = " << List[i] << endl;
	}
	return 0;
}
