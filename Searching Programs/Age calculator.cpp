#include<iostream>
using namespace std;
struct date
{

	int day;
	int month;
	int year;
	
};
int main()
{
date today,dob,age;
cout<<"Enter todays date {dd mm yy} : "<<endl;
cin>>today.day>>today.month>>today.year;
cout<<"Enter date of birth {dd mm yy} : "<<endl;
cin>>dob.day>>dob.month>>dob.year;
age.day=today.day-dob.day;
age.month=today.month-dob.month;
age.year=today.year-dob.year;

if(age.month<0)
{
	age.year--;
	age.month+=12;
}
if(age.day<0)
{
	age.month--;
	age.day+=30;
}
cout<<"Age is "<<age.year<<" years "<<age.month<<" months "<<age.day<<" days ";
return 0;
}
