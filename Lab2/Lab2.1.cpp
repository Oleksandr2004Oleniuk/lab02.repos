// Lab_02.cpp
// < Оленюк Олександр >
// Лабораторна робота № 2.1.
// Лінійні програми.
// Варіант 0.8
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double z1;
	double z2;

	cout << "x= "; cin >> x;
	cout << "y = "; cin >> y;

	z1 = pow(cos(x), 4) + sin(y) * sin(y) + (sin(2 * x) * sin(2 * x)) / 4 - 1;
	//z2 = sin(x + y) * sin(y - x);

	cout << endl;
	cout << "z1 = " << z1 << endl;
//	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}