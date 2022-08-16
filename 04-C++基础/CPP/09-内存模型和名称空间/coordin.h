#ifndef _COORFIN_H
#define _COORFIN_H

struct polar { 
	double distance;
	double angle;
};

struct rect { 
	double x;
	double y;
};

polar rect_to_polar(rect xypos);

void show_polar(polar dapos);

#endif
