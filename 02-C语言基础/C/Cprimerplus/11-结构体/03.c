// 结构体初始化操作
#include <stdio.h>


typedef struct book { 
	char title[100];
	double value;
} BOOK;

int main(int argc, char *argv[])
{ 
	BOOK books[3];
	int index = 0;
	
	while(index <  2 && gets(books[index].title) != NULL && books[index].title[0] != '\0')
	{ 
		scanf("%lf",&books[index].value); // scanf会把回车留在缓冲区中...
		while(getchar() != '\n') // 需要搞掉回车！
			continue;
		index ++;
	}
	books[2] = books[1]; // 结构体可以直接赋值
	for(int index = 0; index <  3; index ++)
	{ 
		puts(books[index].title);
		printf("%lf\n", books[index].value);
	}


	return 0;
}
