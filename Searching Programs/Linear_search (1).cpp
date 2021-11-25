#include<iostream>
using namespace std;
bool search( a[], int max, int key)
{
	for(int i=0;i<max;i++)
	{
		if(a[i]==key)
		{
			return 1;
		}
	}
	 return 0;
}
int main()
{
	int a[5]={3,5,9,1,23};
	int n;
	cout<<"Enter a value to search";
	cin>>n;
	if(search(a,5,n))  //if(1)
	{
		cout<<"Value exists";
	}
	else 
		cout<<"Value does not exist";

return 0;
}
