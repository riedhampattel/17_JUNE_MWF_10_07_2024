//Write a c++ program to find factorial of given number using recursion
#include<iostream>
using namespace std;
int fact(int num)
{
	if(num>1)
	{
		return num * fact(num-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int num,result;
	cout<<"\nEnter the number = ";
	cin>>num;
	result = fact(num);
	cout<<"\nFactorial of "<<num<<" is = "<<result;
	return 0;
}
