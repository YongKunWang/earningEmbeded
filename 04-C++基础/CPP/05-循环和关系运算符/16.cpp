#include <iostream>

int main( )
{
	using namespace std;

	char ch;

	int count = 0;
	cout << "starting ..." << endl;
	cin >> ch;
		
	while(ch != '#')
	{ 
		cout << ch;
		++ count;

		cin >> ch;
	}

	cout << endl <<  count << endl;

	return 0;
}
