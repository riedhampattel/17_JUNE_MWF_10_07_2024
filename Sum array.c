#include<stdio.h>
int main()
{
	int num[100],size,i,sum=0;
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
		sum = sum + num[i];
	}
	
	printf("\nThe addition of %d numbers is %d",size,sum);
	
	return 0;
}