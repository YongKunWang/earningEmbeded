#include <stdio.h>
#include <string.h>
int main()
{
	char name[30];
	int num = 100;
	scanf("%s",name);


	printf("%s\n",name);

	printf("sizeof(name) = %ld\n", sizeof(name)); // 30
	printf("strlen(name) = %ld\n", strlen(name)); // 6
	
	printf("**%10d*\n",num);
	printf("**%-10d*\n",num);


	return 0;
}
