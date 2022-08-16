#include <iostream>

using namespace std;

char * buildstr(char ch, int n);

int main( )
{ 
	int times; 

	char ch;
	
	cin >> ch;
	cin.get( );
	cin >> times;

	char *ps = buildstr(ch, times);
	delete [] ps;
	cout << ps << endl;


	return 0;
}

char * buildstr(char ch, int n)
{ 
	char *ps = new char[n + 1];

	ps[n] = '\0';
	
	while(n -- >0)
	{ 
		ps[n] = ch;
	}

	return ps;
}
