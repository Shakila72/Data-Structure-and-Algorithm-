#include<iostream>

using namespace std;
int main()
{
float x,y,z;
cout<<"enter three flaot numbers x and y and z \n";
cin>>x>>y>>z;
if(x>y && x>z)
cout<<"x is larger"<<x;
else if(y>x && y>z)
cout<<"y is larger"<<y;
else if(z>y && z>x)
cout<<"z is larger"<<z;
system("pause");
}
