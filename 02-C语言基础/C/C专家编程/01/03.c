#include <stdio.h>

// char short -> int -> unsigned -> long -> double  <- float


int array[ ] = {1,2,3,4,5};

#define SIZE (sizeof(array) / sizeof(array[0]))

int main()
{ 
	
	if(-1 < SIZE)
		printf("<\n");
	else
		printf(">\n");

	return 0;
}

//int 和unsigned int不要一块用！

