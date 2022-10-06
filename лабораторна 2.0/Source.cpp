// Lab_02.cpp
// < Дашавська Марія-Анна >
// Лабораторна робота № 2.0.
// Лінійні програми.
// Варіант 6

#include <iostream>
#include <math.h>


using namespace std;


int main() {
	double x;
	double z1;
	double z2;
	cout << "x = ? " << endl; cin >> x;


	z1 = cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);

	z2 = 4 * cos(x / 2) * cos(5 * x / 2) * cos(4 * x);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;


}