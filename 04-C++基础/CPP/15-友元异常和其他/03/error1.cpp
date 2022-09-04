#include <iostream>
#include <cstdlib>

double hmean(double a, double b);

int main()
{ 
	using std::cout;
	using std::endl;
	using std::cin;

	double x, y, z;
	cout << "Enter two numers: ";
	while(cin >> x >> y)
	{ 
		z = hmean(x,y);
		cout << "hmean mean of " << x << " and " << y
			<< " is " << z << endl;
		cout << "Enter next set of numbers <q to quit>: ";
	}
	cout << "Byes!\n";
	return 0;
}

double hmean(double a, double b)
{ 
	std::cout << a << " " << b << std::endl;
	if(a == -b)
	{ 
		std::cout << "untenable arguments to hmean()\n";
		std::abort();
	}
	return 2.0 * a * b / (a + b);
}
