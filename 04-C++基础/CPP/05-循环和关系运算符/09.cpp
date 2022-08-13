
// 反转字符串!
#include <iostream>
#include <string>

using namespace std;

int main( )
{ 
	string word;

	cin >> word;

	for(int i = word.size() - 1, j = 0; j < i; i --, j++)
	{ 
		// 最后一个字符
		char temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	
	cout << word << endl;

	return 0;
}
