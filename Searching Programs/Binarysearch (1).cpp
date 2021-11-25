#include<iostream>
using namespace std;
bool binarySearch(int a[], int first, int last, int key)
{
	int mid=(first+last)/2;
	if(first>last)
		return 0;
	else if(a[mid]== key)
		return 1;
	else if(a[mid]>key)
		return binarySearch(a,first,mid-1,key);
	else
		return binarySearch(a, mid+1, last, key);
}
int main()
{
	int a[5]={3,5,9,1,23};
	int n;
	cout<<"Enter a value to search";
	cin>>n;
	if(binarySearch(a,0,5,n))  //if(1)
	{
		cout<<"Value exists";
	}
	else 
		cout<<"Value does not exist";

return 0;
}
