#include <stdio.h>

int main( )
{ 
	char a[4][6];
	char *p[4];
	for(int i = 0; i <4; i++)
		p[i] = malloc(6);
	a[1][2] = 'a';
	p[1][2] = 'a';
	
	printf("%#x %#x %#x %c\n",a, a[1], a[1]+2, *(a[1]+2) );
	printf("%#x %#x %#x %c\n",p, p[1], p[1]+2, p[1][2]);


	for(int i = 0; i < 4; i++)
		free(p[i]);
	return 0;
}
