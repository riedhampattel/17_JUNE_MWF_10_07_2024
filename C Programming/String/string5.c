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
	
	int length1 = strlen(name1);
	int length2 = strlen(name2);
	
	printf("\nLength of string name 1 = %d",length1);
	printf("\nLength of string name 2 = %d",length2);
	
	return 0;
}
