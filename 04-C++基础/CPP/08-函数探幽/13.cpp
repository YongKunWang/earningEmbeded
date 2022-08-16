#include <iostream>

template <typename T>
void Swap(T &a, T &b);

struct job { 
	char name[40];

	double salary;

	int floor;

};

template <> void Swap<job>(job &j1, job &j2); // 具体化

void show(job &j);

int main( )
{ 
	using namespace std;

	cout.precision(2);
	cout.setf(ios::fixed, ios::floatfield);

	int i = 10, j = 20;

	cout << "i j = " << i << " " <<  j << endl;
	Swap(i, j);
	cout << "i j = " << i << " " <<  j << endl;
	
	job j1 = {"j1", 1.0, 1};
	job j2 = {"j2", 2.0, 2};
	show(j1);
	show(j2);
	
	Swap(j1, j2);
	show(j1);
	show(j2);

	return 0;
}

template <typename T>
void Swap(T &a, T &b)
{ 
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <> void Swap<job>(job &j1, job &j2)
{ 
	double t1;
	int t2;

	t1 = j1.salary;
	j1.salary = j2.salary;
	j2.salary = t1;

	t2 = j1.floor;
	j1.floor = j2.floor;
	j2.floor = t2;
}

void show(job &j)
{ 
	using namespace std;
	cout << j.name << " " << j.salary << " " << j.floor << endl;
}



