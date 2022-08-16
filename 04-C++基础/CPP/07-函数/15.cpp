#include <iostream>
#include <string>
#include <array>

using namespace std;

const int season = 4;

const array<string, season> snames = { 
	"spring",
	"summer",
	"fall",
	"winter"
};
/*
void fill(array<string, season> *pa)
{ 
	for(int i = 0; i < season; i++)
	{ 
		cin >> (*pa)[i];
	}

}
*/


void show(const array<string, season> pa)
{
	cout << " aaa" << endl;
	for(int i = 0; i < season; i++)
	{ 
		cout << pa[i] << endl;
	}

	cout << endl;
}

int main( )
{ 
	array<string, season> expense;

//	fill(&expense);
	show(snames);

	return 0;
}
