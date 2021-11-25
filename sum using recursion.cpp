#include<iostream>
using namespace std;
int my_fun(int n);
int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Sum =  " << my_fun (n);
    return 0;
}
int my_fun (int n)
{
if
    (n>0)
    {
     return(n+my_fun(n-1));
    }
    else 
    return 0;
}

