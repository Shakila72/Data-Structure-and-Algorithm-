#include<iostream>
#include<conio.h>
using namespace std;
class batsman
{
private:
	int bcode;
	char bname[20];
	int innings, notout, runs;
	float batavg;
	float calavg()
	{
		return runs/(innings-notout)
;
	}
public:
void readdata(){
cout<<"Enter bcode, name, innings, runs, notout" <<endl;
cin>>bcode;
cin>>bname;
cin>>innings>>runs>>notout;
batavg=calavg();
	}
void displaydata()
	{
cout<<"\nBcode "<<bcode; 
cout<<"\nBname "<<bname;
cout<<"\nInnings "<<innings;
cout<<"\nNotout "<<notout;
cout<<"\nRuns "<<runs;
cout<<"\nAverage "<<batavg;
	}
};
main ()
{
	batsman obj ;
	obj.readdata();
	cout<<endl;
	obj.displaydata();
	cout<<endl;
	getch();
}
