#include <stdio.h>

void myputs(const char * ptr);

int main()
{ 
	char name[10];

	char *ptr = fgets(name, 10, stdin);
	puts(ptr);
	myputs(ptr);



	return 0;
}

void myputs(const char * ptr)
{ 
	char c = 0;
	while(*ptr!='\0')
	{ 
		putchar(*ptr);
		ptr ++;
	}
}
