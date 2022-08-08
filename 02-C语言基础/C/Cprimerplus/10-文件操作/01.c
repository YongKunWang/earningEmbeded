#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[ ])
{ 
	int ch;

	FILE * file = NULL;

	long count = 0;

	if(argc != 2)
	{ 
		printf("Usage: %s filename\n",argv[0]);
		exit(1);
	}
	
	if((file = fopen(argv[1],"r")) == NULL)
	{ 
		printf("Can't open %s\n",argv[1]);
		exit(1);
	}

	while((ch = getc(file)) != EOF)
	{ 
		putc(ch, stdout);
		count ++;
		printf("c = %ld", count);
	}

	fclose(file);

	printf("File %s has %ld characters\n", argv[1], count);

	return 0;
}
