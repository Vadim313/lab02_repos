// Lab_02.cpp
// Галаган Вадим
// Лабораторна робота No 2.
// Лінійні програми.
// Варіант 2
#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	double Pi = 4 * atan(1.);
	double z1;
	//double z2;
	double a;
	cout << "a = "; cin >> a;

	z1 = cos(a) + sin(a) + cos(a) * 3 + sin(a) * 3;

	//z2 = 2 * sqrt(2) * cos(a) * sin(Pi / 4 + 2 * a);

	cout << z1 << endl;
	//cout << z2 << endl;

	cin.get();
	return 0;
}
