#include <iostream>
#include <cstring>

using namespace std;

int main( )
{ 
	char animal[20] = "bear";
	const char * bird = "wren";
	
	char *ps;

	cout << animal << endl;
	cout << bird << endl;

	ps = new char[strlen(animal) + 1];

	strcpy(ps, animal);

	cout << ps << endl;

	delete [ ] ps;

	return 0;
}
