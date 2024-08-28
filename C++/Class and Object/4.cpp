//Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
#include<iostream>
using namespace std;
class Circle
{
	private :
		double radius;
	public :
		void setdata(double r)
		{
			radius = r;
		}
		double area()
		{
			double resulta;
			resulta = 3.14 * (radius*radius);
			return resulta;
		}
		double crm()
		{
			double resultc;
			resultc = 2 * (3.14 * radius);
			return resultc;
		}	
};
int main()
{
	Circle c1;
	double radius;
	cout<<"\nEnter the value of radius = ";
	cin>>radius;
	c1.setdata(radius);
	cout<<"\nArea of Circle is = "<<c1.area();
	double result = c1.crm();
	cout<<"\nCircumference of Circle is = "<<result;
	return 0;
}
