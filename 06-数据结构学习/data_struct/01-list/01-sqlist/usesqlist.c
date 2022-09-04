#include <stdio.h>
#include "sqlist.h"

int main()
{ 
	SqList l;

	printf("---init List ---\n");
	initList(&l);
	
	printf("---empty List---\n");
	int emptyStatus = emptyList(l);
	printf("%d\n",emptyStatus);
	
	printf("---insert List---\n");
	insertList(&l, 1, 1);
	insertList(&l, 1, 2);
	insertList(&l, 1, 3);
	insertList(&l, 1, 4);
	insertList(&l, 1, 5);
	insertList(&l, 6, 0);
	
	printf("---show List---\n");
	showList(l);
	
	printf("---length List---\n");
	printf("%d\n", lengthList(l));

	printf("---获得位置元素---\n");
	ElemType e = 0;
	getElemList(l, 2, &e);
	printf("%d\n", e);

	printf("---元素位置---\n");
	printf("%d\n", locateList(l, 0));
	
	printf("---删除元素---\n");
	deleteList(&l, 6, &e);
	printf("%d\n", e);

	printf("---show List---\n");
	showList(l);

	printf("---length List---\n");
	printf("%d\n", lengthList(l));

	return 0;
}
