#ifndef _ACCTABS_H
#define _ACCTABS_H

#include <iostream>
#include <string>

class AccABC { 
	private:
		std::string fullName;
		long accNum;
		double balance;
	protected:
		struct Formatting {
			std::ios_base::fmtflags flag;
			std::streamsize pr;
		};

		const std::string & FullName() const {return fullName;}
		long AccNum() const {return accNum;}
		Formatting SetFormat() const;
		void Restore(Formatting & f) const;

	public:
		AccABC(const std::string & s = "Nullbody", long an = -1,
			   double bal = 0.0);
		void Deposit(double amt);
		virtual void Withdraw(double amt) = 0;
		double Balance() const {return balance;}
		virtual void ViewAcct() const = 0;
		virtual ~AccABC() {}

};

class Brass :public AccABC{ 
	public:
		Brass(const std::string & s = "Nullbody", long an = -1,
			  double bal = 0.0) : AccABC(s, an, bal) 
		{ }
		virtual void Withdraw(double amt);
		virtual void ViewAcct() const;
		virtual ~Brass(){ }

};


class BrassPlus : public AccABC { 
	private:
		double maxLoan;
		double rate;
		double owesBank;
	public:
		BrassPlus(const std::string & s = "Nullbody", long an = -1,
				  double bal = 0.0, double ml = 500,
				  double r = 0.10);
		BrassPlus(const Brass & ba, double ml = 500, double r = 0.10);
		virtual void ViewAcct() const;
		virtual void Withdraw(double amt);

		void ResetMax(double m) {maxLoan = m;}
		void ResetRate(double r) {rate = r;}
		void ResetOwes() {owesBank = 0;}
};


#endif /* _ACCTABS_H */
