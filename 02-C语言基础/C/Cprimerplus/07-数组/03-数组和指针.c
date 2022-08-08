#include <stdio.h>

int main( )
{ 
	int a[10] = {1,2,3,4,5,6,7,8,9,0};
	float f[10];
	int * pti;


	printf("a[2] = %d\n",a[2]);
	printf("a[2] = %d\n",*(a+2));
	
	return 0;
}
