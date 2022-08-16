#include <iostream>
#include <string>

using namespace std;

void display(const string str[ ], int n);

const int SIZE = 5;

int main( )
{ 
	
	string list[SIZE];

	for(int i = 0; i < SIZE; i ++)
	{ 
		cout << i + 1 << ": ";
		getline(cin, list[i]);
	}

	cout << "Your list:\n";
	display(list, SIZE);

	return 0;
}

void display(const string str[ ], int n)
{ 
	for(int i = 0; i < n; i++)
	{ 
		cout << i + 1 << ": " << str[i] << endl;
	}


}
