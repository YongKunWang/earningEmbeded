#include <stdio.h>

int main()
{ 
	char *ch = "Hello World!";

	char *cy;

	cy = ch;

	printf("ch = %s\t &ch = %p\t ch = %p\n", ch, &ch, ch);
	printf("cy = %s\t &cy = %p\t cy = %p\n", cy, &cy, cy);
	
	return 0;
}
