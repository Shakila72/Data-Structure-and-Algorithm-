// linear searching index
#include <iostream>
using namespace std;
int search(int data[],int size, int value )
 {     
		for(int index=0; index<size; index++)
		{
			//output : if found return index 
			// otherwise return -1
			if(data[index] > value)
				return -1;
			else if(data[index] == value)
				return index;
		}
		return -1;
}
int main ()
{
	 int array_size = 8;
  int list[array_size]={1,2,3,5,7,10,14,17};
  
  int search_value;

  cout << "Enter search value: "; 
  cin >> search_value;
  cout <<"Index : "<< search(list,array_size,search_value) << endl;

  return 0;

}


