#include <stdio.h>

int main()
{
	float standWeight = 55.54321;
	
	float myWeight;

	printf("Please input one weight:");

	scanf("%f",&myWeight);

	if (myWeight == standWeight) 
	{
		printf("Stand Weight!\n");
	} else {
		printf("Unstand Weight!\n");
	}


	return 0;
}
