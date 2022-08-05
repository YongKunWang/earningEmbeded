#include <stdio.h>

int main( )
{ 
	int a[10 ];
	for(int i = 0; i < 10; i++)
		printf( "%d\t",a[ i]);
	putchar( '\n');
	
	int months[ ] = {1,2,3,4,5,6,7,8,9,10,11,12};
	for( int i = 0; i < sizeof( months) / sizeof(months[0]); i ++)
		printf("%d : %d \n", i, months[i]);
	return 0;
}
