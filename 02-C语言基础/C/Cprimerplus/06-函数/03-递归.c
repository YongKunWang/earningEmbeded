#include <stdio.h>


int digui(int num);

int main()
{
	int num = 0;
	printf("输入一个数，并且开始计算递归：\n");

	scanf("%d",&num);
	
	printf("%d\n",digui(num));


	return 0;
}

int digui(int num) 
{
	if (num > 1)
	{
		printf("%d * %d!\n",num , (num - 1));
		return num * digui(num -1);
	}
	else
	{
		printf("%d\n",num);
		return 1;
	}
	
}
