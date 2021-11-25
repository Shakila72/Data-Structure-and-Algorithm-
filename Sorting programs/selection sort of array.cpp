// Selection sort in Ascending order
#include<iostream>
using namespace std;
void selectionSort(int arr[], int size) 
{ 
   int i, j, t, min; 
   for (i = 0; i < size; i++) 
   { 
      min = i; 
      for (j = i + 1; j < size; j++) 
	  { 
         if (arr[j] < arr[min]) 
		 { 
            min = j; } 
      } 
      t=arr[min]; 
      arr[min] = arr[i]; 
      arr[i] = t; 
      cout<<arr[i]<<" ";
    } 
} 

int main()
{
int size =10;
int arr[size];
cout<<"Enter 10 elements for sorting "<<endl;
for (int n=0;n<=10;n++)
{
	cin>>arr[n];
	
}
cout<<"Elements Before Selection Sort "<<endl;
for (int n=0;n<10;n++)
{
	cout<<arr[n]<<" ";
	
}
cout<<"\n";

cout<<"Elements after Selection Sort in Ascending order "<<endl;
selectionSort( arr, size) ;
return 0;
}

