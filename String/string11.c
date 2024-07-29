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
	
	strupr(name1);
	strlwr(name2);
	
	printf("\nString name 1 after strupr function = %s",name1);
	printf("\nString name 2 after strlwr function = %s",name2);
	return 0;
}
