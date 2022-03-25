#include <iostream>
#include "Money.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	Money a, b, c, d, e;

	double x;

	a.Read();
	b.Read();

	c = Vid(a, b);

	cout << "Вiднiмання суми: ";
	c.Display();
	cout << endl;

	cout << "Дрiб = "; cin >> x; cout << endl;
	d = Mul(a, x);
	cout << "результат множення: ";
	d.Display();
	cout << endl;

	Com(a, b);

	system("pause");
	return 0;
}