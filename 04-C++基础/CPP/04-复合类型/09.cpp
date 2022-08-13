#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main( )
{ 
	string str1 = "abandon";
	string str2 = " left";

	char charr1[20];
	char charr2[20] = {"Hello World!"};
	
	str1 += str2;
	cout << str2 << endl;

	str2 = str1;
	cout << str2 << endl;
	

	strcpy(charr1, charr2);
	cout << charr1 << endl;
	
	strcat(charr1, charr2);
	cout << charr1 << endl;
	
	cout << str2.size( ) << endl;


	return 0;
}
