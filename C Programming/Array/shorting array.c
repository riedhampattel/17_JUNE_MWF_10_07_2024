#include<stdio.h>
int main()
{
	int num[100],size,i,j,temp;
	printf("\nEnter the size of an array = ");
	scanf("%d",&size);
	
	for(i=0;i<size;i++)
	{
		printf("\nEnter the element in num[%d] = ",i);
		scanf("%d",&num[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(num[i]>num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\nSmallest element = %d",num[0]);
	printf("\nBiggest element = %d",num[size-1]);
	return 0;
}