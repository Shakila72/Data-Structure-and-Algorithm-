#include<iostream>
using namespace std;
void Sort(int a[], int size) //function for sorting
{ 
   int i, j, t, min; 
   for (i = 0; i < size; i++) 
   { 
      min = i; 
      for (j = i + 1; j < size; j++) 
	  { 
         if (a[j] < a[min]) 
		 { 
            min = j; } 
      } 
      t=a[min]; 
      a[min] = a[i]; 
      a[i] = t; 
      cout<<a[i]<<" ";
    } 

} 

float average(int a[]) // function to calculate mean
{
float sum=0.0,mean;
for(int i = 0; i < 10; i++)
{
sum += a[i];
}
mean = sum/10;
return mean;
}

int min_element( int a[],int size)  // function to find minimum number
 {
    
    for (int i=1; i<size; i++)
    
        if (a[0]> a[i])
           a[0]=a[i] ;
    return a[0];
}

int max_element( int a[],int size) // function to find maximum number
 {
    
    for (int i=1; i<size; i++)
        if (a[0]<  a[i])
           a[0]=a[i] ;
    return a[0];
}
void percentile(int a[],int size)
//function to find the percentile(rank) of each element
{ 
int i,j,count;
float percent;
	for( i=0;i<size;i++)
    { 
        count=0;
       for(j=0;j<size;j++)
       {  
              if(a[i]>a[j])
                 count++;
        }
        percent=(count*100)/(size-1);
       cout<<"\nThe percentile of "<<a[i]<<"="<<percent;
    }     
}

int main()
{
	int size=10;
	int a [10] = {50,20,30,12,43,54,56,34,9,100};
	int choice;
	do
	{
	cout<<"Press 1 function to sort the array "<<endl;
cout<<"Press 2 function to find Percentile of each element of array "<<endl;
	cout<<"Press 3 function to find mean of array elements "<<endl;
	cout<<"Press 4 function to find minimum number in array "<<endl;
	cout<<"Press 5 function to find maximum number in array  "<<endl;
	cout<<"Press 6 to exit "<<endl;
	
	
	cout<<"Enter choice ";
	cin>>choice;
	switch(choice) 
	{
		case 1:
	cout<<"Elements after sorting  "<<endl;
    Sort( a, size); // calling function
    cout<<endl;
	break;
	
	case 2:
	percentile( a, size);
    cout<<endl;	
	break;
	
	case 3:
	cout<<"Mean of elements : "<<average( a)<<endl;	
	break;
	
	case 4:
	cout<<"Minimum element : "<<min_element( a,size)<<endl;
	break;
		
	case 5:
	cout<<"Maximum element : "<<max_element( a,size)<<endl;
	break;
		
	case 6:
	return 0;	
	default:cout<<"option does not found"<<endl;
}
	
	}
	while(choice!=6);

    
}

