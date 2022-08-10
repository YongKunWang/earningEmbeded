#include <stdio.h>

int sum(int a, int b)
{ 
	return a + b;
}

int main(int argc, char *argv[ ])
{ 
	int (* pf)(int, int);
	
	int a = 10;
	int b = 20;
	
	pf = sum;

	printf("%d\n",pf(a,b));

	return 0;
}
