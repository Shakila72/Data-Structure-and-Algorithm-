#include <iostream>
using namespace std;
struct employee
{
    int empcode;
    char Name[60];
    int joiningdate;
    int joiningmonth;
    int joiningyear;
};
 int main(void)
{
    int n;
    employee e;
    int NO_OF_EMP=10;
    int day1,day2,day3,mon1,mon2,mon3,year1,year2,year3;
    struct employee E[NO_OF_EMP];
    int day_diff,mon_diff,year_diff;
    cout << " enter the current date (1-31)"<<endl;
    cin>>day2;
    cout <<" enter the current month(1-12) "<<endl;
    cin>>mon2;
    cout << " enter the current year (yyyy)"<<endl;
    cin>>year2;
    for(n=0;n<NO_OF_EMP;n++)
 {
    cout << " enter Emp : "<< "information:"<<n++;
    
    cout << " enter EMP.CODE:"<<endl;
    cin>>e.empcode;
    
    cout << " enter the Emp.name "<<endl;
    cin>>e.Name;
    cout << " enter the  joining Date:"<<endl;
    cin>>e.joiningdate;
    
    cout << " enter the joiningmonth :"<<endl;
    cin>>e.joiningmonth;
    cout << " enter the joining year : "<<endl;
    cin>>e.joiningyear;
 }
 for(n=0;n<NO_OF_EMP;n++)
 {
      day1=e.joiningdate;
      mon1=e.joiningmonth;
      year1=e.joiningyear;
      if(day2<day1)
      {
          if(mon2==3)
          {
              if ((year2>0 && year2<400))day2+=29;
              
                 else day2+=28;
          }
          
          else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12)       day2 += 30; 
        else           day2 += 31;
        mon2 = mon2 - 1;
      }
      if (mon2<mon1)
      {
          mon2+=12;
          year2-=1;
      }
       day_diff = day2-day1;
       mon_diff = mon2-mon1;
       year_diff = year2-year1;
       if (year_diff>=3 &&mon_diff>=0 &&mon_diff>=0 &&day_diff>=0)
       {
           cout << " Employee with more than three year service:"<<endl;
          cout << "Emp.ID :" << "Empcode:"<<endl;
          cout << "Emp.Name:" <<" Name"<<endl;
          cout << " period of the service:" << " year:" << "month:" << "day:"<<year_diff<<
          mon_diff<<day_diff;
       }
 }
}
