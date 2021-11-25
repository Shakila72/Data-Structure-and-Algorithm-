//Alphabet pyramid after 180 rotation
#include<iostream>
using namespace std;
int main()
{
	for (int i=1;i<=4;i++)
	{
	for(int j=1;j<=i;j++)
	{
		if(j<4-i)
		{
			cout<<" ";
			
		}
		else
		{
			cout<<"*";
		}
		}	
	}
}