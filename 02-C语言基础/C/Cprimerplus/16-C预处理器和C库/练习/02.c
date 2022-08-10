#include <stdio.h>

#define SLEN 32

struct name_st { 
	
	char fname[SLEN];
	char lname[SLEN];
};

typedef struct name_st names;

void get_names(names * name);

void show_names(const names * name);


int main(int argc, char *argv)
{ 
	names wyk;

	get_names(&wyk);
	show_names(&wyk);



	return 0;
}


void get_names(names * name)
{ 
	printf("姓：");
	fgets(name->fname, SLEN, stdin);
	// 过滤掉回车
	int i = 0;
	while(name->fname[i] != '\n' && name->fname[i] != '\0')
		i ++;
	if(name->fname[i] == '\n')
		name->fname[i] = '\0';
	else 
		while(getchar() != '\n')
			continue;
	
	printf("名：");
	fgets(name->lname, SLEN, stdin);
	// 过滤掉回车
	i = 0;
	while(name->lname[i] != '\n' && name->lname[i] != '\0')
		i ++;
	if(name->lname[i] == '\n')
		name->lname[i] = '\0';
	else 
		while(getchar() != '\n')
			continue;
}

void show_names(const names * name)
{ 
	printf("fname = %s\nlname = %s\n", name->fname, name->lname);
}
