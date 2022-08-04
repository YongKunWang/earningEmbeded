#include <stdio.h>
#include <math.h>

int main()
{
	int num;
	int ge = 0;
	int shi = 0;
	int bai = 0;

	for(num = 100;num < 1000; num ++)
	{
		ge = num % 10;
		shi = num / 10 % 10;
		bai = num / 100;
		
//		printf("%d\t %d\t %d\n", ge, shi, bai);
		if(num == pow(ge,3) + pow(shi,3) + pow(bai,3))
		{
			printf("%5d",num);
		}
	}

	printf("\n");
	return 0;
}
