//BaseBitString.cpp
#include "BaseBitString.h"

BaseBitString::operator string() const
{
	stringstream sout;
	sout << "a = " << a << endl << "b = " << b << endl;
	return sout.str();
}

BaseBitString& BaseBitString::operator=(const BaseBitString& obj)
{
	a = obj.a;
	b = obj.b;
	return *this;
}

BaseBitString::BaseBitString()
{
	a = 1;
	b = 1;
}

BaseBitString::BaseBitString(long first, long second)
{
	a = first;
	b = second;
}

BaseBitString::BaseBitString(BaseBitString& obj)
{
	*this = obj;
}

ostream& operator<<(ostream& out, BaseBitString& obj)
{
	cout << string(obj);
	return out;
}

istream& operator>>(istream& in, BaseBitString& obj)
{
	cout << "a = "; in >> obj.a;
	cout << "b = "; in >> obj.b;
	cout << endl;
	return in;
}
