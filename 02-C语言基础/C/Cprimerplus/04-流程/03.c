#include <stdio.h>

int main()
{
	printf("[1-100],所有7的倍数&带7的全部略过。\n");

	int num = 1;

	for (; num <= 100; num ++) 
	{
		if ((num -7 )%10 != 0)
		{
			if(num/10 != 7)
			{
				if(num%7 != 0)
					printf("%4d",num);
			}
		}
	}

	putchar('\n');

	return 0;
}

