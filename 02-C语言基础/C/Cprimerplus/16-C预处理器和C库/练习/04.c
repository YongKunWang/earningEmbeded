#include <stdio.h>

inline int sum(int a, int b);
int sum(int a, int b)
{ 
	return a + b;
}


int main(int argc, char *argv[])
{ 
	int a = 0;

	int b = 20;

	int c = sum(a, b);

	printf("%d\n",c);


	return 0;
}
