#include <iostream>

using namespace std;

int main()
{
	cout.setf(ios_base::fixed, ios_base::floatfield);

	float tub = 10.0 / 3.0;

	float million = 1.0e6;

	cout << tub << endl;

	cout << tub * million << endl;
	
	double mint = 10.0 / 3.0;
	
	cout << mint << endl;

	cout << mint * million << endl;

	float a = 2.34E+22f;
	float b = a + 1.0f;

	cout << a << '\t' << b << endl;
	cout << b - a  << endl;

	return 0;
}
