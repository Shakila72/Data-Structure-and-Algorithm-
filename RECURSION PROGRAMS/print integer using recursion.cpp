#include<iostream>
using namespace std;
int printfirst(int n)
{
	if (n>=10)
	printfirst(n/10);
int	printDigit(n%10);
}
int main()
{
cout<<printfirst(12)<<printDigit(12);

}
// not correct
