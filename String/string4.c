#include<stdio.h>
int main()
{
	char name[100];
	printf("\nEnter the string = ");
	fgets(name,100,stdin);
	printf("\nString = %s",name);
	return 0;
}
