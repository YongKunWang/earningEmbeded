#include <iostream>
#include <string>

using namespace std;

int main( )
{ 
	string word = "?ate";

	for(char ch = 'a'; word != "mate"; ch ++)
	{ 
		cout << word << endl;

		word[0] = ch;
	}


	return 0;
}
