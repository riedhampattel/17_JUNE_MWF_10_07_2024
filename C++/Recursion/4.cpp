//Write a c++ program to find sum of n natural numbers using recursion
#include<iostream>
using namespace std;
int sumnum(int num)
{
	if(num>=1)
	{
		return num + sumnum(num-1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	int range,result;
	cout<<"\nEnter the number = ";
	cin>>range;
	result = sumnum(range);
	cout<<"\nThe addition is = "<<result;
	return 0;
}
