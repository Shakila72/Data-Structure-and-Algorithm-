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
	
int sum;
for (int i = 1; i <= n; ++i) {
        sum += i;}
return sum;
}
