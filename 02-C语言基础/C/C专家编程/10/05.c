#include <stdio.h>
#include <malloc.h>
#include <setjmp.h>

jmp_buf error;

int (*paf())[20]
{ 
	int (*pear)[20];
	pear = calloc(20, sizeof(int));
	if(!pear)
		longjmp(error, 1);
	return pear;
}


int main( )
{ 
	int (*result)[20]; // 指针，指向20个元素的指针
	result = paf();
	(*result)[3] = 12;
	printf("%d\n", (*result)[3]);

	return 0;
}
