#include <stdio.h>
#include <string.h>

char * myStrcat(char *str1, const char * str2);
char * myStrcat2(char *str1, const char * str2);
int main( )
{ 
	char hello[20] = "Hello";
	char *world = " World!";

	//char *re = strcat(hello, world);
	char *re = myStrcat2(hello, world);

	puts(hello);
//	puts(re);

	return 0;
}

char * myStrcat(char * str1, const char * str2)
{ 
	while(*str1)
		str1 ++;
//		putchar(*str1);
//	fputs(str2, stdout);

	while(*str2)
		*str1 ++ = *str2 ++;
//		putchar(*str1);
	*str1 = '\0';

	return str1;

}

char * myStrcat2(char * str1, const char * str2)
{ 
	int len = strlen(str1);
	int i = 0;
	for(i = 0; str2[i] !='\0' ; i ++)
		str1[len + i] = str2[i];
	str1[len + i] = '\0';

	return str1;

}
