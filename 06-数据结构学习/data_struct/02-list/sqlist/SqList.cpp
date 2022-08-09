#include <iostream>
#include "SqList.h"

int main(int argc, char *argv[])
{ 
	SqList list;

	std::cout << "***创建线性表操作***" << std::endl;
	if(InitSqList(list) == OK)
	{ 
		std::cout << "创建成功" << std::endl;
	}
	std::cout << "***添加线性表元素操作***" << std::endl;
	for(int i = 0; i < 12; i ++)
	{ 
		if(InsertSqList(list, i, i) == OK)
		{ 
			std::cout << "添加元素" << i << "成功" << std::endl;
		}
	}

	std::cout << "展示线性表" << std::endl;
	ShowSqList(list);
	
	std::cout << "删除某个位置的线性表元素" << std::endl;
	ElemType e;
	if(DeleteSqList(list, 2, e) == OK)
	{ 
		std::cout << e << std::endl;
	}
	
	std::cout << "展示线性表" << std::endl;
	ShowSqList(list);
	

	std::cout << "定位元素" << std::endl;
	std::cout << LocateElem(list, 5) << std::endl;;

	std::cout << "销毁线性表" << std::endl;
	DestorySqList(list);


	return 0;
}
