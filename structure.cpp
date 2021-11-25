#include<iostream>
using namespace std;
struct complex
{
	float  real;
	float img;
	
};
int main()
{
	complex a,b, s1,s2;
	cout<<"Enter real amd imaginary part of 1st complex number "<<endl;
	cin>>s1.real>>s1.img;
	cout<<"Enter real amd imaginary part of 2nd complex number "<<endl;
	cin>>s2.real>>s2.img;
	//add;
	a.real=(s1.real)+(s2.real);
	b.img=(s1.img)+(s2.img);
	cout<<a.real<<" "<<b.img;
	//subtract;
	a.real=(s1.real)-(s2.real);
	b.img=(s1.img)-(s2.img);
	cout<<a.real<<" "<<b.img;
	
//	multiply;
	a.real=(s1.real)*(s2.real);
	b.img=(s1.img)*(s2.img);
	cout<<a.real<<" "<<b.img;
	//divide;
	a.real=(s1.real)/(s2.real);
	b.img=(s1.img)/(s2.img);
	cout<<a.real<<" "<<b.img;
	
	return 0;
}

