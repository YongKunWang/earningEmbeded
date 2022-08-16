#include <stdio.h>

int main( )
{ 
	char ** a;

	const char **b;

	b = a;

	a = b;

	
	const int limit = 10;

	const int * limittp = &limit;
	
	int i = 27;

	limittp = &i;

	return 0;
}
