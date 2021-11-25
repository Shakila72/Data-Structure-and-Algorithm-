#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

void output_file()
{
	char outputdata[50];
	ifstream fin;
	fin.open("data.txt");
	if(!fin.fail())
	{
		// Continue reading until end
		while(fin>>outputdata)
		{
			cout<<outputdata<<endl;
		}
	}
	fin.close();
}

void search_data(char namefind[])
{
	char outputdata[500];
  int count=0;
	char *pch=NULL;
	ifstream fin;
	fin.open("data.txt");
	if(!fin.fail())
	{
		// Continue reading until end
		while(fin>>outputdata)
		{
			pch=strstr(outputdata,namefind);

			if (pch!=NULL)
			{
				cout<<outputdata<<endl;
        count++;
			}
      
		}
    cout<<"Total Entries Found: "<<count<<endl<<endl;
  }
	fin.close();
}

int main ()
{
jumpmain:
	int a;
	cout<<"Press 1 for Data write"<<endl;
	cout<<"Press 2 for Data read"<<endl;
	cout<<"Press 3 for Data search using Name"<<endl;
  cout<<"Press 4 for Data search using Preference"<<endl;
	cout<<"Option Selected: ";
	cin>>a;
	if(a==1)
	{
    	char str[50];
		char name[50];
		char dob[50];
		char age[3];
		char army[]="ARMY";
		char navy[]="NAVY";
		char airforce[]="AIRFORCE";
		char ssg[]="SSG";
		char amc[]="AMC";
    char gap[2]={'-','\0'};
		char ch='y';
		int opt;
		do
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter DOB dd/mm/yy: ";
			cin>>dob;
			cout<<"Enter Age: ";
			cin>>age;
			strcat(name, gap);
			strcat(name, dob);
			strcat(name, gap);
			strcat(name, age);
      
			cout<<endl<<"The options for volunteering are as follows: "<<endl<<endl;
			ifstream fin;
			int count = 1;
			fin.open("branches.txt");
			if(!fin.fail())
			{
				while(fin>>str)
				{
					cout<<"Option "<<count<<": "<<str<<endl;
					count++;
				}
			}
jump:
			cout<<endl<<"Enter your option: ";
			cin>>opt;
			if(opt==1)
			{
				strcat( name, gap);
				strcat( name, army);
			}
			else if(opt==2)
			{
				strcat( name, gap);
				strcat( name, navy);
			}
			else if(opt==3)
			{
				strcat( name, gap);
				strcat( name, airforce);
			}
			else if(opt==4)
			{
				strcat( name, gap);
				strcat( name, ssg);
			}
			else if(opt==5)
			{
				strcat( name, gap);
				strcat( name, amc);
			}
      
			else
			{
				cout<<"Invalid Option"<<endl;
				goto jump;
			}
			ofstream fout;
			fout.open("data.txt", ios::app);
			fout<<name;
			cout<<"Do you want to add another data? Press y/Y: ";
			cin>>ch;
			fin.close();
			fout.close();
		}
		while(ch=='y' || ch=='Y');
	}
	else if(a==2)
	{
		output_file();
	}
	else if(a==3)
	{
		char namefind[50];
		cout<<endl<<"Enter Name: ";
		cin>>namefind;
		search_data(namefind);
	}
  else if(a==4)
	{
		char findpref[10];
    char str[50];
    ifstream fin;
	  fin.open("branches.txt");
		if(!fin.fail())
		{
      cout<<endl<<"Preference List:"<<endl<<endl;
			while(fin>>str)
			{
				cout<<str<<endl;
			}
		}
		cout<<endl<<"Enter Preference: ";
		cin>>findpref;
		search_data(findpref);
	}
	else
	{
		cout<<endl<<"Invalid Option"<<endl<<endl;
		goto jumpmain;
	}
}
