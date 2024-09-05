#include<iostream>
using namespace std;
//constructor overloading
class Shape
{
	public :
		Shape(string name,double radius)//circle
		{
			cout<<"\nArea of "<<name<<" is = "<<3.14*(radius*radius);
		}
		Shape(string name,int side)//square
		{
			cout<<"\nArea of "<<name<<" is = "<<side*side;
		}
		Shape(string name,int l,int b,int h)//cube
		{
			cout<<"\nVolume of "<<name<<" is = "<<l*b*h;
		}
		Shape(string name,int l,int b)//rectangle
		{
			cout<<"\nArea of "<<name<<" is = "<<l*b;
		}
		Shape(int b,int h,string name)//triangle
		{
			cout<<"\nArea of "<<name<<" is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1("circle",4.65);
	Shape s2("square",5);
	Shape s3("cube",4,5,6);
	Shape s4("rectangle",4,5);
	Shape s5(4,5,"triangle");
	return 0;
}
