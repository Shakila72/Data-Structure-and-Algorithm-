#include<iostream>
#include<string>
using namespace std;
class Human
{
		public:
			char name;
	int age;
			
		Human (char n, int a)
		{
			name = n;
			age =a;
			
		}
	virtual void printDetails() 
	{
		cout<<"Enter name "<<endl;
			cin>>name;
			cout<<"Enter age "<<endl;
			cin>>age;

	}
   
	
};

class Adult : public Human
{
	public:
	double voterID;
	Adult( double ID) 
	{
		if(age>=18)
		{
			voterID=ID;
		
		}
	}
	void printDetails()
	{
		
	cout<<"Enter voterID "<<endl;
		cin>>VoterID;
		
	}
	
};

class child : public Human
{
	public:
	string schoolName;
	child( string schoolName)
	{
	if(0<age<18)
	{
		schoolName=sname;
		}	
	}
	void printDetails()
	{
		
	cout<<"Enter school name "<<schoolName<<ednl;
		cin>>schoolName;
		
	}
	
	
};

int main ()
{
	Human *h;
	Adult a;
	child c;
	h=&a;
	h=&c;
	h->printDetails();
	a->printDetails();
	c->printDetails();
	
return 0;	
}
