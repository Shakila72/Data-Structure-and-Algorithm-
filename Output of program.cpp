	#include <iostream>
using namespace std;
//int addmult (int, int);
int addmult( int i, int j)
{
int kk, ll;
kk=i+j;
ll=i*j;
return (kk,ll);
}

int main()
 {
int i=3;
int j=4, k, l;
k=addmult(i,j);
l=addmult(i,j);
cout<<"sum is" <<k<<"product is"<<l;
}



