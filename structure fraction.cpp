#include<iostream>
using namespace std;
struct fraction
{
int n;
int d;
} ;

int main()
{
int n1, d1;
int n2, d2;

cout<<"Enter fraction 1 (numerator and denominator ):";
cin>>n1>>d1;

cout<<"Enter fraction 2 (numerator and denominator ):";
cin>>n2>>d2;

fraction f1={n1,d1};
fraction f2={n2,d2};
fraction r={f1.n*f2.d+f2.n*f1.d, f1.d*f2.d};
cout<<r.n<<"/"<<r.d<<endl;


return 0;
}
