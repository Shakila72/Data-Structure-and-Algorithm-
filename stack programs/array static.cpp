/*Q.which error compiler show when we intialize more values in a static array 
than our reversed memory?*/
#include<iostream>
using namespace std;
int main()
{
	int a[5];
	for(int j=0;j<6;j++)
{
	cout<<"Enter a number";
	cin>>a[j];
}
	for (int i=0;i<7;i++)
	{
		cout<<a[i];
	}
	
}
/*this program gives the error two many initializers for 'int [5]'
We are storing more values than the reserved memory of array.
Reserved memory is 5 and we are storing 6 values so the error comes.*/
