#include<iostream>
#include<fstream>
//ofstream ---> write or create
//ifstream ---> read
using namespace std;
int main()
{
	string text;
	ifstream MyFile("TreasureHunt-2024.txt");
	while(getline(MyFile,text))
	{
		cout<<text;
	}
	return 0;
}
