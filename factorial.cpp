#include <iostream>
#include <conio.h>

using namespace std;
class Factorial
{
      private:
      int num;
      int fac=1;
public:
          void setData(int n1)
          {
                 num = n1;
                 cout<<"Enter number ";
                 cin>>num;
             }
	  double fact()
             {
                for(int i = 1; i <=num; ++i) {
                fac *= i;
		return fac;
               }
	int showData()
              {	
		cout<<"Factorial is "<<fac;
		}
		;
 int main()
{
      Factorial f;
      f.setData(5);
      f.fact();
      f.showData();
      
      getch();
}
