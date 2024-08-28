#include<iostream>
using namespace std;
class Demo
{
	//private is a default access specifier 
		int num1;
		int num2;
	public :
		void setdata(int n1,int n2)//setter
		{
			num1 = n1;
			num2 = n2;
		}
		void getdata()//getter
		{
			cout<<"\nValue of num1 = "<<num1;
			cout<<"\nValue of num2 = "<<num2;
		}
};
int main()
{
	Demo d1;
	int n1,n2;
	cout<<"\nEnter the value of n1 = ";
	cin>>n1;
	cout<<"\nEnter the value of n2 = ";
	cin>>n2;
	d1.setdata(n1,n2);
	d1.getdata();
	return 0;
}
