#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,index,count=0;
	cout<<"\nEnter the size of an array  = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	cout<<"\nEnter the index you want to search = ";
	cin>>index;
	
	cout<<"\nArray = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	if(index<size && index>=0)
	{
		cout<<"\n"<<num[index]<<" present on index number"<<index;
	}
	else
	{
		cout<<"\n"<<size-1<<" is the last index of an array";
	}
	
	return 0;
}
