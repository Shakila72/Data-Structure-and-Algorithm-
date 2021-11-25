#include<iostream>
using namespace std;
int main ()
{
	int a[10]={1,23,34,2,3,5,4,6,8,9};
	for(int i=0;i<10;i++)
	{
	if(a[i]%2==0)
	{
		
		cout<<"["<<i+1<<"] : "<<a[i]<<endl;
	}
		
		
	}
	
	return 0;
}
