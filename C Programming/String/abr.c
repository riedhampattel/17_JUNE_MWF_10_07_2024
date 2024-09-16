#include<stdio.h>
int main()
{
	char schname[100],abr[100];
	int j=0,i;
	printf("\nEnter the string = ");
	gets(schname);
	
	for(i=0;schname[i]!='\0';i++)
	{
		if((i==0 || schname[i-1] == ' ') && schname[i]!=' ')
		{
			abr[j] = schname[i];
			j++;
		}
	}
	
	printf("\nOriginal String = %s",schname);
	printf("\nAbbrivated  school name = %s",strupr(abr));
	
	return 0;
}
