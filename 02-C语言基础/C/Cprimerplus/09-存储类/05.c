#include <stdio.h>

void report_count( );

void accumulate(int k);

int count = 0;

int main( )
{ 
	int value;

	register int i;

	printf("Please input a position integer(0 to quit). \n");

	while(scanf("%d",&value) == 1 && value > 0)
	{ 
		++count;
		for(i = value; i >= 0; i --)
		{	
			accumulate(i);
		}
		printf("Please input a position integer(0 to quit). \n");
	}

	report_count( );
	return 0;
}

void report_count( )
{ 
	printf("Loop executed %d times\n",count);
}
