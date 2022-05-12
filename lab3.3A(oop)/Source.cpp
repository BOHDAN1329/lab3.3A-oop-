//Sourse.cpp
#include <iostream>
#include "BaseBitString.h"
#include "OpenBitString.h"
#include "ClosedBitString.h"

using namespace std;

int main()
{

	cout << "Open inheritance" << endl;
	OpenBitString b1, b2 ,b3(b1),b4(b2);
	cout << "first object" << endl;
	cin >> b1;
	cout << "second object" << endl;
	cin >> b2;
	cout << endl;

	cout << "first object" << endl;
	cout << b1;
	cout << "second object" << endl;
	cout << b2;
	cout << endl;

	cout << "first object" << endl;
	cout << b3;
	cout << "second object" << endl;
	cout << b4;
	cout << endl;

	OpenBitString XoR1,XoR2;

	XoR1 = (b1 ^ b2);
	XoR2 = (b3 ^ b4);


	cout << "first object ^ second object" << endl;
	cout << XoR1;
	cout << " first copied object ^  second copied object" << endl;
	cout << XoR2;
	

	cout << "Closed inheritance" << endl;
	ClosedBitString c1, c2;
	cout << "first object" << endl;
	cin >> c1;
	cout << "second object" << endl;
	cin >> c2;
	cout << endl;

	cout << "first object" << endl;
	cout << c1;
	cout << "second object" << endl;
	cout << c2;
	cout << endl;

	ClosedBitString  CXoR ;

	CXoR = (c1 ^ c2);

	cout << "first object ^ second object" << endl;
	cout << CXoR;

}