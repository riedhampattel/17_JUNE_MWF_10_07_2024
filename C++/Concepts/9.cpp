#include<iostream>
using namespace std;
class Demo
{
    public :
        virtual void draw() = 0;//pure virtual function
};
class Circle : public Demo
{
    public :
        void draw()
        {
            cout<<"\nDrawing circle";
        }
};
int main()
{
    Demo *d1;
    Circle c1;
    d1 = &c1;
    c1.draw();
    return 0;
}