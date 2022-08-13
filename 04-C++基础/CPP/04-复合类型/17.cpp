#include <iostream>

using namespace std;

int main( )
{ 
	int night = 1001;
	
	int *pt = new int; 
	*pt = 1001;

	cout << "night value = " << night << " : location " << &night << endl;
	cout << "int value = " << *pt << " : location " << pt << endl;

	cout << sizeof(pt) << " " << sizeof(*pt) << endl;



	return 0;
}
