#ifndef _STOCK00_H
#define _STOCK00_H

#include <string>

// 股票类定义！

class Stock { 
	
	private:
		std::string company;
		long shares;
		double share_val;
		double total_val;

		void set_tot( )
		{ 
			total_val = shares * share_val;
		}
	public:
		Stock();
		Stock(const std::string & co, long n, double pr);
		~Stock();
		void acquire(const std::string & co, long n, double pr);
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		void show() const;
		// const Stock a;
		// a.show() 会报错！
		const Stock & topval(const Stock &s) const;
};

#endif
