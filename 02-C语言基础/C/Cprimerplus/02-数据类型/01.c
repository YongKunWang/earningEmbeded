#include <stdio.h>

#define MAX 10



int main(void) 
{
	float num;

	const int a = 10;

	printf("Please input number:");
	scanf("%f",&num);
	printf("input number is %5.2f\n",num);

	printf("sizeof(int) = %ld\n",sizeof(int));
	
	printf("sizeof(MAX) = %ld\t  sizeof(a) = %ld\t sizeo(num) = %ld\n", sizeof(MAX),sizeof(a), sizeof(num));

	return 0;
}
