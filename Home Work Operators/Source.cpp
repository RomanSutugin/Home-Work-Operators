#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "Russian");
	int a = 2, b = 3;
	cout << a << "\t" << b << endl;
	a = b;
	b = a - 1;
	cout << a << "\t" << b << endl;

}
