#include<iostream>
using namespace std;
//multiple inheritance
class Parent1
{
	public :
		Parent1()
		{
			cout<<"\nHello from Parent1 class";
		}
};
class Parent2
{
	public :
		Parent2()
		{
			cout<<"\nHello from Parent2 class";
		}
};
class Child : public Parent1,public Parent2
{
	public :
		Child()
		{
			cout<<"\nHello from Child class";
		}
};
int main()
{
	cout<<"\nParent1 class Object created";
	Parent1 p1;
	
	cout<<"\n\nParent2 class Object created";
	Parent2 p2;
	
	cout<<"\n\nChild class Object created";
	Child c;
	return 0;
}
