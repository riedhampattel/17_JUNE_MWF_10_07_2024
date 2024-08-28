#include<iostream>
using namespace std;
class Demo
{
	private :
		int num1 = 10;
		int num2 = 20;
	public :
		void display()
		{
			cout<<"\nValue of num1 = "<<num1;
			cout<<"\nValue of num2 = "<<num2;	
		}	
};
int main()
{
	Demo d1;
	d1.display();
	return 0;
}
