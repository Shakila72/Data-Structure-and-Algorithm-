#include <iostream>
using namespace std;
int Binary_search(int a[],int size, int value )
 {     
 int low=0;
 int high=size-1;
 
 while(low<=high)
 {
 	int mid=(low+high)/2;
 
 if(value==a[mid])
 {
 	
 	return mid;
 }
 else if(value>a[mid])
 {
 	low=mid+1;
 }
 
 else
 {
 	high=mid-1;
 }
 
}

return -1;			
}

int main ()
{
	 int size = 8;
  int a[size]={1,3,5,6,7,15,14,17};
  
  int search_value;

  cout << "Enter search value: "; 
  cin >> search_value;
  int result =Binary_search(a,size,search_value);
  if(result>=0) 
  {
  	cout<<"The number "<<a[result]<<" was found at index "<<result<<endl;
  }
else
cout<<"The number "<<search_value<<" was not found "<<endl;

  return 0;

}


// Time Complexity  =o(log2(n))// 






