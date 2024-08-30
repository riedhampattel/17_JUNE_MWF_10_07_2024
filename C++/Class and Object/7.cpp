//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.
#include<iostream>
using namespace std;
class Date
{
	private :
		int day;
		string month;
		int year;
	public :
		int temp = 0;
		void setdata(int d,int m,int y)
		{
			if((y%4==0) && (d>=1 && d<=29) && m==2)
			{
				day = d;
				month = "February";
				year = y;	
			}
			else if((y%4!=0) && (d>=1 && d<=28) && m==2)
			{
				day = d;
				month = "February";
				year = y;
			}
			else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
			{
				day = d;
				switch(m)
				{
					case 4:
						month = "April";
					break;
					case 6:
						month = "June";
					break;
					case 9:
						month = "September";
					break;
					case 11:
						month = "November";
					break;
				}
				year = y;
			}
			else if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
			{
				day = d;
				switch(m)
				{
					case 1 :
						month = "January";
					break;
					case 3 :
						month = "March";
					break;
					case 5 :
						month = "May";
					break;
					case 7 :
						month = "July";
					break;
					case 8 :
						month = "August";
					break;
					case 10 :
						month = "October";
					break;
					case 12 :
						month = "December";
					break;
				}
				year = y;
			}
			else
			{
				temp++;
			}
		}
		void getdata()
		{
			if(temp==0)
			{
				cout<<"\nDate = "<<day<<"-"<<month<<"-"<<year;	
			}
			else
			{
				cout<<"\nInvalid date format";
			}
		}
};
int main()
{
	Date d1;
	int day,month,year;
	cout<<"\nEnter the date = ";
	cin>>day;
	cout<<"\nEnter the month = ";
	cin>>month;
	cout<<"\nEnter the year = ";
	cin>>year;
	d1.setdata(day,month,year);
	d1.getdata();
	return 0;
}
