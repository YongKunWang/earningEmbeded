#include <stdio.h>

char foo(int a)
{ 
	char ch = 'A';
	return ch;
}

int main( )
{ 
	char ch = 0;
	
	int a = 10;

	ch = foo(a);
	
	printf("%c\n",foo(a));
	
	printf("Hello World \
Ha Ha\n");
	
	printf("Hello "
	"World!\n");


	return 0;
}
