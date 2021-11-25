//Bubble sort in Ascending order
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
			if(a[j]>a[j+1])
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
int size=10;
int a[10]={40,22,13,5,15,6,17,2,11,9};

cout<<"Elements Before Bubble Sort "<<endl;
for (int n=0;n<10;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";
Bubble_Sort(a,  size) ;
cout<<"After Bubble Sort in Ascending "<<endl;

for (int n=0;n<10;n++)
{
	cout<<a[n]<<" ";
	
}

return 0;

}
// Best case when array is already sorted time complexity is o(n)
// worst case when array is in descending order time complexity is o(n^2)

