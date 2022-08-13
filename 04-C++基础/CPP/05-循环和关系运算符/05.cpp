// 1 ~ x的阶乘

#include <iostream>
#include <array>


const int Size = 16;

int main( )
{ 
	using std::cout;
	using std::cin;
	using std::endl;
	using std::array;

	array<long long, 16> a;
	
	int x = 0;

	a[0] = a[1] = 1;

	cin >> x;

	for(int i =2; i <= x; i ++)
	{ 
		a[i] = i * a[i-1];
	}

	for(int i = 0; i <= x; i ++ )
	{ 
		cout << i << "! = " << a[i] << endl;
	}


	return 0;
}
