#include<iostream>
using namespace std;
int main()
{
	int num[100],size,index,i;
	cout<<"\nEnter the size of an array = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in = ";
		cin>>num[i];
	}
	
	cout<<"\nOriginal array = ";
	
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	cout<<"\nEnter the index number = ";
	cin>>index;

	for(i=index;i<size-1;i++)
	{
		num[i] = num[i+1];
	}
	cout<<"\nArray after deletion = ";
	for(i=0;i<size-1;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
