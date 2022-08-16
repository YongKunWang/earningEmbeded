#include <iostream>

using namespace std;

double byts(int);

double pam(int);

void estimate(int lines, double (*ps)(int));

int main( )
{ 
	int code;
	cin >> code;

	estimate(code, byts);

	estimate(code, pam);

	return 0;
}

double byts(int lns)
{ 
	return 0.05 * lns;

}

double pam(int lns)
{ 
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{ 
	cout << lines << " lines will take.";
	cout << (*pf)(lines) << " hours\n" << endl;
}
