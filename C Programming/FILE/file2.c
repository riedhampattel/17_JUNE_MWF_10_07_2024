#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1 = fopen("first.txt","a");
	fprintf(fp1,"This is my first line\n");
	fclose(fp1);
	printf("\nOperation successful");
	return 0;
}
