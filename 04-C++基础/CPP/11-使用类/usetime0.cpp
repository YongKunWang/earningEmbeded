#include <iostream>
#include "mytime0.h"

int main( )
{ 
	using std::cout;
	using std::endl;

	Time planning;

	Time coding(2,40);
	Time fixing = Time(5,55);
	Time total;
	Time diff;
	Time adjusted;

	cout << "planning time = ";
	planning.Show();
	cout << endl;
	
	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	//total = coding.Sum(fixing);
	total = coding + fixing;
	cout << "coding.Sum(fixing) = ";
	total.Show();
	cout << endl;

	Time morefixing = Time(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	cout << endl;

	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;

	diff = total - coding;
	cout << "diff = total -coding = ";
	diff.Show();
	cout << endl;
	
	//adjusted = total * 1.5;
	adjusted = 1.5 * total;
	cout << "adjusted = total * 1.5 = ";
	adjusted.Show();
	cout << endl;
	
	cout << adjusted << endl;



	return 0;
}
