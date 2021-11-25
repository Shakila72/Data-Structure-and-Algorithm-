#include<stdio.h>
 int hcf(int x,int y);
int main()
{
    int x;
	int y;
    printf("we enter the first integer is \n");
    scanf("%d",&x);
    printf("we enter the second integer is \n");
    scanf("%d",&y);
    printf("G.C.D of %d and %d is %d",x,y,hcf(x,y));
    return 0;
  }
  int hcf(int x,int y)
  {
     
  if (y !=0)
  return hcf(y,x%y);
  else 
  return 1;
  }
