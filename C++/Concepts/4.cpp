#include<iostream>
using namespace std;
class Demo
{
    public :
        string name;
        double cgpa;
        Demo(string name,double cgpa)
        {
            this->name = name;
            this->cgpa = cgpa;
        }
        void display()
        {
            cout<<"\nName := "<<name;
            cout<<"\nCGPA := "<<cgpa;
        }
};
int main()
{
    Demo d1("Rahul",7.2);
    Demo d2(d1);
    d1.display();
    d2.display();
    d2.cgpa = 9.5;
    d1.display();
    d2.display();
    return 0;
}