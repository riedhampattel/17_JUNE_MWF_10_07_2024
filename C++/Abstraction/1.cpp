#include<iostream>
using namespace std;
//abstraction
class Parent//base class
{
	private ://within the class
		int x = 10;
		string s1 = "Private";
	protected ://within the class or in derived class
		int y = 20;
		string s2 = "Protected";
	public ://within the class or outside the class
		int z = 30;
		string s3 = "Public";
		void display()
		{
			cout<<"\nValue of x = "<<x;
			cout<<"\nValue of s1 = "<<s1;
		}
};
class Child : public Parent//derived class
{
	public :
		void display()
		{
			cout<<"\nValue of y = "<<y;
			cout<<"\nValue of s2 = "<<s2;
		}
		
};
int main()
{
//	can not access as x and s1 are private data members and it has scope within the class
//	Parent p1;
//	cout<<"\nValue of x = "<<p1.x;
//	cout<<"\nValue of s1 = "<<p1.s1;

//	can not access as y and s2 are protected data members and it has scope within the class or in derived class
//	Parent p2;
//	cout<<"\nValue of y = "<<p2.y;
//	cout<<"\nValue of s2 = "<<p2.s2;

//	can not access as y and s2 are protected data members and it has scope within the class or in derived class
//	Child c1;
//	cout<<"\nValue of y = "<<c1.y;
//	cout<<"\nValue of s2 = "<<c1.s2;	

	Child c2;
	c2.display();
	
	Parent p3;
	cout<<"\nValue of z = "<<p3.z;
	cout<<"\nValue of s3 = "<<p3.s3;
	
	p3.display();
	
	return 0;
}
