#ifndef _LINKLIST_H
#define _LINKLIST_H

#include <stdio.h>

typedef int ElemType;

typedef int Status;

#define OK    1
#define ERROR 0
#define TRUE  1
#define FALSE 0

#define MAXSIZE 20 /*初始分配量*/

typedef struct Node { 
	ElemType data;
	struct Node *next;
}Node, *LinkList;

// 初始化
Status initLinkList(LinkList * l);
// 是否为空表
Status emptyLinkList(LinkList l);
// 重置为空表
Status clearLinkList(LinkList *l);
// 获得元素个数
int lengthLinkList(LinkList l);
// 获得位置元素
Status getElemLinkList(LinkList l, int i, ElemType *e);
// 获得元素位置
int locateElemLinkList(LinkList l, ElemType e);
// 插入元素
Status insertLinkList(LinkList *l, int i, ElemType e);
// 删除元素
Status deleteLinkList(LinkList *l, int i, ElemType *e);
// 输出元素
void showLinkList(LinkList l);
// 头插法
void headCreateLinkList(LinkList *l, int n);
// 尾插法
void tailCreateLinkList(LinkList *l, int n);
#endif /* _LINKLIST_H */
