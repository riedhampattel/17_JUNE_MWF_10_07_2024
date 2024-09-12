#include<iostream>
using namespace std;
template<typename T,int size>
void sortarr(T (&arr)[size])
{
	int i,j;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main()
{
	int i;
	int num[5] = {5,4,2,9,3};
	cout<<"\nArray num before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	sortarr(num);
	cout<<"\nArray num after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<num[i]<<" ";
	}
	
	char ch[5] = {'z','o','q','w','r'};
	cout<<"\nArray ch before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<ch[i]<<" ";
	}
	sortarr(ch);
	cout<<"\nArray ch after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<ch[i]<<" ";
	}
	
	float f[5] = {5.2,7.8,1.2,4.6,8.9};
	cout<<"\nArray f before sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<f[i]<<" ";
	}
	sortarr(f);
	cout<<"\nArray f after sorting = ";
	for(i=0;i<5;i++)
	{
		cout<<f[i]<<" ";
	}
	return 0;
}
