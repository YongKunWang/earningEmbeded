#include <stdio.h>
#include "linkstack.h"

int main(void)
{ 
	LinkStack stack;
	printf("---初始化---\n");
	initStack(&stack);

	printf("---入栈---\n");
	for(int i = 0; i < 10; i++)
		pushStack(&stack, i);
	
	printf("---显示---\n");
	show(stack);

	printf("---出栈---\n");
	ElemType e = 0;
	for(int i = 1; i <= 5; i ++)
	{
		popStack(&stack, &e);
		printf("出第%d个元素:%d\n", i, e);
	}
	
	printf("---栈长度---\n");
	printf("%d\n", lengthStack(stack));

	printf("---栈顶元素---\n");
	getTopStack(stack, &e);
	printf("%d\n", e);

	return 0;
}
