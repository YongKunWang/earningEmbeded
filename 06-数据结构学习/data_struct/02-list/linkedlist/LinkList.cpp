#include "LinkList.h"

using namespace std;

int main()
{ 
	int *p = NULL;
	
	cout << sizeof(Node) << endl;
	
	cout << sizeof(LinkList) << endl;
	cout << sizeof( p) << endl;
	
	cout << "---------------------------" << endl;
	
	LinkList l;
	if(InitLinkList(l) == OK)
	{ 
		cout << "单链表创建成功..." << endl;
	}












	return 0;
}
