// 结构体里使用共用体

#include <iostream>

using namespace std;

union id { 
	long id_num;
	std::string id_char;
};

struct book { 
	std::string title;
	float price;
	int type;

	id id_val;
};



int main( )
{ 
	book book1 = { 
		"Hello",
		220.0,
		1,
		id_val.id_num = 1
	};
/*
	book book2 = { 
		"World",
		33.0,
		2,
		id_val.id_char = "11";
	};
*/
//	cout << book1.type << book1.id_val.id_num << endl;

	if(book1.type == 1)
		cin >> book1.id_val.id_num;
	cout << book1.id_val.id_num << endl;

	return 0;
}
