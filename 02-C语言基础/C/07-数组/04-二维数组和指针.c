#include <stdio.h>

void init(int *, int);

int main( )
{ 
	int a[10];
	
	init(a,sizeof(a) / sizeof(a[0]));

	for(int i = 0; i < 10; i++)
	{ 
		printf("%d\n",a[i]);
	}


	return 0;
}

void init(int * a, int size)
{ 
	for(int i = 0; i < size; i++)
	{ 
		a[i] = i;
	}
}
