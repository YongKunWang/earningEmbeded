#include <iostream>
#include "studenti.h"

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::istream;

void set(Student & sa, int n);

const int pupils = 3;
const int quizzes = 5;

int main(void)
{ 	
	Student ada[pupils] = 
			{Student(quizzes), Student(quizzes), Student(quizzes)};
	
	int i;
	for(i = 0; i < pupils; i++)
		set(ada[i], quizzes);
	
	cout << "\nStudent List:\n";
	for(i = 0; i < pupils; i++)
		cout << ada[i].Name() << endl;
	
	cout << "\nResult:";
	for(i = 0; i < pupils; i++)
	{ 
		cout << endl << ada[i];
		cout << "vaerage: " << ada[i].Average() << endl;
	}
	cout << "Done.\n";

	return 0;
}

void set(Student & sa, int n)
{ 
	cout << "Please enter the students name:";
	getline(cin, sa);

	cout << "Please enter " << n << " quiz scores:\n";
	for(int i = 0; i < n; i++)
		cin >> sa[i];
	while(cin.get() != '\n')
		continue;
}
