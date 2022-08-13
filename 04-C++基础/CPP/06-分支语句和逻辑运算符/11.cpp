#include <iostream>

enum color {red, yellow, blue};

int main( )
{ 
	using namespace std;

	int code;

	cin >> code;

	while(code >= red && code <= blue)
	{ 
		switch(code)
		{ 
			case red: cout << "red" << endl; break;
			case yellow: cout << "yellow" << endl; break;
			case blue: cout << "blue" << endl; break;
			default: cout << "default" << endl;
		}

		cin >> code;

	}

	cout << "Byes\n";

	return 0;

}
