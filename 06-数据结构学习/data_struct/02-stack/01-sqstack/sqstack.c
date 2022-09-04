#include "sqstack.h"

// 初始化
Status initSqStack(SqStack *stack)
{	
	stack->top = -1;
	return OK;
}

// 设置为空栈
Status clearSqStack(SqStack *stack)
{ 
	stack->top = -1;
	return OK;
}
// 是否为空栈
Status emptySqStack(SqStack stack)
{ 
	return stack.top == -1 ? OK : ERROR;
}
// 栈长度
int lengthSqStack(SqStack stack)
{ 
	return stack.top + 1;
}
// 得到栈顶元素
Status getElemSqStack(SqStack stack, ElemType *e)
{ 
	if(stack.top == -1)
		return ERROR;
	else 
		*e = stack.data[stack.top];
	return OK;
}
// 入栈
Status pushSqStack(SqStack *stack, ElemType e)
{ 
	if(stack->top == MAXSIZE -1)
		return ERROR;
	stack->top ++;
	stack->data[stack->top] = e;
//	printf("%d\n", e);
}
// 出栈
Status popSqStack(SqStack *stack, ElemType *e)
{ 
	if(stack->top == -1)
		return ERROR;
	*e = stack->data[stack->top];
	stack->top --;
	return OK;
}
// 显示
void show(SqStack stack)
{ 
	for(int i = 0; i <= stack.top; i++)
		printf("%d\t", stack.data[i]);
	putchar('\n');
}
