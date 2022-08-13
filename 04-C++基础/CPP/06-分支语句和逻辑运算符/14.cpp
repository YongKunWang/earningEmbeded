// 输入错误重置

#include <iostream>

const int Max = 5;

int main( )
{ 
	using namespace std;
	
	double fish[Max];

	int i = 0;

	for(i = 0; i < Max; i++)
	{ 
		cout << "round #" << i + 1 << ": ";

		while(!(cin >> fish[i]))
		{ 
			cin.clear( );
			while(cin.get() != '\n')
				continue;
			cout << "Please enter a number: ";
		}

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
