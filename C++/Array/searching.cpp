#include<iostream>
using namespace std;
int main()
{
	int num[100],size,i,value,count=0;
	cout<<"\nEnter the size of an array  = ";
	cin>>size;
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in num["<<i<<"] = ";
		cin>>num[i];
	}
	cout<<"\nEnter the value you want to search = ";
	cin>>value;
	
	cout<<"\nArray = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}

	for(i=0;i<size;i++)
	{
		if(num[i]==value)
		{
			cout<<"\n"<<value<<" is present on index number"<<i;
			count++;
		}
	}
	if(count==0)
	{
		cout<<"\n"<<value<<" is not present in the array";
	}
	return 0;
}
