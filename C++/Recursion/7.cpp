//Write a c++ program to find the power of given elements using recursion
#include<iostream>
using namespace std;
int power(int b,int e)
{
	if(e==0)
	{
		return 1;
	}
	else
	{
		return b * power(b,e-1);
	}
}
int main()
{
	int base,exponent,result;
	cout<<"\nEnter the value of base = ";
	cin>>base;
	cout<<"\nEnter the value of exponent = ";
	cin>>exponent;
	result = power(base,exponent);
	cout<<"\nPower is = "<<result;
	return 0;
}
