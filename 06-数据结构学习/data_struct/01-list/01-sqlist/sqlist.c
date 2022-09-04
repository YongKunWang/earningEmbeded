#include <stdio.h>
#include "sqlist.h"

// 初始化
Status initList(SqList *l)
{ 
	l->length = 0;
	return OK;
}
// 判断表是否为空
Status emptyList(SqList l)
{ 
	return l.length == 0 ? OK : ERROR;
}
// 清空表
Status cleanList(SqList *l)
{ 
	l->length = 0;
	return OK;
}
// 返回表个数
int lengthList(SqList l)
{ 
	return l.length;
}
// 获得表中第i个位置的元素 从1开始
Status getElemList(SqList l, int i, ElemType *e)
{ 
	/*
		条件判断：
			- 表存在
			- 数组下标判断
				- [1, l.length]
	*/
	if(l.length == 0 || i < 1 || i > l.length)
		return ERROR;
	*e = l.data[i-1];
	return OK;
}
// 返回对应元素位置
int locateList(SqList l, ElemType e)
{ 
	/*
		条件判断：
			- 表存在
	*/
	int res = 0;
	int i = 0;
	if(l.length == 0)
		return ERROR;
	for(i = 0; i < l.length; i++)
	{ 
		if(e == l.data[i])
		{ 
			res = i;
			break;
		}
	}
	if(i >= l.length)
		return ERROR;
	return res + 1;
}
// 在i个位置之前插入新的数据e
Status insertList(SqList *l, int index, ElemType e)
{ 
	/*
		条件判断：
			- 线性表满
			- 下标 [1, l.length]
	*/ 
	int i = 0;

	if(l->length == MAXSIZE)
	{ 
		printf("满\n");
		return ERROR;
	}
	/*
		理解：
			插入 数据从后向前赋值
			此时:
				i = length; 指向后一个元素
			初始：
				a[i] = a[i-1];
			最终：
				a[index] = a[index-1]
			范围：
				[index, length]
	*/

	if(index < 1 || index > l->length + 1)
	{	
		printf("插入位置错误\n");
		return ERROR;
	}
	for(i = l->length; i > index - 1; i-- )
		l->data[i] = l->data[i-1];

	l->data[i] = e;
	l->length ++;
	return OK;
}
// 删除第i个元素
Status deleteList(SqList *l, int index, ElemType *e)
{ 
	if(l->length == 0)
		return ERROR;
	if(index < 1 || index > l->length)
		return ERROR;
	*e = l->data[index-1];
		/*
			理解：
				删除 数据从前往后赋值
				此时：
					i= index -1
				初始：
					a[i] = a[i+1]
				最后：
					a[length-2] = a[leng-1]
				范围：
					[index-1, length-2]
		*/
	for(int i = index - 1;i<l->length - 1; i++)
		l->data[i] = l->data[i + 1];
	
	l->length --;
	return OK;

}
// 元素输出
void showList(SqList l)
{ 
	for(int i = 0; i < l.length; i ++)
		printf("%d\t", l.data[i]);
	putchar('\n');
}
