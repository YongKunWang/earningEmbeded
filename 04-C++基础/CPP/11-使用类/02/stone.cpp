#include <iostream>

using std::cout;
using std::endl;

#include "stonewt.h"

int main( )
{ 
	Stonewt in = 275;
	Stonewt wo(285.7);
	Stonewt ta(21,8);

	in.show_stn();
	wo.show_stn();
	ta.show_stn();

	in = 276.8;
	ta = 325;

	in.show_stn();
	ta.show_stn();
	
	Stonewt poping(9,2.8);
	double a = poping;

	cout << a << endl;


	return 0;
}
