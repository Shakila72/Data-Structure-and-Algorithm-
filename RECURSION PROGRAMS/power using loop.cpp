#include<iostream>
using namespace std;
int Power(int x, int n)
{
	int power=1;
	for(int i=0;i<n;i++)
	power=power*x;
	return  power;
}

int main()
{
cout<<Power(3,3)<<endl;
	cout<<Power(4,2);


}



