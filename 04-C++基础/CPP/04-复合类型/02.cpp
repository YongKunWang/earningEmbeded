#include <iostream>

using namespace std;

int main( )
{ 
	int size = 10;

	char xing[size];
	char ming[size];

	cin.getline(xing, size);
	cout << xing << endl;

	cin.getline(ming, size);
	cout << ming << endl;

	return 0;
}
