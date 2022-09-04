#include <stdio.h>
#include "linklist.h"
#include <time.h>
#include <stdlib.h>

// 初始化
Status initLinkList(LinkList * l)
{ 
	*l = (LinkList)malloc(sizeof(Node));
	if(!(*l))
		return ERROR;
	(*l)->next = NULL;

	return OK;
}
// 是否为空表
Status emptyLinkList(LinkList l)
{ 
	return l->next == NULL ?  OK : ERROR;
}
// 重置为空表
Status clearLinkList(LinkList *l)
{ 
	LinkList p, q;

	p = (*l)->next;
	while(p)
	{ 
		q = p->next;
		free(p);
		p = q;
	}

	(*l)->next = NULL;
	return OK;
}
// 获得元素个数
int lengthLinkList(LinkList l)
{ 
	int i = 0;
	LinkList p, q;
	p = l->next;
	while(p)
	{ 
		i++;
		p = p->next;
	}
	return i;
}
// 获得位置元素
Status getElemLinkList(LinkList l, int i, ElemType *e)
{ 
	int j = 1; // 知道这为啥==1
	LinkList p = l->next; // 指向头结点
	while(p && j < i)
	{ 
		j ++;
		p = p->next;
	}
	if(!p || j > i)
		return ERROR;
	*e = p->data;
	return OK;
}
// 获得元素位置
int locateElemLinkList(LinkList l, ElemType e)
{ 
	int j = 0;
	LinkList p = l->next;
	while(p)
	{ 
		j ++;
		if(p->data == e)
			return j;
		p = p->next;
	}
	return 0;
}
// 插入元素
Status insertLinkList(LinkList *l, int i, ElemType e)
{ 
	int j = 1; // == 1
	LinkList p = (*l); // 这个地方！！
	while(p && j < i)
	{
		j ++;
		p = p->next;
	}
	if(!p || j > i)
		return ERROR;
	LinkList s = (LinkList)malloc(sizeof(Node));
	s->data = e;
	s->next = p->next;
	p->next = s;
	
	return OK;
}
// 删除元素,指向前面的一个元素！所以循环有改变！
Status deleteLinkList(LinkList *l, int i, ElemType *e)
{ 
	int j = 1; // 这个地方一定要==1！！！
	// 第一次进while循环
	LinkList p = (*l);
	LinkList q = NULL;
	while(p->next && j < i)
	{ 
		j++;
		p = p->next;
	}
	if(!(p->next) || j > i)
		return ERROR;
	q = p->next;
	p->next = q->next;
	*e = q->data;
	free(q);

	return OK;
}
// 输出元素
void showLinkList(LinkList l)
{ 
	LinkList p = l->next;
	while(p)
	{ 
		printf("%d\t", p->data);
		p = p->next;
	}
	putchar('\n');
}
// 头插法
void headCreateLinkList(LinkList *l, int n)
{ 
	LinkList p;
	(*l) = (LinkList)malloc(sizeof(Node));
	(*l)->next = NULL;

	srand(time(0));
	
	for(int i = 0; i < n; i++)
	{ 
		p = (Node *)malloc(sizeof(Node));
		p->data = rand() % 100+1;
		p->next = (*l)->next;
		(*l)->next = p;
	}
}
// 尾插法
void tailCreateLinkList(LinkList *l, int n)
{ 
	LinkList p, q;
	
	(*l) = (LinkList)malloc(sizeof(Node));
	(*l)->next = NULL;
	q = *l;

	srand(time(0));
	
	for(int i = 0; i < n; i ++)
	{
		p = (Node *)malloc(sizeof(Node));
		p->data = rand() % 100 + 1;
		q->next = p;
		q = p;
	}	
	q->next = NULL;
}



