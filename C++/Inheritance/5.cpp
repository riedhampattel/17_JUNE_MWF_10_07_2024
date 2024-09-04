#include<iostream>
using namespace std;
//hybrid inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child1 : public Parent
{
	public :
		Child1()
		{
			cout<<"\nHello from Child1 class";
		}
};
class Child2 : public Parent
{
	public :
		Child2()
		{
			cout<<"\nHello from Child2 class";
		}
};
class GrandChild1 : public Child1
{
	public :
		GrandChild1()
		{
			cout<<"\nHello from Grand Child 1 class";
		}
};
class GrandChild2 : public Child2
{
	public :
		GrandChild2()
		{
			cout<<"\nHello from Grand Child 2 class";
		}
};
int main()
{
	cout<<"\nParent class Object created";
	Parent p;
	
	cout<<"\n\nChild1 class Object created";
	Child1 c1;
	
	cout<<"\n\nChild2 class Object created";
	Child2 c2;
	
	cout<<"\n\nGrandChild1 class Object created";
	GrandChild1 gc1;
	
	cout<<"\n\nGrandChild2 class Object created";
	GrandChild2 gc2;
	
	return 0;
}
