#include<iostream>
using namespace std;

int main()
 {    
  int a,b,c,gcd,s;
  cout<<"Enter three numbers : ";
  cin>>a>>b>>c;
  s=a<b?(a<c?a:c):(b<c?b:c);
  for (gcd=s;gcd>=1;gcd--) 	{  	  
    if (a%gcd==0 && b%gcd==0 && c%gcd==0)
      break;
  }
  cout<<"Greatest common divisor : "<<gcd;
  //system("pause");
   return 0;
}
