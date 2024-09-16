#include<stdio.h>
int main()
{
	int num[100][100];
	int i,j,row,col;
	
	printf("\nEnter the number of rows = ");
	scanf("%d",&row);
	printf("\nEnter the number of cols = ");
	scanf("%d",&col);
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\nEnter the elements in num[%d][%d] = ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}