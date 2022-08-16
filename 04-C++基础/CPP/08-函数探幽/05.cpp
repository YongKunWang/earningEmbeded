#include <iostream>

using namespace std;

double cube(double a);

double refcube(double & a);

int main( )
{ 
	double x = 3.0;

	cout << cube(x) << endl;

	cout << refcube(x) << endl;

	cout << x << endl;

	return 0;
}

double cube(double a)
{ 
	a *= a * a;
	return a;
}
double refcube(double & a)
{ 
	a *= a * a;

	return a;
}
