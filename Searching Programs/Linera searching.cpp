// linear searching 
#include <iostream>
using namespace std;
bool Linear_search(int data[],int size, int value )
 {     
		for(int index=0; index<size; index++)
		{
			
			if(data[index] == value)
			{
			return 1;
	
			}
	
			
		}
		return 0;
	
}
int main ()
{
	 int array_size = 8;
  int list[array_size]={1,10,5,3,7,10,14,17};
  
  int search_value;

  cout << "Enter search value: "; 
  cin >> search_value;
  if(Linear_search(list,array_size,search_value)) 
  {
  	cout<<"Value found "<<endl;
  }
else
cout<<"Value not found "<<endl;

  return 0;

}


// Time complexity for best case =o(1)

// Time complexity for Average/best case =o(n)

