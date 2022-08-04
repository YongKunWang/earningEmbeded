#include <stdio.h>
#include <math.h>
long long bintodec(long long num);

int main()
{
	long long  num;

	printf("Please input one number:");

	scanf("%lld",&num);
	

	printf("2to10 is %lld to %lld\n", num, bintodec(num));

	return 0;
}

long long bintodec(long long  num)
{
	int remainder = 0;
	int result = 0;
	int i = 0;

	while(num != 0)
	{
		
		remainder = num % 10;
		num /= 10;
		
		result += remainder * pow(2,i);
		i += 1;
	}

	return result;

}
