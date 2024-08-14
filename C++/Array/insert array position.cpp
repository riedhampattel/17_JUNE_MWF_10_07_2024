#include<iostream>
using namespace std;
int main()
{
	int num[100],size,value,position,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in = ";
		cin>>num[i];
	}
	
	cout<<"\nOriginal array :=\n";
	
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	//1 2 2 3 4 5
	//1 2 3 4 5
	//0 1 2 3 4 5
	cout<<"\nEnter the value you want to enter = ";
	cin>>value;//9
	cout<<"\nEnter the position you want to enter = ";
	cin>>position;//2
	
	for(i=size;i>=position;i--)
	{
		num[i] = num[i-1];
	}
	
	num[position-1] = value;
	cout<<"\nArray after insertion :=\n";
	
	for(i=0;i<=size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
