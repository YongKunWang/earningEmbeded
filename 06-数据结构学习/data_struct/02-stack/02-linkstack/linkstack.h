#ifndef _LINKSTACK_H
#define _LINKSTACK_H

typedef int Status;
typedef int ElemType;

#define OK    1
#define ERROR 0
#define TRUE  1
#define FALSE 0

typedef struct StackNode { 
	ElemType data;
	struct StackNode *next;
} StackNode, * LinkStackPtr;

typedef struct { 
	LinkStackPtr top;
	int count;
} LinkStack;

// 初始化
Status initStack(LinkStack * s);
// 空栈
Status clearStack(LinkStack * s);
// 是否为空栈
Status emptyStack(LinkStack s);
// 栈长度
int lengthStack(LinkStack s);
// 栈顶元素
Status getTopStack(LinkStack s, ElemType *e);
// 入栈
Status pushStack(LinkStack *s, ElemType e);
// 出栈
Status popStack(LinkStack *s, ElemType *e);
// 显示
void show( s);


#endif /* _LINKSTACK_H */
