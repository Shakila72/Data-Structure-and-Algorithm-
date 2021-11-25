/* Insertion sort in Ascending order
Exercise question 7.1 sort the sequence 3,1,4,1,5,9,2,6,5 using 
insertion sort.*/
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
int size =9;
int a[size]={3,1,4,1,5,9,2,6,5};

cout<<"Elements Before Insertion Sort "<<endl;
for (int n=0;n<9;n++)
{
	cout<<a[n]<<" ";
	
}
cout<<"\n";
insertionSort( a, size) ;
cout<<"After Insertion Sort in Ascending "<<endl;
for (int n=0;n<9;n++)
{
	cout<<a[n]<<" ";
	
}
return 0;


}


