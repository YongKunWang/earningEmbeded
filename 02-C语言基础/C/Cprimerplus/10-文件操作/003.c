#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	FILE * src = NULL;
	FILE * dest = NULL;
	
	char words[100];

	int ch = 0;

	int count = 0;
	
	if(argc != 3)
	{ 
		fprintf(stdout, "Usage: %s src dest\n", argv[0]);
		exit(-1);
	}

	if((src = fopen(argv[1], "a+")) == NULL)
	{ 
		fprintf(stdout, "Cannot open %s.\n",argv[1]);
		exit(-2);
	}
	if((dest = fopen(argv[2], "w")) == NULL)
	{ 
		fprintf(stdout, "Cannot open %s.\n",argv[2]);
		exit(-2);
	}
	// 写入数据
	while(fgets(words, 100, stdin) != NULL && words[0] != '\n')
	{
		fputs(words, src);
	}
	rewind(src);

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
