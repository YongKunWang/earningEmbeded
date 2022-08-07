#include <stdio.h>

int main()
{ 
	char name[10];

	fgets(name, 10, stdin);
	fputs(name, stdout);


	return 0;
}
