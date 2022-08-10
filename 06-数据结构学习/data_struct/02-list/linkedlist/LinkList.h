#ifndef _LINKLIST_H

#define _LINKLIST_H

#include <iostream>
#include <cstdlib>

typedef int ElemType;

#define Status int

#define OK 		0
#define ERROR  	-1
#define TRUE 	0
#define FALSE	-1

typedef struct Node { 
	ElemType elem;
	struct Node *next;
} Node, *LinkList;

Status InitLinkList(LinkList &L)
{ 
	L = (Node *) malloc(sizeof(Node));
	if(L == NULL)
		return ERROR;
	L -> next = NULL;
	return OK;
}
Status InsertLinkList(LinkList &L, int index, ElemType e)
{ 
	LinkList p = L, s;
	int j = 0;

	while(p->next && j < i-1)
	{ 
		p = p->next;
		j ++;
	}
	if(j != i-1)
		return ERROR;
	if((s =(Node *)malloc(sizeof(Node)) == NULL)
		return ERROR;
	s->data = e;
	s->next = p->next;
	p->next = s;

	return OK;
}


#endif


