#include <iostream>

using namespace std;

void sum(int (*arr)[3], int size);

int main( )
{ 
	
	int arr[4][3] = { 
		{1,2,3},
		{11,22,33},
		{111,222,333}
	};

	sum(arr, 4);
	return 0;
}

void sum(int (*arr)[3], int size)
{ 
	for(int i = 0; i < size; i++)
	{ 
		for(int j = 0; j < 3; j++)
			cout << arr[i][j] << '\t';
		cout << endl << endl;

	}

}
