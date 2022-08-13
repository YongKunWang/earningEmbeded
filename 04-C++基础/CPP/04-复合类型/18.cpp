#include <iostream>

using namespace std;

int main( )
{ 
	int * pt = new int [10];
	
	for(int i = 0; i < 10; i++)
		pt[i] = i;
	
	cout << pt[2] << endl;
	
	pt += 1;
	cout << pt[2] << endl;
	
	pt -= 1;
	
	delete [] pt;
	return 0;
}
