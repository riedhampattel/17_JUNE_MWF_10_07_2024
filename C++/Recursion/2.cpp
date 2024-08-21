//Write a c++ program to print "Function called" n number of times using recursion
#include<iostream>
using namespace std;
int display(int num)
{
	if(num!=0)
	{
		cout<<"\nFunction called";
		num--;
		display(num);
	}
}
int main()
{
	int num;
	cout<<"\nEnter the number = ";
	cin>>num;
	display(num);
	return 0;
}
