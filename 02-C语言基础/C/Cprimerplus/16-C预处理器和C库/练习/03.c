#include <stdio.h>

#define MAVIS 1

#ifdef MAVIS

#define TWO 2

#else 

#define TWO 3

#endif

#ifndef _A_H
#define _A_H

#endif



int main(int argc, char *argv[])
{ 


	printf("TWO IS %d\n",TWO);

	return 0;
}
