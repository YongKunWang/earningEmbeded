#include <stdio.h>

int main(void) 
{
	//测试char类型数值溢出的问题
	char ch = 127 + 2;

	printf("%d\n",ch);

	float num = 1.22;

	printf("%d\n",(int)num);

	return 0;
}
