#include<iostream>
using namespace std;
class Demo
{
	public :
	int num1 = 10;
	int num2 = 20;	
};
int main()
{
	Demo d1;
	cout<<"\nValue of num1 = "<<d1.num1;
	cout<<"\nValue of num2 = "<<d1.num2;
	return 0;
}
