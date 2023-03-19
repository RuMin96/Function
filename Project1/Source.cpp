#include <iostream>
using namespace std;

int a;

int Factor(int a)
{
	int f = 1;
	for (int i = 1; i <= a; i++)
	{
		f *= i;
	}
	return f;
}



void main()
{
	setlocale(LC_ALL, "");
	int a;
	int i;
	cout << "¬ведите число факториала: "; cin >> a;

	cout << a << "! = " << Factor(a) << endl;
}
