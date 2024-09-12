#include<iostream>
using namespace std;
class Student
{
	public :
		int roll;
		string name;
		int marks1;
		int marks2;
		int total;
		Student(int roll,string name,int marks1,int marks2)
		{
			this->roll = roll;
			this->name = name;
			this->marks1 = marks1;
			this->marks2 = marks2;
		}
		void grade()
		{
			total = marks1 + marks2;
			if(total>150)
			{
				cout<<"\nGrade A";
			}
			else
			{
				cout<<"\nGrade B";
			}
		}
};
class Address
{
	private :
		string address;
		Student *ref;
	public :
		Address(string address,Student *ref)
		{
			this->address = address;
			this->ref = ref;
		}
		void display()
		{
			cout<<"\n"<<ref->name<<"--->"<<address;
		}
};
int main()
{
	Student s1(101,"Rahul",75,80);
	Address a1("Ambavadi, Ahmedabad",&s1);
	a1.display();
	
	Student s2(102,"Savan",45,78);
	Address a2("Vastral,Ahmedabad",&s2);
	a2.display();
	
	Student s3(103,"Manav",78,45);
	Address a3("Vastrapur,Ahmedabad",&s1);
	a3.display();

	return 0;
}
