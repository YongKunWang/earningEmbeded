#include <iostream>

const int ArSize = 80;

char * left(const char * str, int n = 1);

int main( )
{ 
	using namespace std;

	char sample[ArSize];

	cin.get(sample, ArSize);

	char *ps = left(sample, 4);

	cout << ps << endl;


	return 0;
}

char * left(const char * str, int n)
{ 
	if(n < 0)
		n = 0;
	char *p = new char[n+1];

	int i;

	for(i = 0; i < n && str[i]; i++)
		p[i] = str[i];
	while(i <= n)
	{ 
		p[i++] = '\0';
	}
	
	return p;

}

