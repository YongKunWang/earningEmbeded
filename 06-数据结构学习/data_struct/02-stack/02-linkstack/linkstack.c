#include <stdio.h>
#include "linkstack.h"
#include <stdlib.h>

// 初始化
Status initStack(LinkStack * s)
{ 
//	s->top = (LinkStackPtr)malloc(sizeof(StackNode));
//	if(!(s->top))
//		return ERROR;
	s->top = NULL;
	s->count = 0;

	return OK;

}
// 空栈
Status clearStack(LinkStack * s)
{ 
	LinkStackPtr p, q;
	p = s->top;
	while(p)
	{ 
		q = p->next;
		free(p);
		p = q;
	}
	s->count = 0;
	return OK;
}
// 是否为空栈
Status emptyStack(LinkStack s)
{ 
	return s.count == 0 ? TRUE : FALSE;
}
// 栈长度
int lengthStack(LinkStack s)
{ 
	return s.count;
}
// 栈顶元素
Status getTopStack(LinkStack s, ElemType *e)
{ 
	if(s.top == NULL)
		return ERROR;
	else
		*e = s.top->data;
	return OK;
}
// 入栈
Status pushStack(LinkStack *s, ElemType e)
{ 
	LinkStackPtr ptr= (LinkStackPtr)malloc(sizeof(StackNode));
	if(!ptr)
		return ERROR;
	ptr->data = e;
	ptr->next = s->top;
	s->top = ptr;
	s->count ++;
	return OK;
}
// 出栈
Status popStack(LinkStack *s, ElemType *e)
{ 
	if(emptyStack(*s) == TRUE)
		return ERROR;
	LinkStackPtr p = s->top;
	LinkStackPtr q = p->next;
	s->top = q;
	*e = p->data;
	free(p);
	s->count --;
	return OK;
}
// 显示
void show(LinkStack s)
{ 
	LinkStackPtr p = s.top;
	while(p)
	{ 
		printf("%d\n", p->data);
		p = p->next;
	}
}
