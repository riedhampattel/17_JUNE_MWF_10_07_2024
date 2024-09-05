#include<iostream>
using namespace std;
class Demo
{
	private :
		int id;
		string name;
	public :
		Demo(int id,string name)
		{
			this->id = id;
			this->name = name;
		}
		void display()
		{
			cout<<"\nId = "<<id;
			cout<<"\nName = "<<name;
		}
};
int main()
{
	Demo d1(101,"Rahul");
	d1.display();
	Demo d2(102,"Shyam");
	d2.display();
	return 0;
}
