#include <iostream>

using namespace std;

int main( )
{ 
	int size = 10;

	char xing[size];
	char ming[size];

	cin.get(xing, size);
	cout << xing << endl;
	cin.get( );
	cin.get(ming, size);
	cout << ming << endl;

	return 0;
}
