// Selection sort in Descending order
#include<iostream>
using namespace std;
void selectionSort(int arr[], int size) 
{ 
   int i, j, t, max; 
   for (i = 0; i < size; i++) 
   { 
      max = i; 
      for (j = i + 1; j < size; j++) 
	  { 
         if (arr[j] > arr[max]) 
		 { 
            max = j; } 
      } 
      t=arr[max]; 
      arr[max] = arr[i]; 
      arr[i] = t; 
      cout<<arr[i]<<" ";
    } 
} 

int main()
{
int size =10;
int arr[size];
cout<<"Enter 10 for sorting elements "<<endl;
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

cout<<"Elements after Selection Sort in Descending order "<<endl;
selectionSort( arr, size) ;
return 0;
}

