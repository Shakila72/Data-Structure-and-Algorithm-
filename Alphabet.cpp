#include<iostream>
using namespace std;
int main()
{
	char alphabet='A';
	for(int i=0;i<4;i++)
	{
		for (int j=0;j<=i;j++)
		{
			cout<<alphabet;
		}
		alphabet++;
		cout<<endl;
	}



}

