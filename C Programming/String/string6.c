#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	printf("\nEnter the string name 1 = ");
	gets(name1);
	printf("\nEnter the string name 2 = ");
	gets(name2);
	
	printf("\nOriginal string name 1 = %s",name1);
	printf("\nOriginal string name 2 = %s",name2);
	
	strrev(name1);
	strrev(name2);

	printf("\nReversed string name 1 = %s",name1);
	printf("\nReversed string name 2 = %s",name2);
	
	return 0;
}
