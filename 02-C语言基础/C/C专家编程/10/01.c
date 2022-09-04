#include <stdio.h>

int main( )
{ 
	char pea[4][6];
	pea[1][2] = 'a';
	pea[1][0] = 'c';

	printf("%c\n", *(*(pea+1) + 2));
	return 0;
}
