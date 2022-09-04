#include <iostream>
#include "stock00.h"

int main( )
{
	Stock s;
	s.acquire("NanoSmart", 20, 12.50);
	s.show();

	s.buy(10, 200);
	s.show();

	s.sell(1, 200);
	s.show();

	std:: cout <<"--------------" << std::endl;

	Stock s1 = Stock("a", 10, 1.0);
	Stock s2;
	s2 = s1;

	s.topval(s1).show();

	return 0;
}

