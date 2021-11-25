#include <iostream>
#include <string>
using namespace std;

int main()
{
string test;
test="this is a test";
test.replace(' ','~');// replace the space with ~
cout << test;

return 0;
}