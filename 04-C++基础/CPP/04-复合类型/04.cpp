#include <iostream>

using namespace std;

int main( )
{ 
	int size = 10;
	
	int num = 0;

	char xing[size];
	char ming[size];

	cin.get(xing, size);
	cout << xing << endl;
	
	cin >> num;
	cin.get( );
	cout << num << endl;

	cin.get(ming, size);
	cout << ming << endl;

	return 0;
}
