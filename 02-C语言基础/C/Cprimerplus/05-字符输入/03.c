#include <stdio.h>

int main()
{
	int num = 0;
/*
	scanf("%d",&num);

	while(num >= 0)
	{
		printf("Done! %d\n",num);
		num = -1;
		scanf("%d",&num);
		printf("%d\n",num);
	}

*/
	while(scanf("%d",&num) == 1 && num >= 0)
	{
		printf("Done\n");
	}

	return 0;
}


