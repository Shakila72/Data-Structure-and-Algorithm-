#include<iostream>
using namespace std;
int main ()
{
	int a[10]={1,3,4,2,3,5,4,6,8,9};
	for(int i=0;i<10;i++)
	{
	
	
		
		cout<<"["<<i+1<<"] : "<<a[i]<<endl;
	
		
		
	}
	int sum=0;
	for(int j=0;j<10;j++)
	{
		sum+=a[j];
	}
	cout<<"sum is "<<sum;
	return 0;
}
