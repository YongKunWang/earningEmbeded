// 1 ~ 16的阶乘

#include <iostream>
#include <array>

using namespace std;

const int Size = 16;

int main( )
{ 
	
	array<long long, 16> a;
	
	a[0] = a[1] = 1;


	for(int i =2; i <= 16; i ++)
	{ 
		a[i] = i * a[i-1];
	}

	for(int i = 0; i <= 16; i ++ )
	{ 
		cout << i << "! = " << a[i] << endl;
	}


	return 0;
}
