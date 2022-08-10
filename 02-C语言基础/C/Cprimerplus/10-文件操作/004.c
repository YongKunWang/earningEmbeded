// 反序显示文件
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	FILE * fp = NULL;

	int last = 0;

	if(argc != 2)
	{ 
		printf("Usage: %s filename", argv[0]);
		exit(-1);
	}

	if((fp = fopen(argv[1], "r")) == NULL)
	{ 
		printf("Cannot open %s.\n", argv[1]);
		exit(-2);
	}
	
	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);
	
	for(long count = 1L; count <= last; count ++)
	{ 
		fseek(fp, -count, SEEK_END);
		putchar((char)getc(fp));
	}
	
	putchar('\n');
	return 0;
}
