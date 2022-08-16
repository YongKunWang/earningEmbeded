#include <iostream>

using namespace std;


int main( )
{ 
	int rats = 101;

	int & ratss = rats;

	cout << rats << endl;

	cout << ratss << endl;

	ratss ++;
	
	cout << rats << endl;

	cout << ratss << endl;

	
	cout << &rats << endl;

	cout << &ratss << endl;

	return 0;
}
