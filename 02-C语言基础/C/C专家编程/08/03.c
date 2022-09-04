#include <stdio.h>
#include <stdlib.h>

int main( )
{ 
	char c1 = 44;
	char c2 = 65;

	float f1;
	float f2 = 34.0;

	double d = 2.0;

	c1 = c1 + c2;

	f1 = f2 * d;

	printf("%ld, %c\n", sizeof(c1), c1); // 1

	printf("%ld, %lf\n", sizeof(f1), f1);

	return 0;
}
