#ifndef _SQSTACK_H
#define _SQSTACK_H

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

typedef int Status;
typedef int ElemType;

#define OK	  1
#define ERROR 0
#define TRUE  0
#define FALSE 0
#define MAXSIZE 20
typedef struct stack { 
	ElemType data[MAXSIZE];
	int top;
} SqStack;

// 初始化
Status initSqStack(SqStack *stack);
// 设置为空栈
Status clearSqStack(SqStack *stack);
// 是否为空栈
Status emptySqStack(SqStack stack);
// 栈长度
int lengthSqStack(SqStack stack);
// 得到栈顶元素
Status getElemSqStack(SqStack stack, ElemType *e);
// 入栈
Status pushSqStack(SqStack *stack, ElemType e);
// 出栈
Status popSqStack(SqStack *stack, ElemType *e);
// 显示
void show(SqStack stack);

#endif  /*_SQSTACK_H */
