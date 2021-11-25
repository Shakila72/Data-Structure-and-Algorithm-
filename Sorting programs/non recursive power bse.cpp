#include <stdio.h>
#include<conio.h>
int power(int x ,int n);

int main ()
{
  int base ,exp;
  int  result;
  printf("enter the base");
  scanf("%d",&base );
  printf("enter the  power :");
  scanf("%d",&exp);
  result=power(base,exp);
     printf("result= %d",result);
   return 0;
}
int power(int x,int n)
{
    int power=1;
    for(int i=0;i<n;i++)
    power = power*x;
    return power;
}

