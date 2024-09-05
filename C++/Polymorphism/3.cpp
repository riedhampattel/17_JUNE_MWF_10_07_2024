#include<iostream>
using namespace std;
//operator overloading
class Complex
{
	private :
		int real;
		int imag;
	public :
		Complex()
		{
			real = 0;
			imag = 0;
		}
		Complex(int r,int i)
		{
			real = r;
			imag = i;
		}
		void display()
		{
			cout<<"\nValue of real = "<<real;
			cout<<"\nValue of imag = "<<imag<<endl;
		}
		Complex operator+(Complex obj)
		{
			Complex temp;
			temp.real = real + obj.real;
			temp.imag = imag + obj.imag;
			return temp;
		}
};
int main()
{
	int x = 10;
	int y = 20;
	int z = x + y;
	cout<<"\nValue of result = "<<z;
	
	Complex c1(10,20);
	Complex c2(20,30);
	
	c1.display();
	c2.display();
	
	Complex c3;
	c3.display();
	
	Complex c4 = c1 + c2;
	c4.display();

	return 0;
}
