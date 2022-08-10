#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{ 
	int a[10] = { [4] = 4};

	for(int i = 0; i <  10; i ++)
		printf("%d\t",a[i]);
	putchar('\n');
	int *ptr = (int *)malloc(10 * sizeof(int));
	memcpy(ptr, a, 10 * sizeof(int));

	for(int i = 0; i <  10; i ++)
		printf("%d\t",ptr[i]);
	putchar('\n');

	return 0;
}
