#include <stdio.h>

void fun1(int arr[2][3][5])
{ 
	printf("%d\n", arr[0][0][0]);
}

void fun2(int arr[][3][5])
{ 
	printf("%d\n", arr[0][0][0]);
}

void fun3(int (*arr)[3][5])
{ 
	printf("%d\n", arr[0][0][0]);
}

int main( )
{ 
	int arr[2][3][5] = {{{1,2,3,4,5}}};
	int (*p)[3][5] = arr;
	int (*q)[2][3][5] = &arr;

	fun1(arr);
	fun2(arr);
	fun3(arr);

	fun1(p);
	fun2(p);
	fun3(p);
	
	fun1(*q);
	fun2(*q);
	fun3(*q);
	return 0;
}
