#include <iostream>

using namespace std;

void n_chars(char, int);

int main()
{ 
	int times;

	char ch;

	cin >> ch;

	while( ch != 'q')
	{ 
		cin >> times;
		n_chars(ch, times);

		cin >> ch;
	}

	return 0;
}

void n_chars(char c, int n)
{ 
	while(n -- > 0)
	{ 
		cout << c;
	}

	
}

