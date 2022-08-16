#include <iostream>

using namespace std;

int main()
{ 
	int rats = 101;

	int & ratss = rats;

	cout << rats << endl;
	cout << ratss << endl;

	cout << &rats << endl;
	cout << &ratss << endl;

	int bouns = 50;

	ratss = bouns;


	cout << rats << endl;
	cout << ratss << endl;
	
	cout << &bouns << endl;
	cout << &rats << endl;
	cout << &ratss << endl;

	return 0;
}
