#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100],name2[100];
	int num;
	printf("\nEnter the string name 1 = ");
	gets(name1);
	printf("\nEnter the string name 2 = ");
	gets(name2);
	
	printf("\nOriginal string name 1 = %s",name1);
	printf("\nOriginal string name 2 = %s",name2);
	
	strcpy(name1,name2);
	
	printf("\nString name 1 after copy = %s",name1);
	printf("\nString name 2 after copy = %s",name2);
		
	return 0;
}
