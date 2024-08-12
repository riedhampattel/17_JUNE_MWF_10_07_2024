#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,index,value;
	cout<<"\nEnter the size of an array  = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	cout<<"\nArray before inserting value = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	cout<<"\nEnter the element you want to enter = ";
	cin>>value;
	cout<<"\nEnter the index number = ";
	cin>>index;

	for(i=size;i>index;i--)
	{
		num[i] = num[i-1];
	}
	num[index] = value;
	cout<<"\nArray after inserting value = ";
	for(i=0;i<size+1;i++)
	{
		cout<<num[i]<<" ";
	}
	return 0;
}
