#include<iostream>
using namespace std;
int main()


{


int h, m, minutes=0;
cout<<"Enter time {hours & minutes} : "<<endl;
cin>>h>>m;
cout<<"Enter minutes to add : ";
cin >>minutes;
int sum=m+minutes;


if(h>12)
{
	h=0+1;
}
if(sum>=60)
{
	sum=0;
	h+=1;
}
cout<<"Added time is : "<<h<<":"<<sum<<endl;
}

