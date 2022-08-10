#include <iostream>
#include <climits>

using namespace std;

int main( )
{
	short sam = SHRT_MAX;

	cout << "sam max is "  << sam <<endl;
	
	sam += 1;
	cout << "sam += 1 is "  << sam <<endl;
	
	unsigned short sue = sam;
	cout << "sue max is "  << sue <<endl;
	
	sue = 0;

	sue -= 1;

	cout << "sue -= 1  is "  << sue <<endl;

	return 0;
}
