#include <iostream>

template <typename T>
void swapp(T &a, T &b);

int main( )
{ 
	using namespace std;

	int i = 10;

	int j = 20;

	swap(i, j);
	
	cout << i << ' ' << j << endl;

	double a = 11.1;
	double b = 12.2;

	swap(a,b);
	cout << a << ' ' << b << endl;
	return 0;
}

template <typename T>
void swap(T &a, T &b)
{ 
	T temp;
	temp = a;
// 必须要写2行才可以的！！！
	a = b;

	b = temp;

}
