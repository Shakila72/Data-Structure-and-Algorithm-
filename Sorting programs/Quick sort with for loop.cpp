// Quick sort/Partition Exchange sort in Ascending order

#include<iostream>
using namespace std;
// Parition function
int Partition(int a[],int s,int e)
{
	int Pivot=a[e];
	int pindex=s;

	for(int i=s;i<e;i++)
	{
	if(a[i]<Pivot)
	{
	int t;
	t=a[i];
	a[i]=a[pindex];
	a[pindex]=t;
	pindex++;
		
	}
		
	}
	int t;
	t=a[e];
	a[e]=a[pindex];
	a[pindex]=t;
	return pindex;
	
}
//Quick sort recursive function
void Quick_sort(int a[],int s,int e) 
//s is start like 0,e is end like size-1 of array
{
if (s<e)
{
	int value;
	value=Partition( a, s, e);
	Quick_sort(a, s, value-1); // recursive QS call for left partition
	Quick_sort(a, value+1, e);  // recursive QS call for right  partition

	
}
	
}

int main()
{

int a[5];
cout<<"Enter 5 elements for sorting "<<endl;
for (int n=0;n<5;n++)
{
	cin>>a[n];
	
}
cout<<"Before Quick Sort "<<endl;
for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";

Quick_sort( a,0,4); // Quick sort function called
cout<<"After Quick Sort  "<<endl;

for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
return 0;
}


   
// Time complexity in worst case =o(n^2)
 
// Time compexity for average/best case O(nlogn)
// it is better than other sorting methods

