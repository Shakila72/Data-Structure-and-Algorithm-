#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
    char str[100];//declare a character array
    int i,len,temp;
    cout<<"Enter a String as you wish\n";
    cin>>str; //input string
    len=strlen(str);
    i=0;
    while(i<len/2){
        temp=str[i];
        str[i]=str[len-i-1];
        str[len-i-1]=temp;
 i++;
    }
   cout<<"Given String is reversed here\n"<<str;
    getch();

    return 0;
}

