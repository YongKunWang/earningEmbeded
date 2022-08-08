#include <stdio.h>

long long dectobin(int num);

int main()
{
	int num;

	printf("Please input one number:");

	scanf("%d",&num);
	

	printf("10to2 is %d to %lld\n", num, dectobin(num));

	return 0;
}

long long dectobin(int num)
{
	int remainder = 0;
	int result = 0;
	int i = 1;

	while(num != 0)
	{
		
		remainder = num % 2;
		num /= 2;
		
		result += remainder * i;
		i *= 10;
	}

	return result;

}
