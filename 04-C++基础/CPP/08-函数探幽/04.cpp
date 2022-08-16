#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main( )
{ 
	int a = 1;
	int b = 2;

	swap(a,b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}

void swap(int &a, int &b)
{ 
	int temp = a;
	a = b;
	b = temp;
}
