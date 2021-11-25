#include<iostream>
using namespace std;
int power(int x, int n)
{
	if(n!=1)  // recursive call
	return x* power(x,n-1);

	else  // base case
	return x;
	
	}
int main()
{

	cout<<power(3,3)<<endl;
	cout<<power(4,2);

	return 0;
}



