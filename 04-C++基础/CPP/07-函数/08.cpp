#include <iostream>

using namespace std;

int sum_arr(const int * begin, const int * end);

int main( )
{ 
	int arr[ ] = {1,2,3,4,5,6,7,8,9,0};

	cout << sum_arr(arr, arr + (sizeof(arr) / sizeof(arr[0])));
	cout << endl;

	return 0;
}

int sum_arr(const int * begin, const int * end)
{ 
	int total = 0;

	const int *pt;
	
	for(pt = begin; pt != end; pt++ )
		total += *pt;

	return total;

}
