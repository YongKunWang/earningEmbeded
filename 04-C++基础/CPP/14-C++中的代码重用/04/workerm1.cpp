#include <iostream>
#include "workermi.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

Worker::~Worker() { }

void Worker::Data() const
{ 
	cout << "Name:" << fullname << endl;
	cout << "Id  :" << id << endl;
}

void Worker::Get()
{ 
	getline(cin, fullname);
	cout << "Enter Worker's id: ";
	cin >> id;
	while(cin.get()!= '\n')
		continue;
}

// Waiter
void Waiter::Data() const
{ 
	cout << "Panache rating: " << panache << endl;
}

void Waiter::Get()
{ 
	cout << "Please enter Waiter's panache: ";
	cin >> panache;
	while(cin.get() != '\n')
		continue;
}

void Waiter::Set()
{ 
	cout << "Enter waiter's name:";
	Worker::Get();
	Get();
}
void Waiter::Show() const
{ 
	cout << "Category: waiter\n";
	Worker::Data();
	Data();
}

// Singer
void Singer::Data() const
{ 
	cout << "Vocal rating: " << voice << endl;
}

void Singer::Get()
{ 
	cout << "Please enter Singer's voice range:\n";
	int i;
	for(i = 0; i<Vtypes; i++)
	{ 
		cout << i << ": " << pv[i] << "  ";
		if(i % 4 == 3)
			cout << endl;
	}
	if(i % 4 != 0)
		cout << '\n';
	while(cin >> voice && (voice < 0 || voice >= Vtypes))
		cout << "Please enter a value >= 0 and <" << Vtypes << endl;
	while(cin.get() != '\n')
		continue;
}
void Singer::Set()
{ 
	cout << "Enter Singer's voice ranting: ";
	Worker::Get();
	Get();
}
void Singer::Show() const
{ 
	cout << "Category: singer\n";
	Worker::Data();
	Data();
}

void SingerWaiter::Data()
{ 
	Singer::Data();
	Waiter::Data();
}

void SingerWaiter::Get()
{ 
	Waiter::Get();
	Singer::Get();
}

void SingerWaiter::Set()
{ 
	cout << "Enter singing waiter's name";
	Worker::Get();
	Get();
}
void SingerWaiter::Show( ) const
{ 
	cout << "Categry: Sing waiter\n";
	Worker::Data();
	Data( );
}
