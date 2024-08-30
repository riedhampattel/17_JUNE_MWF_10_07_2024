#include<iostream>
using namespace std;
int main()
{
	string food = "Pizza";
	string &item = food;
	
	item = "Noodles";
	
	cout<<"\nValue of item = "<<item;
	cout<<"\nAddress of item = "<<&item<<endl;
	
	cout<<"\nValue of food = "<<food;
	cout<<"\nAddress of food = "<<&food;
	
	return 0;
}
