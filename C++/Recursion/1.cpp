#include<iostream>
using namespace std;
int display()//recursive function
{
	static int num = 5;
	if(num!=0)
	{
		cout<<"\nFunction called";
		num--;
		display();
	}
	return 0;
}
int main()
{
	display();
	return 0;
}
