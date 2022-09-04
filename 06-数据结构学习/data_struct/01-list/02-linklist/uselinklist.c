#include <stdio.h>
#include "linklist.h"

int main()
{ 
	LinkList l;

	printf("---init LinkList---\n");
	initLinkList(&l);
	
	printf("---empty LinkList---\n");
	printf("%d\n",emptyLinkList(l));

	printf("---头插法---\n");
	headCreateLinkList(&l, 5);

	printf("---头插法显示元素---\n");
	showLinkList(l);

	printf("---头插法---\n");
	headCreateLinkList(&l, 5);
	printf("---头插法显示元素---\n");
	showLinkList(l);
	
	printf("---清空表---\n");
	clearLinkList(&l);

	printf("---获得元素个数---\n");
	printf("%d\n", lengthLinkList(l));


	printf("---删除头插法删除的元素---\n");
	ElemType e = 0;
	for(int i = 1; i <= 5; i++)
	{ 
		deleteLinkList(&l,1,&e); // 这个地方是1，明确原因！
		printf("删除的第 %d 个元素为：%d\n",i, e);
	}

	printf("---尾插法---\n");
	tailCreateLinkList(&l, 5);

	printf("---尾插法显示元素---\n");
	showLinkList(l);
	
	printf("---获得元素个数---\n");
	printf("%d\n", lengthLinkList(l));
	
	printf("---获得位置元素---\n");
	int index = 2;
	getElemLinkList(l, index, &e);
	printf("第 %d 位置处的元素为: %d\n", index, e);

	printf("---插入元素---\n");
	insertLinkList(&l, 1, 20);
	
	printf("---插入显示元素---\n");
	showLinkList(l);
	
	printf("---获得元素位置---\n");
	printf("%d\n", locateElemLinkList(l, 20));

	printf("---删除尾插法删除的元素---\n");
	e = 0;
	for(int i = 2; i <= 5; i++)
	{ 
		deleteLinkList(&l,2,&e); // 这个地方是1，明确原因！
		printf("删除的第 %d 个元素为：%d\n",i, e);
	}
	return 0;
}
