#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);

void local( );

int main( )
{ 
	cout << "Global warming is " << warming << " degree.\n"; // 0.3
	update(0.1);
	cout << "Global warming is " << warming << " degree.\n"; // 0.4
	local( );
	cout << "Global warming is " << warming << " degree.\n"; // 0.4
	return 0;
}
