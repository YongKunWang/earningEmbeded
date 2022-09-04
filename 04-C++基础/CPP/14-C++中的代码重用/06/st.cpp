#include <iostream>
#include "stacktp.h"
#include <cstdlib>
#include <ctime>

const int Num = 10;

int main(void)
{ 
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;
	
	std::srand(time(0));
	cout << "Please enter stack size: ";
	int stacksize = 0;
	cin >> stacksize;
	Stack<char *> st(stacksize);

	const char *in[Num] = { 
		"1: Hank",
		"2: Kiki",
		"3: Betty",
		"4: Ian",
		"5: aaa"
	};

	const char * out[Num];
	
	int processed = 0;
	int nextin = 0;
	while(processed < Num)
	{ 
		if(st.isempty())
			st.push(in[])

	}

	return 0;
}
