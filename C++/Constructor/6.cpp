#include<iostream>
using namespace std;
class Demo
{
	public :
		Demo()//default constructor
		{
			cout<<"\nObject created successfully";
		}
		~Demo()//destructor
		{
			cout<<"\nObject Destroyed successfully";
		}
};
int main()
{
	Demo d1;
	cout<<"\nIf Starts";
	if(1)
	{
		Demo d2;
	}
	cout<<"\nIf ends";
	return 0;
}
