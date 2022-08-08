#include <stdio.h>

int main()
{
	char *m = "Hello World!";
	
//	m[1] = 'h';
	
	char m1[] = "Hello World!";

	m1[1] = 'h';
	puts(m);
	puts(m1);

//	putchar('\n');


	return 0;
}
