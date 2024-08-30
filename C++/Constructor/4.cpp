#include<iostream>
using namespace std;
class Demo
{
	public :
		int x;
		int y;
		Demo()
		{
		}	
		Demo(Demo &obj)
		{
			cout<<"\nCopy costructor called";
			x = obj.x;
			y = obj.y;
		}
};
int main()
{
	Demo d1;
	d1.x = 10;
	d1.y = 20;
	Demo d2;
	d2.x = 30;
	d2.y = 40;
	
	cout<<"\nValue carried by d1 = "<<d1.x<<" and "<<d1.y;
	cout<<"\nValue carried by d2 = "<<d2.x<<" and "<<d2.y;
	
	Demo d3(d2);
	
	cout<<"\nValue carried by d3 = "<<d3.x<<" and "<<d3.y;
	
	return 0;
}
