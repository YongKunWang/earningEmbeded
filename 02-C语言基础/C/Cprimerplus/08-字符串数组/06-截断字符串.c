#include <stdio.h>
#include <string.h>

int main( )
{ 
	char name[] = "Hello World!";
	char *name1 = "Hello World!";
	
	printf("strlen(name) = %ld\n",strlen(name));
	printf("strlen(name1) = %ld\n",strlen(name1));
	*(name + 10) = '\0';
//	*(name1 + 10) = '\0';
	printf("strlen(name) = %ld\n",strlen(name));
	printf("strlen(name1) = %ld\n",strlen(name1));
	
	return 0;
}

