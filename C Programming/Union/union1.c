#include<stdio.h>
union Demo
{
	int num1;
	int num2;
	char ch;	
};
int main()
{
	union Demo d1;
	d1.num1 = 65;
	d1.ch = 'B';
	d1.num1 = 97;
	printf("\nValue of num1 = %d",d1.num1);
	printf("\nValue of num2 = %d",d1.num2);
	printf("\nValue of char = %c",d1.ch);
	return 0;
}
