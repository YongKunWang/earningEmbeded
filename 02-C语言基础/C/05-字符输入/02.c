#include <stdio.h>

int main()
{
	int ch;
	int num = 1;
	printf("----menu-----\n");

	while((ch = getchar()) != 'y')
	{
		printf("well, then is it %d.\n",num ++);

		while(getchar() != '\n')
			continue;
	}
	printf("I know you choice!\n");


	return 0;
}
