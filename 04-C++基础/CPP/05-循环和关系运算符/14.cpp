#include <iostream>
#include <ctime>

using namespace std;

int main( )
{ 
	float secs;

	cin >> secs;

	clock_t delay = secs * CLOCKS_PER_SEC;
	
	cout << "starting \a\n";

	clock_t start = clock( );

	while(clock() - start < delay)
		;
	cout << "Done" << '\a' << endl;

	return 0;
	
	return 0;
}
