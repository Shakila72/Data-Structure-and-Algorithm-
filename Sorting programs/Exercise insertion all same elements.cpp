/* Insertion sort in Ascending order
Exercise question 7.2 Time for implementation of insertion sort 
when all the elements are same like we pass 
elements 2,2,2,2,2.*/
#include<iostream>
using namespace std;
void insertionSort(int a[], int size) 
 {
    int i, j, temp;
    for(i = 1; i < size; i++) 
	{
         temp = a[i];
         for (j = i - 1; j >= 0 && a[ j ] > temp; j--) 
	    {
             a[j + 1] = a[ j ];
             
         }
         a[j + 1] = temp;
         
     }
 }

int main()
{
int size =5;
int a[size]={2,2,2,2,2};

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
/* when all elements are same insertion sort takes 1.5 seconds 
to execute.*/



