#include <iostream>
#include <string>

using namespace std;

int main( )
{ 
	string name;

	cin >> name;

	int i = 0; 

	while(name[i])
	{ 
		cout << name[i] << " : " << static_cast<int>(name[i]) << endl;
		i ++;
	}

	return 0;
}
