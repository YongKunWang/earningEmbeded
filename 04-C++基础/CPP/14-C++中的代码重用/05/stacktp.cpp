#include <iostream>
#include <string>
#include <cctype>
#include "stacktp.h"

using std::cin;
using std::cout;

int main()
{ 
	Stack<std::string> st;
	char ch;
	std::string po;

	while(cin >> ch && std::toupper(ch) != 'Q')
	{ 
		while(cin.get() != '\n')
			continue;
		if(!std::isalpha(ch))
		{ 
			cout << '\a';
			continue;
		}

		switch(ch)
		{ 
			case 'A':
			case 'a':
				cout << "Enter input number to add: ";
				cin >> po;
				if(st.isfull())
					cout << "stack already full\n";
				else
					st.push(po);
				break;
			case 'P':
			case 'p':
				if(st.isempty())
					cout << "stack already empty\n";
				else
					{ 
						st.pop(po);
						cout << "po #" << po << " poped\n";
						break;
					}
		}

	}

	cout << "Bye\n";
	return 0;
}
