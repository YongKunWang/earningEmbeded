#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct book { 
	char title[20];
	double price;
};


int main( )
{ 
	struct book book1 = {"Hello", 22.0 };
	book book2;
	book book3 {};
	book2 = book1;

	cout << book2.title << ' ' << book2.price << endl;
	cout << book3.title << ' ' << book3.price << endl;

	return 0;
}
