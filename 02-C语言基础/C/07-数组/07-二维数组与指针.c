#include <stdio.h>

int main( )
{ 
	int a[4][2] = { 
		{2, 4},
		{6, 8},
		{1, 3},
		{5, 7}
	};

	printf("a = %p, a + 1 = %p\n", a, a + 1);
	printf("a[0] = %p, a[0] + 1 = %p\n", a[0], a[0] + 1);

	return 0;
}
