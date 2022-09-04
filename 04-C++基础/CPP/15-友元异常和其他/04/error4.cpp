#include <iostream>
#include "exc.h"

int main(void)
{ 
	using std::cout;
	using std::cin;
	using std::endl;

	double x, y, z;

	cout << "Enter two numbers: ";
	while(cin >> x >> y)
	{ 
		try { 
			z = hmean(x,y)
			cout <<  x << " " << y << " " << z << endl;
		} catch(bad_heam &bg)
		{ 
			bg.msg();
			cout << "Try again";
			continue;
		} catch(bad_gmean & hg)
		{ 
			cout << hg.mesg();
			break;
		}
	}

	return 0;
}
