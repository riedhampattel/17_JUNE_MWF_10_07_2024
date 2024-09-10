#include<iostream>
using namespace std;
class Shape//abstract class or Base class
{
    public :
        virtual void draw()
        {
            cout<<"\nBase class";
        }
};
class Circle : public Shape//derived class
{
    public :
        void draw()
        {
            cout<<"\nDrawing circle";
        }
};
class Square : public Shape
{
    public :
        void draw()
        {
            cout<<"\nDrawing square";
        }
};
int main()
{
    Shape s1;
    Circle c1;
    c1.draw();
    s1.draw();
    return 0;
}