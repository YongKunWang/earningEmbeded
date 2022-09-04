#include <iostream>
using std::cout;
using std::endl;

#include "strngbad.h"

void callme1(StringBad &);
void callme2(StringBad);

int main( )
{ 
	{ 
		cout << "Starting an inner block.\n";
		StringBad headline1("Celery Stalks at Midnight");
		StringBad headline2("Lettuce Prey");
		StringBad sports(" Spinach Leaves Bowl for Dollars");
		cout << headline1 << endl;
		cout << headline2 << endl;
		cout << sports << endl;

		callme1(headline1);
		cout << headline1 << endl;

		callme2(headline2);
		cout << headline2 << endl;

		StringBad asilor = sports;
		cout << asilor << endl;

		StringBad knot;
		knot = headline1;
		cout << knot << endl;
	}
	cout << "End of main.\n";
}

void callme1(StringBad & rsb)
{ 
	cout << "callme1" << endl;
	cout << rsb << endl;
}
void callme2(StringBad  rsb)
{ 
	cout << "callme2" << endl;
	cout << rsb << endl;
}
