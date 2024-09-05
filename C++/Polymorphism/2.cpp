#include<iostream>
using namespace std;
//function overloading
class Shape
{
	public :
		void shape(string name,double radius)//circle
		{
			cout<<"\nArea of "<<name<<" is = "<<3.14*(radius*radius);
		}
		void shape(string name,int side)//square
		{
			cout<<"\nArea of "<<name<<" is = "<<side*side;
		}
		void shape(string name,int l,int b,int h)//cube
		{
			cout<<"\nVolume of "<<name<<" is = "<<l*b*h;
		}
		void shape(string name,int l,int b)//rectangle
		{
			cout<<"\nArea of "<<name<<" is = "<<l*b;
		}
		void shape(int b,int h,string name)//triangle
		{
			cout<<"\nArea of "<<name<<" is = "<<0.5*(b*h);
		}
};
int main()
{
	Shape s1;
	s1.shape("circle",4.65);
	s1.shape("square",4);
	s1.shape("cube",4,5,6);
	s1.shape("rectangle",7,8);
	s1.shape(4,5,"triangle");
	return 0;
}
