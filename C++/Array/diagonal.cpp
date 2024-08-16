#include<iostream>
using namespace std;
int main()
{
	int num[100][100],size,i,suml=0,sumr=0,j;
	cout<<"\nEnter the size of square matrix = ";
	cin>>size;
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<"\nEnter the element in num["<<i<<"]["<<j<<"] = ";
			cin>>num[i][j];
		}
	}
	
	cout<<"\nArray := \n";
	
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<"\n";
	}

	//addition of top left diagonal elements
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i==j)
			{
				suml = suml + num[i][j];
			}
		}
	}
	
	//addition of top right diagonal elements
	j = size-1;
	for(i=0;i<size;i++)
	{
		sumr = sumr + num[i][j];
		j--;
	}
	
	cout<<"\nAddition of top left diagonal elements = "<<suml;
	cout<<"\nAddition of top right diagonal elements = "<<sumr;
	
	return 0;
}
