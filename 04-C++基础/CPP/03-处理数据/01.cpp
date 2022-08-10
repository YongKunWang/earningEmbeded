#include <iostream>
#include <climits>

using namespace std;

int main( )
{ 
	int a = 3;

	int b(3);

	int c{3};

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	
	cout << " n_int is " << sizeof(int) << " bytes" << endl;
	cout << " n_int MAX is " << n_int  << endl;
	
	cout << " n_short is " << sizeof n_short << " bytes" << endl;
	cout << " n_short MAX is " << n_short  << endl;
	
	cout << " n_long is " << sizeof(long) << " bytes" << endl;
	cout << " n_long MAX is " << n_long  << endl;


	return 0;
}
