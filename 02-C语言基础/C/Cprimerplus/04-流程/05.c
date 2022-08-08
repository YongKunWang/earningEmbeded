#include <stdio.h>

int main()
{
	for (int i = 1; i <= 9; i ++)
	{
		for(int j = 1; j <= i; j ++) 
			printf("%3d * %3d = %3d\t", j, i, j * i);
		putchar('\n');
	}

	return 0;
}
