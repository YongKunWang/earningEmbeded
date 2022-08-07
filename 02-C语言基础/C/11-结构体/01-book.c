#include <stdio.h>

struct book { 
	char title[100];
	char author[100];
	float value;
};


int main(int argc,  char *argv[])
{
	struct book library;
	gets(library.title);
	gets(library.author);
	scanf("%f",&library.value);

	puts(library.title);
	puts(library.author);
	printf("%f\n",library.value);



	return 0;
}
