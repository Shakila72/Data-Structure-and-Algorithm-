// Merge sort using recursion in Descending order
#include<iostream>
using namespace std;
// merge function
void Merge(int a[],int lb,int mid,int ub)
{
	int i=lb;
	int j=mid+1;
   int k=lb;

  int b[5];  // array for sorting
	
	while(i<=mid && j<=ub)
	{
		if(a[i]>=a[j]) 
		{
			b[k]=a[i];
			i++;
			
		}
		
		else
		{
			b[k]=a[j];
			j++;
			
		}
		k++;
		
	}
	
		while(i<=mid) // coping all elements from left sub array to b as it is
	{
	
		b[k]=a[i];
		i++;
		k++;
		
	}
	
	while(j<=ub)   // coping all elements from right sub array to b as it is
	{
		
		b[k]=a[j];
		j++;
		k++;
		
	}
	
	
	for(k=lb;k<=ub;k++)
	 // coping all elements from b[k] to a[i] original array
	{
		a[k]=b[k];
	}
}
//merge sort recursive function
void Merge_sort(int a[],int lb,int ub) 
//lb is lower bound like 0, up is upper bound like maximum size of array
{
if (lb<ub)
{
	int mid=(lb+ub)/2;
	Merge_sort( a, lb, mid);
	Merge_sort(a, mid+1, ub);
	Merge( a, lb, mid, ub);
	
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
cout<<"Before Merge Sort "<<endl;
for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";

Merge_sort( a,0,4);
cout<<"After Merege Sort  "<<endl;

for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
return 0;
}




