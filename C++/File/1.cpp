#include<iostream>
#include<fstream>
//ofstream ---> write or create
//ifstream ---> read
using namespace std;
int main()
{
	ofstream MyFile("first.txt");
	MyFile<<"\nThis is my third file";
	MyFile.close();
	cout<<"\nOperation successful";
	return 0;
}
