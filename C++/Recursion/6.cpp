//Write a c++ program to find nth element of fibonnaci series using recursion
#include<iostream>
using namespace std;
int fibonnaci(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fibonnaci(n-1) + fibonnaci(n-2);
	}
}
int main()
{
	int n,result;
	cout<<"\nEnter the position = ";
	cin>>n;
	result = fibonnaci(n);
	cout<<"\nnth element of fibonnaci series is = "<<result;
	return 0;
}
