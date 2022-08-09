#ifndef _SQLIST_H

#define _SQLIST_H

#include <cstdlib>			// malloc free
#include <iostream>

#define SQLIST_SIZE 100   	// 顺序表初始分配容量
#define SQLIST_INCREAM 10	// 增补空间量

typedef int ElemType;

typedef struct { 
	ElemType *elem;			// 空间基地址
	int length;				// 线性表当前长度
	int listSize;			// 当前分配的数组容量
	int increamSize;		// 增补空间量
} SqList;

typedef int Status;

#define OK 		 0
#define ERROR 	-1
#define TRUE 	 0
#define FALSE	-1

/**
	创建线性表
**/
Status InitSqList(SqList &L, int listSize=SQLIST_SIZE, int increamSize=SQLIST_INCREAM)
{ 
	L.elem = (ElemType *)malloc(listSize * sizeof(ElemType));
	if(!L.elem)
		return ERROR;
	
	L.length = 0;
	L.listSize = listSize;
	L.increamSize = increamSize;

	return OK;
}

/**
	销毁线性表
**/
void DestorySqList(SqList &L)
{ 
	free(L.elem);
	L.elem = NULL; // free完毕以后，指针的值并不会变化，指针指向的是垃圾值，需要自行设置为NULL
	L.length = 0;
	L.listSize = 0;
	L.increamSize = 0;
	
}

/**
	获得线性表长度
**/
int GetSqListLength(SqList L)
{ 
	return L.length;
}

/**
	判断线性表是否为空
**/
Status isEmptySqList(SqList L)
{ 
	return L.length == 0 ? TRUE : FALSE;
}

/**
	在某个位置插入数据
**/
Status InsertSqList(SqList &L, int i, ElemType e)
{ 
	if(i < 0 || i > L.length)
	{ 
		std::cout << "插入位置错误" << std::endl;
		return ERROR;
	}
	
	if(L.length >= L.listSize)
	{ 
		L.elem = (ElemType *)realloc(L.elem, (L.listSize + L.increamSize) * sizeof(ElemType));
		if(!L.elem)
			return ERROR;
		L.listSize += L.increamSize;
	}
	
	for(int j = L.length; j > i;
	j --)
		L.elem[j] = L.elem[j - 1];

	L.elem[i] = e;
	L.length ++;

	return OK;
}

/**
	删除第i个位置的元素 (从 0 开始... )
**/
Status DeleteSqList(SqList &L, int i, ElemType &e)
{
	if(i < 0 || i > L.length)
	{ 
		std::cout << "元素索引输入错误" << std::endl;
		return ERROR;
	}

	e = L.elem[i];

	for(int j = i; j < L.length; j ++)
	{ 
		L.elem[j] = L.elem[j + 1];
	}
	L.length --;

	return OK;
}

/**
	定位元素
**/
int LocateElem(SqList L, ElemType e)
{ 
	int index = 0;
	for(int i = 0; i < L.length; i ++)
		if(L.elem[i] == e)
			return i;
	return ERROR;
}

/**
	
**/



/**
	展示线性表数据
**/
void ShowSqList(SqList L)
{ 
	if(L.length == 0)
	{ 
		std::cout << "未插入数据" << std::endl;
		exit(-1);
	}
	for(int i = 0; i < L.length; i ++)
	{ 
		std::cout << L.elem[i] << '\t';
	}
	std::cout << std::endl;
}









#endif

