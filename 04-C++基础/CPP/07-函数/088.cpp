#include <iostream>

using namespace std;

int main( )
{ 
	int age = 39;

	const int *pt = &age;

	cout << *pt << endl;

	*pt += 1;

	cout << *pt << endl;

	return 0;
}
