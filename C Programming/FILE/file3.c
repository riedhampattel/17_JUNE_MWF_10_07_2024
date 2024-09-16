#include<stdio.h>
int main()
{
	FILE *fp1;
	char string[100];
	fp1 = fopen("demo.txt","r");
	while(fgets(string,100,fp1))
	{
		printf("%s",string);	
	}
	return 0;
}
