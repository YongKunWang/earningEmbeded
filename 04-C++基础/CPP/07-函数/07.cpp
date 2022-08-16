#include <iostream>

using namespace std;

int fill_arr(double arr[ ], int size);
void show(const double ar[ ], int n);

int main( )
{ 
	
	double arr[5];

	int size = fill_arr(arr, 5);
	
	show(arr,size);
		
	if(size > 0)
	{ 
		double factor;

		while(!(cin >> factor))
		{ 
			cin.clear( );
			while(cin.get( ) != '\n')
				continue;
			cout << "Bad input" << endl;

		}

		cout << factor << endl;
	}



	return 0;
}


int fill_arr(double arr[ ], int size)
{ 
	double temp;
	
	int i = 0;

	for(i = 0; i < size; i++)
	{ 
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;

		if(!cin)
		{ 
			cin.clear( );
			while(cin.get() != '\n')
				continue;
			cout << "Bad input" << endl;
			break;
		}
		else if(temp < 0)
		{ 
			break;
		}
		arr[i] = temp;
	}

	return i;
}

void show(const double ar[ ], int n)
{ 
	for(int i = 0; i< n; i++)
	{ 
		cout << ar[i] << endl;
	}
}


