#include <stdio.h>

#define FUNC(X, Y) 1 / ( ( 1 / (X) ) + ( 1 / (Y)) )

int main( int argc, char *argv[ ])
{ 

	double x = 0, y = 0;

	while(scanf("%lf %lf",&x,&y) == 2)
	{ 
		printf("%lf" ,FUNC(x,y));
	}

	return 0;
}
