#include <iostream>
#include "namesp.h"

namespace pers { 
	
	using std::cout;
	using std::cin;
	using std::endl;

	void getPerson(Person &rp)
	{ 
		cout << "Enter your xing:";
		cin >> rp.fname;
		cout << "\nEnter your ming:";
		cin >> rp.lname;
	}

	void showPerson(const Person & rp)
	{ 
		cout << rp.fname << " " << rp.lname << endl;
	}
};

namespace debts { 

	void getDebt(Debt & rd)
	{ 
		getPerson(rd.name);
		std::cout << "Enter debts:";
		std::cin >> rd.amount;
	}

	void showDebt(const Debt &rd)
	{ 
		showPerson(rd.name);
		std::cout << rd.amount << std::endl;
	}

	double sumDebts(const Debt ar[], int n)
	{ 
		double total = 0;

		for(int i = 0; i < n; i++)
			total += ar[i].amount;
		return total;
	}
};
