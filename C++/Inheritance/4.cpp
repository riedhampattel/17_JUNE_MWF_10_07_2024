#include<iostream>
using namespace std;
//hierarchecal inheritance
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
int main()
{
	cout<<"\nParent class Object created";
	Parent p;
	
	cout<<"\n\nChild1 class Object created";
	Child1 c1;
	
	cout<<"\n\nChild2 class Object created";
	Child2 c2;
	return 0;
}
