#include<iostream>
using namespace std;
//friend function
class Demo
{
	private :
		int x = 10;
		string s = "I am Private";
	public :
		friend void display(Demo &obj);
};
void display(Demo &obj)
{
	cout<<"\nValue of x = "<<obj.x;
	cout<<"\nValue of s = "<<obj.s;
}
int main()
{
	Demo d1;
	display(d1);
	return 0;
}
