#include<stdio.h>
int main()
{
	FILE *fp1,*fp2,*fp3;
	
	fp1 = fopen("first.txt","w");
	fprintf(fp1,"This is my first file\n");
	fclose(fp1);
	
	fp2 = fopen("second.txt","w");
	fprintf(fp2,"This is my second file\n");
	fclose(fp2);
	
	fp3 = fopen("third.txt","w");
	fprintf(fp3,"This is my third file\n");
	fclose(fp3);
	
	printf("\nOperation successful");
	return 0;
}
