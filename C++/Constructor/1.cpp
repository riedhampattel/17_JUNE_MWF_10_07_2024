#include<iostream>
using namespace std;
//default constructor
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nDefault constructor called";
		}
};
int main()
{
	Demo d1;
	cout<<"\nObject 1 created successfully";
	Demo d2;
	cout<<"\nObject 2 created successfully";
	return 0;
}
