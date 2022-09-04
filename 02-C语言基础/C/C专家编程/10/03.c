#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50

int main( )
{ 
	char *str1[SIZE], *str2[SIZE];

	char stri[] = "Your message here";

	for(int i = 0; i < SIZE; i++)
		str1[i] = &stri[0]; // 字符串赋值，只赋首地址
		// get到了！
	
	for(int i = 0; i < SIZE; i++)
	{
		str2[i] = malloc(strlen(stri) + 1);
		strcpy(str2[i], stri);
	}

	printf("%s\n%s\n%c\n", str1[0], str2[0], stri[0]);
	return 0;
}
