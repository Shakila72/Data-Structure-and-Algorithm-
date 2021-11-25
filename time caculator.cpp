#include<iostream>
using namespace std;
struct time
{
	int hour;
	int minute;

};
int main()
{
time start,end,duration;
cout<<"Enter start time {hours & minutes} : "<<endl;
cin>>start.hour>>start.minute;
cout<<"Enter end time  {hours & minutes} : "<<endl;
cin>>end.hour>>end.minute;
duration.hour=end.hour-start.hour;
duration.minute=end.minute-start.minute;

if(duration.minute<0)
{
	duration.hour--;
	duration.minute+=60;
}

if(duration.hour<0)
{

	duration.hour+=12;
}
cout<<"duration is "<<duration.hour<<" hour "<<duration.minute<<" minutes ";
return 0;
}

