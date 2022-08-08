#include <stdio.h>


void swap(int *a, int *b );
int main()
{ 
	int a = 1; 
	int b = 2;
	
	printf("%p,%p\n",&a,&b );
	
	printf("sizeof( int *) = %ld\n ", sizeof( int *) );

	swap(&a, &b);

	printf("a = %d\nb = %d\n ",a, b);
	
	return 0;
}

void swap(int *a, int *b )
{ 
	int temp = *a;
	*a = *b;
	*b = temp;
}
