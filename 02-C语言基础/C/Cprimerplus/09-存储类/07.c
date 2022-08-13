#include <stdio.h>

static unsigned long int next = 1;

int rand0(void)
{ 
	next = next * 1103515245 + 1234;
	return (unsigned int)(next / 65536 )% 32768;
}

int main()
{ 
	int count;

	for(count = 0; count < 5; count ++)
		printf("%hd\n", rand0());
	return 0;
}
