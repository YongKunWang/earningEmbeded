#ifndef _SQLIST_H
#define _SQLIST_H

#include <stdio.h>

#define MAXSIZE 20

typedef int ElemType;

typedef int Status;
#define OK	  1
#define ERROR 0
#define TRUE  1
#define FALSE 0

typedef struct { 
	ElemType data[MAXSIZE];
	int length;
} SqList;

// 初始化
Status initList(SqList *l);
// 判断表是否为空
Status emptyList(SqList l);
// 清空表
Status cleanList(SqList *l);
// 返回表个数
int lengthList(SqList l);
// 获得表中第i个位置的元素 从0开始
Status getElemList(SqList l, int i, ElemType *e);
// 返回对应元素位置
int locateList(SqList l, ElemType e);
// 在i个位置之前插入新的数据e
Status insertList(SqList *l, int index, ElemType e);
// 删除第i个元素
Status deleteList(SqList *l, int index, ElemType *e);
// 元素输出
void showList(SqList l);

















#endif /* _SQLIST_H */
