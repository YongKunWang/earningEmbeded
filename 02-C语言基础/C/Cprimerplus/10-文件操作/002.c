#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	FILE * src = NULL;
	FILE * dest = NULL;
	
	int ch = 0;

	int count = 0;
	
	if(argc != 3)
	{ 
		printf("Usage: %s src dest\n", argv[0]);
		exit(-1);
	}

	if((src = fopen(argv[1], "r")) == NULL)
	{ 
		printf("Cannot open %s.\n",argv[1]);
		exit(-2);
	}
	if((dest = fopen(argv[2], "w")) == NULL)
	{ 
		printf("Cannot open %s.\n",argv[2]);
		exit(-2);
	}
	
	while((ch = getc(src)) != EOF)
	{ 
		putc(ch, dest);
		count ++;
	}
	
	if(fclose(src) != 0 && fclose(dest) != 0)
	{ 
		printf("Close file %s and %s failed!", argv[1], argv[2]);
		exit(-3);
	}

	printf("%s have %d characters.\n", argv[1], count);

	return 0;
}
