#include<stdio.h>
struct Student
{
	int roll;
	float percentage;
	char grade;
};
int main()
{
	struct Student s1,s2;
	s1.roll=101;
	s1.percentage=98.8;
	s1.grade='A';
	printf("\nRoll no for s1 = %d",s1.roll);
	printf("\nPercentage no for s1 = %.2f",s1.percentage);
	printf("\nGrade no for s1 = %c",s1.grade);
	
	s2.roll=102;
	s2.percentage=58.2;
	s2.grade='B';
	printf("\nRoll no for s2 = %d",s2.roll);
	printf("\nPercentage no for s2 = %.2f",s2.percentage);
	printf("\nGrade no for s2 = %c",s2.grade);
	return 0;
}
