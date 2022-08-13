#include <iostream>
#include <string>

using namespace std;

int main( )
{ 
	string word[10];

	cin >> word;
	
	cout << word.size( ) << endl;

	for(int i = word.size( ) -1; i >= 0; i --)
	{ 
		cout << word[i] << endl;
	}

	char *ptr = word;

	return 0;
}
