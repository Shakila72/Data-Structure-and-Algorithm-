//Bubble sort in Descending order
#include<iostream>
using namespace std;
void Bubble_Sort(int a[], int size) 
{
	 bool flag=0;
	int i,j,t;
	for (i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(a[j]<a[j+10])
			{
				
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
				
				
			}
			
		}
		if(flag==0)
		break;
	}
}
int main()
{
int size =5;
int a[size];
cout<<"Enter 5 elements for sorting "<<endl;
for (int n=0;n<5;n++)
{
	cin>>a[n];
	
}
cout<<"Elements Before Bubble Sort "<<endl;
for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";
Bubble_Sort(a,  size) ;
cout<<"After Bubble Sort in Descending"<<endl;

for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}

return 0;

}


