#include <stdio.h>
#include <string.h>
int main( )
{ 
	char arr[10];

	char * ptr;

	ptr = arr;

	strcpy(ptr, "Hello");

	printf("%s %s\n", ptr, arr);
	printf("%ld %ld\n", sizeof(ptr), sizeof(arr));

}
