// 输入错误会直接退出

#include <iostream>

const int Max = 5;

int main( )
{ 
	using namespace std;
	
	double fish[Max];

	int i = 0;

	while(i < Max && cin >> fish[i])
	{ 
		if(++i < Max)
			cout << "fish #" << i + 1 << ": ";
	}

	double total = 0.0;
	
	for(int j = 0; j < i; j++ )
		total += fish[j];
	if(i == 0)
		cout << "No fish\n";
	else 
		cout << total / i << " = average weight of " << i << "  fish\n";

	cout << "Done\n";

	return 0;
}
