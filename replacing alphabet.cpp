#include<iostream>
#include<string>

using namespace std;
string replaceChar(string str, char ch1='a', char ch2='z') {
  for (int i = 0; i < str.length(); ++i) {
    if (str[i] == ch1)
      str[i] = ch2;
  }

  return str;
}
int main()
{
	char ch1='a';
	char ch2='z';
	string str="We all want peace";
	cout<<str<<endl;
	string s=replaceChar(str, ch1,  ch2);
	cout<<s;
}
