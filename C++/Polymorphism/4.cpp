#include<iostream>
using namespace std;
//function overriding
class Parent1
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Parent2
{
	public :
		void display()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent1,public Parent2
{
	public :
		void display()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		void display()
		{
			cout<<"\nHello from Grand Child class";	
		}	
};
int main()
{
	Parent p1;
	p1.display();
	Child c1;
	c1.display();
	GrandChild gc1;
	gc1.display();
	return 0;
}
