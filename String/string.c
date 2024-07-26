#include<stdio.h>
int main()
{
	char name[100]="Hello World! How are you?";
	int i;
	printf("\nString = ");
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
	}
	return 0;
}
