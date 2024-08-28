//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.
#include<iostream>
using namespace std;
class BankAccount
{
	private :
		double acn;
		double balance;
	public :
		double deposit(double a,double b,double amt)
		{
			acn = a;
			balance = b;
			balance = balance + amt; 
			return balance;
		}
		double withdrawl(double a,double b,double amt)
		{
			acn = a;
			balance = b;
			if(b>=amt)
			{
				balance = balance - amt;
			}
			else
			{
				cout<<"\nInvalid amount";
			}
			return balance;
		}
		void display()
		{
			cout<<"\nAccount number = "<<acn;
			cout<<"\nBalance = "<<balance;
		}
};
int main()
{
	BankAccount b1;
	b1.deposit(456789,10000,5000);
	b1.display();
	b1.withdrawl(456789,10000,5000);
	b1.display();
	return 0;
}
