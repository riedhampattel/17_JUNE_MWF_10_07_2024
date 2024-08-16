#include<iostream>
using namespace std;
int main()
{
	int num[100],i,size,index,value;
	cout<<"\nEnter the size = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		cout<<"\nEnter the element in ["<<i<<"] = ";
		cin>>num[i];
	}
	
	cout<<"\nArray before deleting an element = ";
	for(i=0;i<size;i++)
	{
		cout<<num[i]<<" ";
	}
	
	cout<<"\nEnter the value you want to delete = ";
	cin>>value;
	int count = 0;
	for(i=0;i<size;i++)
	{
		if(value==num[i])
		{
			index = i;
			count++;	
		}	
	}
	//1 2 4 5 5
	//0 1 2 3 4	
	if(count!=0)
	{
		for(i=index;i<size-1;i++)
		{
			num[i] = num[i+1];
		}
	}
	else
	{
		cout<<"\nValue is not present in an array";
	}
	
	cout<<"\nArray after deleting an element = ";
	for(i=0;i<size-1;i++)
	{
		cout<<num[i]<<" ";
	}
	
	return 0;
}
