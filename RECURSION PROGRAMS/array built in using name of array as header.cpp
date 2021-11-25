#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>square(100);
	for(int i=0;i<square.size();i++)
	{
		square[i]=i*i;
	}
	for(int i=0;i<square.size();i++)
	{
		cout<<i<<" "<<square[i]<<endl;
	}
return 0;

}

