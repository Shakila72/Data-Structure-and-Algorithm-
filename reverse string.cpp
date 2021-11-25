#include<iostream>
#include<conio.h>		
#include<stdlib.h>		
using namespace std;
#define SIZE 17
class stack
{
	private:
		int top,count;
		char string[17],str,st[SIZE];
		
	public:
		stack()
		{
			top=-1;
			count=0;
		}
		void in()
		{
			cout<<"\nEnter String(String end with 0) = ";
			for(int a=0;a<17;a++)
			{
                cin>>str;
				if(str=='0')
				{
					return;
				}
				else
				{
					string[a]=str;
					count++;
				}
			}
		}
		void push()
		{
			for(int a=0;a<count;a++)
			{
			
			if(top==SIZE-1)
			{
				cout<<"\nStack is Full";
				return;
			}
			else
			{
				top++;
				cout<<"\nElement push into stack.";
				st[top]=string[a];
			}
		  }
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"\nStack is Empty";
				return;
			}
			else
			{
				cout<<"\nPoped Element is :"<<st[top];
				top--;
				return;
			}
		}
		void display()
		{
			for(int i=top; i>=0; i--)
			{
				cout<<string[i]<< " " ;
			}
			cout <<endl;
		}
	
};
int main()
{
	stack s;
	char ch;
	cout<<"\nI for enter string ";
		cout<<"\nP for Push string into stack ";
		cout<<"\nO for Pop string from stack ";
		cout<<"\nd diplay string ";
		cout<<"\nE for Exit ";
	while(1)
	{   
		cout<<"\nEnter your choice : ";
		ch=getche();
		switch(ch)
		{
			case 'i':
				s.in();
				break;
			case 'p':
				s.push();
				break;
			case 'o':
				s.pop();
				break;
				case 'd':
				s.display();
				break;
			case 'e':
				exit(0);	
			default:
				cout<<"U Enter Wrong Choice Plz Try Again ";
		}
	}
	
	return 0;
}



