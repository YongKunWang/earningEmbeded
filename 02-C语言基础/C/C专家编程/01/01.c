#include <stdio.h>

void foo(const char **p)
{
	printf("%s\n", p[0]);	
}

int main(int argc, char **argv)
{ 

	foo(argv);


	return 0;
}
