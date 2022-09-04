#include <stdio.h>

int main( )
{ 
	int c;

	system("stty raw");
	// 终端驱动处于普通的一次一行的模式

	c = getchar( );
	//终端处于一次一字符模式

	system("stty cooked");
	// 终端驱动又回到一次一行的模式
	return 0;
}
