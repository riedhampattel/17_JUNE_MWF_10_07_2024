#include<iostream>
using namespace std;
class Demo
{
	int n1,n2;
	public :
		Demo(int x,int y)
		{
			//para constructor
			n1 = x;
			n2 = y;
		}
		Demo(Demo &obj)
		{
			//copy constructor
			n1 = obj.n1;
			n2 = obj.n2;
		}
		void display()
		{
			cout<<"\nValue of n1 = "<<n1;
			cout<<"\nValue of n2 = "<<n2;
		}
};
int main()
{
	Demo d1(10,20);
	d1.display();
	Demo d2(d1);
	d2.display();
	return 0;
}
