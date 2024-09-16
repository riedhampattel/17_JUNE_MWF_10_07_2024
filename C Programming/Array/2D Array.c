#include<stdio.h>
int main()
{
	int num1[100][100],num2[100][100],sum[100][100];
	int i,j,row,col;
	
	printf("\nEnter the number of rows = ");
	scanf("%d",&row);
	printf("\nEnter the number of cols = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in num1[%d][%d] = ",i,j);
			scanf("%d",&num1[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in num2[%d][%d] = ",i,j);
			scanf("%d",&num2[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j] = num1[i][j] + num2[i][j];
		}
	}
	printf("\nArray num1 = \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",num1[i][j]);
		}
		printf("\n");
	}
	printf("\nArray num2 = \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",num2[i][j]);
		}
		printf("\n");
	}
	printf("\nArray sum = \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}