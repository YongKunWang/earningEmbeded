#include <stdio.h>
#include <math.h>


typedef struct ploar_v { 
	double chang;
	double angle;
} Polar_V;

typedef struct rect_v { 
	double x;
	double y;
} Rect_V;


Rect_V polar_to_rect(Polar_V polar);

int main(int argc, char *argv[ ])
{ 
	Polar_V polar;
	Rect_V rect;

	printf("Please input two number:");
	while(scanf("%lf%lf", &polar.chang, &polar.angle) == 2)
	{ 
		rect = polar_to_rect(polar);
		printf("%lf,%lf",rect.x, rect.y);
	}
	return 0;
}

Rect_V polar_to_rect(Polar_V polar)
{ 
	Rect_V rect;

	rect.x = polar.chang * cos(polar.angle);
	rect.y = polar.angle * sin(polar.angle);
	
	return rect;
}
