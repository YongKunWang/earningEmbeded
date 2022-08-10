#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	FILE * fp = NULL;
	
	int ch = 0;

	int count = 0;
	
	if(argc != 2)
	{ 
		printf("Usage: %s filename", argv[0]);
		exit(-1);
	}
	
	if((fp = fopen(argv[1], "r")) == NULL)
	{ 
		printf("Cannot open %s.\n",argv[1]);
		exit(-2);
	}
	
	while((ch = getc(fp)) != EOF)
	{ 
		putc(ch, stdout);
		count ++;
	}

	fclose(fp);

	printf("%s have %d characters.\n", argv[1], count);



	return 0;
}
