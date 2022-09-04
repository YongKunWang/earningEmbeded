#include <iostream>
#include "stock00.h"


Stock::Stock()
{ 
	std::cout << " Kong" << std::endl;
	company = "no";
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const std::string & co, long n, double pr)
{ 
	std::cout << "构造函数" << std::endl;
	company = co;
	shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{ 
	std::cout << "Bye!" << std::endl;
}


void Stock::acquire(const std::string & co, 
					long n,
					double pr)
{
	company = co;
	if(n < 0)
	{ 
		std::cout << "Error Number and set " << company << " shares sets to 0" << std::endl;
		n = 0;
	}
	else
		shares = n;
	
	share_val = pr;

	set_tot();
}

void Stock::buy(long num, double price)
{ 
	shares += num;

	share_val = price;

	set_tot();
}

void Stock::sell(long num, double price)
{ 
	shares -= num;

	share_val = price;

	set_tot();
}

void Stock::update(double price)
{ 
	share_val = price;

	set_tot();
}
/*
void Stock::show()
{ 
	std::cout << " Company: " << company << '\n'
			  << " Shares:  " << shares << '\n'
			  << " Share Price: " << share_val << '\n'
			  << " Total Worth: " << total_val << std::endl;
}
*/

void Stock::show() const
{ 
	using std::cout;
	using std::ios_base;

	ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize prec = cout.precision(3);
	
	cout << " Company: " << company << '\n'
		 << " Shares:  " << shares << '\n';
	cout << " Share Price: " << share_val << ' '
		 << " Total Worth: " << total_val << std::endl;

	cout.setf(orig, ios_base::floatfield);
	cout.precision(prec);
	
}

const Stock & Stock::topval(const Stock &s) const
{ 
	if(s.total_val > this->total_val)
		return s;
	else
		return *this;
}

