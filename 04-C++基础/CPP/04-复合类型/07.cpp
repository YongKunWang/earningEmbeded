#include <iostream>
#include <string>

using namespace std;

int main( )
{ 
	char charr1[20];
	char charr2[20] = " jaguar ";

	string str1;
	string str2 = " panther ";

	cin >> charr1;

	cin >> str1;

	cout << charr1 << charr2 << str1 << str2 << endl;

	cout << charr1[2] << endl;

	cout << str2[2] << endl;

	return 0;
}
