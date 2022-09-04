#include <stdio.h>
#include "sqstack.h"

int main(void)
{ 
	SqStack stack;

	printf("---init SqStack---\n");
	initSqStack(&stack);

	printf("---入栈---\n");
	for(int i = 0; i < 10; i++)
		pushSqStack(&stack, i);
	printf("---显示---\n");
	show(stack);
	
	printf("---空栈---\n");
	printf("%d\n", emptySqStack(stack));

	printf("---栈长度---\n");
	printf("%d\n", lengthSqStack(stack));

	printf("---栈顶元素---\n");
	ElemType e = 0;
	getElemSqStack(stack, &e);
	printf("%d\n",e);

	printf("---出栈---\n");
	popSqStack(&stack, &e);
	printf("出栈元素为：%d\n", e);
	return 0;
}
