#include<iostream>
using namespace std;
struct dist
{
	int feet;
	int inches;

};
int main()
{
 dist d1,d2,sum,diff;
cout<<"\tEnter distance d1 {feets & inches} : "<<endl;
cin>>d1.feet>>d1.inches;
cout<<"\tEnter distance d2  {feets & inches} : "<<endl;
cin>>d2.feet>>d2.inches;
diff.feet=d1.feet-d2.feet;
diff.inches=d1.inches-d2.inches;

if(diff.inches<0)
{
	diff.feet--;
	diff.inches+=12;
}
if(diff.inches>=12)
{
diff.inches-=12;
	diff.feet++;
}


sum.feet=d1.feet+d2.feet;
sum.inches=d1.inches+d2.inches;


if(sum.inches>=12)
{
sum.inches-=12;
	sum.feet++;
}
cout<<"\tdiff is "<<diff.feet<<" feet "<<diff.inches<<" inches\n ";
cout<<"\n\tsum is "<<sum.feet<<" feet "<<sum.inches<<" inches ";
return 0;
}
