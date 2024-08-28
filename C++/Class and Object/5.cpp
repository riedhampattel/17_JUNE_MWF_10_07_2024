//Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
#include<iostream>
using namespace std;
class Person
{
	private :
		string name;
		int age;
		string country;
	public :
		void setdata(string n,int a,string c)
		{
			name = n;
			age = a;
			country = c;
		}
		void getdata()
		{
			cout<<"\nName = "<<name;
			cout<<"\nAge = "<<age;
			cout<<"\nCountry = "<<country;
		}
};
int main()
{
	Person p1,p2,p3;
	p1.setdata("Rahul",45,"India");
	p2.setdata("Steven",25,"UK");
	p3.setdata("Mayur",50,"China");
	
	p1.getdata();
	p2.getdata();
	p3.getdata();
	
	return 0;
}
