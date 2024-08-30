#include<iostream>
using namespace std;
//copy constructor
class Demo
{
	public :
		int num1;
		int num2;
		Demo(int x,int y)//parameterized constructor
		{
			cout<<"\nParameterized constructor called";
			cout<<"\nValue of x = "<<x;	
			cout<<"\nValue of y = "<<y;
			num1 = x;
			num2 = y;
		}	
};
int main()
{
	Demo d1(10,20);
	Demo d2(d1);
	cout<<"\nValue carried by d2 = "<<d2.num1<<" and "<<d2.num2;
	Demo d3 = d1;
	cout<<"\nValue carried by d3 = "<<d3.num1<<" and "<<d3.num2;
	return 0;
}
