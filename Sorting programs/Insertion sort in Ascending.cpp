// Insertion sort in Ascending order
#include<iostream>
using namespace std;
void insertionSort(int a[], int size) 
 {
    int i, j, temp=0;
for(i = 1; i < size; i++)// i=1 because we take unsorted array for comparing
	{
         temp = a[i];
         j = i - 1;
         while( j >= 0 && a[ j ] > temp) 
	    {
             a[j + 1] = a[ j ];
             j--;
         }
         a[j + 1] = temp;
         
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
cout<<"Elements Before Insertion Sort "<<endl;
for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";
insertionSort( a, size) ;

cout<<"After Insertion Sort in Ascending "<<endl;
for (int n=0;n<5;n++)
{
	cout<<a[n]<<" ";
	
}

return 0;

}

