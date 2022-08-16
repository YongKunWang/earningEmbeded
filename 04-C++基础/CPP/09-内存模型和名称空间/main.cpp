#include <iostream>
#include "coordin.h"

int main( )
{ 	
	using namespace std;
	rect place;
	polar pplace;

	while(cin >> place.x >> place.y)
	{ 
		pplace = rect_to_polar(place);
		show_polar(pplace);

		cout << "Next two Number:\n";
	}

	return 0;
}
