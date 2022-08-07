#include <stdio.h>

int main()
{ 
	char name[10];

	char *name1;
	
	gets(name);

	puts(name);

	fgets(name, 10, stdin);

	puts(name);

	return 0;
}
