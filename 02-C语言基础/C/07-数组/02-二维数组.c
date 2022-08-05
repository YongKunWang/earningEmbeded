#include <stdio.h>

int main( )
{ 
	int a[2][2] = { 
		{ 11, 12 },
		{ 21, 22 }
	};
	
	printf("sizeof(a) = %ld\n",sizeof(a));
	printf("sizeof(a[0]) = %ld\n",sizeof(a[0]));



	for(int i = 0; i <  2; i ++)
	{ 
		for(int j = 0; j < 2; j ++)
			printf("%d\t",a[i][j]);
		putchar('\n');
	}
	return 0;
}
