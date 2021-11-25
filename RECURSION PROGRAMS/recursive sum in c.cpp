#include<stdio.h>
int sum(int num);
int main()
{
    int n;

    printf(" we enter range of  natural numbers: ");
    scanf("%d", &n);

   printf("Recursive: we enter the  Sum of first %d\n numbers is: %d\n",n,sum(n));

   return 0;
}
// This function is for Recursive

int sum(int num)
{
    if
    (num>0)
    {
     return(num+sum(num-1));
    }
    else 
    return 0;
}
