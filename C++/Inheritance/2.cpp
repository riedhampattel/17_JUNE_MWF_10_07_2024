#include<iostream>
using namespace std;
//multilevel inheritance
class Parent
{
	public :
		Parent()
		{
			cout<<"\nHello from Parent class";
		}
};
class Child : public Parent
{
	public :
		Child()
		{
			cout<<"\nHello from Child class";
		}
};
class GrandChild : public Child
{
	public :
		GrandChild()
		{
			cout<<"\nHello from Grand Child class";
		}
};
int main()
{
	cout<<"\nParent class Object creatred";
	Parent p;
	cout<<"\n\nChild class Object created";
	Child c;
	cout<<"\n\nGrandChild class Object created";
	GrandChild gc;
	return 0;
}
