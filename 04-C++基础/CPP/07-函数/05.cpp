#include <iostream>

using namespace std;

int sum(const int arr[ ], int size);

int main( )
{ 
	int arr[ ] = {1,2,3,4,5};

	cout << sum(arr, sizeof(arr) / sizeof(arr[0]));
	cout << endl;
	return 0;
}

int sum(const int arr[ ], int size)
{ 
	int total = 0;

	for(int i = 0; i < size; i ++)
	{ 
		total += arr[i];
	}
	
	return total;
}
