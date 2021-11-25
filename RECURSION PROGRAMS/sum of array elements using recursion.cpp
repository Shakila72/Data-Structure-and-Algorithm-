#include<iostream>
using namespace std;
int sum(int array[],int size)
{
	if(size!=0)
	return sum(array,size-1)+array[size-1];
	else
	return 0;
}
int main()
{
	int size=3;
int array[size]={2,4,6};
cout<<sum( array, size);

}
                //size =3 so size-1=3-1=2
/*    sum(array,size-1)+array[size-1]
      sum({},2)+6
      sum({},1)+4
      sum({},0)+2   
      when size =0 it is base case so we return 0
         then again call starts 
         2+4+6=12
