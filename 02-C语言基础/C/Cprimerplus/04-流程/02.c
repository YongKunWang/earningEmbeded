#include <stdio.h>

int main()
{
	int score = 0;
	scanf("%d",&score);
	
	switch (score)
	{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
			break;
		default:
			printf("default\n");
			break;
	}


	return 0;
}
