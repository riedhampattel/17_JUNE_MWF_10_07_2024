#include<stdio.h>
int main()
{
	int a[100],b[100],c[200];
	int sizea,sizeb,i,j;
	
	printf("\nEnter the size of a array = ");
	scanf("%d",&sizea);
	
	for(i=0;i<sizea;i++)
	{
		printf("\nEnter the element in a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter the size of b array = ");
	scanf("%d",&sizeb);

	for(i=0;i<sizeb;i++)
	{
		printf("\nEnter the element in b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0;i<sizea;i++)
	{
		c[i] = a[i];
	}
	
	for(j=0;j<sizeb;j++)
	{
		c[i] = b[j];
		i++;
	}
	
	printf("\na array = ");
	for(i=0;i<sizea;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nb array = ");
	for(i=0;i<sizeb;i++)
	{
		printf("%d\t",b[i]);
	}
	
	printf("\nMerged array = ");
	for(i=0;i<sizea+sizeb;i++)
	{
		printf("%d\t",c[i]);
	}
	
	return 0;
}