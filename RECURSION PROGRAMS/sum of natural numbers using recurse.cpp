#include<iostream>
using namespace std;
int sum (int n)
{
if (n>0)
return n+sum (n-1);
else 
return 0;
}
int main()
{
cout << sum(5)<<endl;
    cout << sum(8);
    return 0;

}



