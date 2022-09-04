#include <stdio.h>

int fibon1(int n)
{ 
	if(n == 0 || n == 1)
	{
		return n;
	}
	return fibon1(n - 1) + fibon1(n - 2);
}


int main(void)
{ 
	printf("%d\n",fibon1(4));
	return 0;
}


