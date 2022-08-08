#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	FILE * src = NULL;
	FILE * dest = NULL;
	
	int ch = 0;
	
	if(argc != 3)
	{ 
		printf("Usage: %s dest src", argv[0]);
		exit(1);
	}
	
	if((src = fopen(argv[2],"r")) == NULL)
	{ 
		fprintf(stderr, "Cant open src %s.\n", argv[2]);
		exit(2);
	}
	if((dest = fopen(argv[1],"w")) == NULL)
	{ 
		fprintf(stderr, "Cant open dest %s.\n", argv[1]);
		exit(2);
	}

	while((ch = getc(src)) != EOF)
	{ 
		putc(ch, dest);
	}

	if(fclose(src) != 0 || fclose(dest) != 0)
		fprintf(stderr, " Error in Closing files.\n");

	return 0;
}
