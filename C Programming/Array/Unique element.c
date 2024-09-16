#include<stdio.h>
int main()
{
	int num[100],size,i,j;
	
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	
	printf("\nOriginal Array = ");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\nUnique elements = ");
	for(i=0;i<size;i++)
	{
		int count = 0;
		for(j=0;j<size;j++)
		{
			if(i!=j)
			{
				if(num[i]==num[j])
				{
					count++;
				}
			}
		}
	if(count==0)
	{
		printf("%d\t",num[i]);
	}
	}
	
	return 0;
}