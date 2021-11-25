#include<iostream>
#include <algorithm>
#include<string.h>
using namespace std;
int main()
{
    string name= "fahad";
    reverse(name.begin(), name.end());
 
    cout << name;
    return 0;
}
