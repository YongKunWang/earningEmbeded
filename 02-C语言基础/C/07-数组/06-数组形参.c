#include <stdio.h>

int sum(const int a[ ], int size);

int main( )
{ 
	
	int a[ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

	printf("the sum is %d\n", sum(a, sizeof(a) / sizeof(a[0])));

	return 0;
}

int sum(const int a[ ], int size)
{
	int result = 0;

	for(int i = 0; i < size; i++ )
		result += a[i];
	
	return result;
}
