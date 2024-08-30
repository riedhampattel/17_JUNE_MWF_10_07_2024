#include<iostream>
using namespace std;
//parameterized constructor
class Demo
{
	public :
		Demo(int x,int y)//parameterized constructor
		{
			cout<<"\nValue of x = "<<x;	
			cout<<"\nValue of y = "<<y;
		}	
};
int main()
{
	Demo d1(10,20);
	return 0;
}
