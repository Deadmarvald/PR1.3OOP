#pragma once

#include <string>
#include <sstream>

using namespace std;

class Money
{
private:
	long hrn;
	unsigned int kop;

public:
	long GetHrn() { return hrn; }
	unsigned int GetKop() { return kop; }
	void SetHrn(long value);
	void SetKop(unsigned int value);

	bool Init(long l, unsigned int r);
	void Display();
	void Read();
	string toString();

	friend Money Vid(Money l, Money r);
	friend Money Mul(Money l, double r);
	friend Money Com(Money l, Money r);
};