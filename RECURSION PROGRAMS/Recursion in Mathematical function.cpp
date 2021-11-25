/* Q) use recursion for a function in Maths 
 f(x)=2f(x-1)+x^2 valid for nonegative numbers.*/
 
#include<iostream>
using namespace std;
int function(int x)
{                          
	if(x!=0)  //4!=0 true      
	return 2*function(x-1)+x*x;  //f(4)=2*f(3)+4*4  
	else                       // for f(3) function call itself
	return 0;
}
int main()
{
	int x;
	cout<<"Enter value = ";
	cin>>x;  // let x=4
	cout<<"Result "<<function( x);
	return 0;


}
/*               2*function(x-1)+x*x
   function(4)=2*function(3)+4*4
  function(3)=2*function(2)+3*3
  function(2)=2*function(1)+2*2
  function(1)=2*function(0)+1*1
  function(0)=0
  As it is base case so we return 0
