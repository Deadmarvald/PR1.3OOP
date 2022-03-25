#include "Money.h"

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void Money::SetHrn(long value)
{
	hrn = value;
}

void Money::SetKop(unsigned int value)
{
	kop = value;
}

bool Money::Init(long a, unsigned int b)
{
	if (a >= 0 && b >= 0)
	{
		hrn = a;
		kop = b;
		return true;
	}
	else
	{
		hrn = 0;
		kop = 0;
		return false;
	}
}

void Money::Display()
{
	cout << endl;
	cout << hrn << "," << kop << endl;
}

void Money::Read()
{
		long a;
		unsigned int b;

	do {
		cout << "Enter a value:" << endl;
		cout << "UAH = "; cin >> a; cout << endl;
		cout << "Coin = "; cin >> b; cout << endl;
	} while (!Init(a, b));
}

string Money::toString()
{
	stringstream sout;

	sout << hrn << "," << kop << endl;

	return sout.str();
}

Money Vid(Money l, Money r)
{
	Money t;
	
	t.hrn = l.hrn - r.hrn + floor((l.kop - r.kop) / 100);

	t.kop = (l.kop - r.kop) % 100;

	return t;
}

Money Mul(Money l, double r)
{
	Money t;

	if (r != 0)
	{
		t.hrn = l.hrn * r;
		t.kop = l.kop * r;
	}

	return t;
}

Money Com(Money l, Money r)
{
	Money t, u;

	t.hrn = l.hrn + floor(l.kop / 100);
	u.hrn = r.hrn + floor(r.kop / 100);

	if (t.hrn > u.hrn)
		cout << t.hrn << "," << l.kop << " > " << u.hrn << "," << r.kop << endl;
	if (t.hrn < u.hrn)
		cout << t.hrn << "," << l.kop << " < " << u.hrn << "," << r.kop << endl;
	if (t.hrn == u.hrn)
		cout << t.hrn << "," << l.kop << " = " << u.hrn << "," << r.kop << endl;

	return t;
}