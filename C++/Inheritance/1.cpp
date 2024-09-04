#include<iostream>
using namespace std;
//simple inheritance
class Parent//Base class
{
	public :
		int x = 10;
		Parent()
		{
			cout<<"Hello This is Parent class";
		}
};
class Child : public Parent //derived class
{
	
};
int main()
{
	Child c1;
	cout<<"\nValue of x = "<<c1.x;
	return 0;
}
