#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct name { 
	char * fname;
	char * lname;
};

int main(int argc, char *argv[])
{ 
	struct name aaa;
	struct name * www;
	char temp[100];

	www = &aaa;

	gets(temp);
	www->fname = (char *)malloc(strlen(temp) + 1);
	strcpy(www->fname, temp);
	
	gets(temp);
	www->lname = (char *)malloc(strlen(temp) + 1);
	strcpy(www->lname, temp);
	
	printf("%s %s", www->fname, www->lname);

	return 0;
}
