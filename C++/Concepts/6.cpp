#include<iostream>
using namespace std;
//deep copy
class Demo
{
    public :
        string name;
        double *cgpaptr;
        Demo(string name,double cgpa)
        {
            this->name = name;
            cgpaptr = new double;
            *cgpaptr = cgpa;
        }
        Demo(Demo &obj)
        {
            this->name = obj.name;
            cgpaptr = new double;
            *cgpaptr = *obj.cgpaptr;
        }
        void display()
        {
            cout<<"\nName := "<<name;
            cout<<"\nCGPA := "<<*cgpaptr;
        }
};
int main()
{
    Demo d1("Rahul",7.2);
    Demo d2(d1);
    d1.display();
    d2.display();
    *d2.cgpaptr = 9.5;
    d1.display();
    d2.display();
    return 0;
}