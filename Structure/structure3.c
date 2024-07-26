#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s[100];
	int count,i;
	printf("\nEnter the count for loop = ");
	scanf("%d",&count);
	for(i=0;i<count;i++)
	{
		printf("\nEnter the roll no. for s%d = ",i+1);
		scanf("%d",&s[i].roll);
		printf("\nEnter the percentage for s%d = ",i+1);
		scanf("%f",&s[i].percentage);
		printf("\nEnter the grade for s%d = ",i+1);
		scanf(" %c",&s[i].grade);
	}
	for(i=0;i<count;i++)
	{
		printf("\nRoll no. for s%d = %d",i+1,s[i].roll);
		printf("\nPercentage for s%d = %.2f",i+1,s[i].percentage);
		printf("\nGrade for s%d = %c",i+1,s[i].grade);
	}
	
	return 0;
}
