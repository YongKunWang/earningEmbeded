#include <stdio.h>

int main( )
{
	int a[] = {100, 200, 300, 400};
	int *p = a;

	printf("*p++ = %d\n", *p++);
	printf("*p = %d\n", *p);
	
	printf("*++p = %d\n", *++p);
	printf("*p = %d\n", *p);
	return 0;
}
