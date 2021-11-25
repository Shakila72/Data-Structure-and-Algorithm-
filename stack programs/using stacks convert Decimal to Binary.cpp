#include<iostream>
using namespace std;
class Stack{
	private :
		int top;
		int s[50];
	public:
		Stack()
		{
			top=-1;
		}
		void push(int n)
		{
			if(top==50)
			{
				cout<<"Overflow";
			}
			else
				s[++top]=n;   
		}
		void pop()
		{
			if(top==-1)
			{
				cout<<"Underflow";
			}
			else
				top--;
			
		}
		void display()
		{
			for(int i=top; i>=0; i--)
			{
				cout<<s[i]<< " " ;
			}
			cout <<endl;
		}
};
int main()
{
	Stack s1;
	cout<<"Enter a decimal number :";
	int d;
	cin>>d;
	//int a=d;  //25 
	int r=0;
	while(d!=1)
	{
		r=d%2;
		s1.push(r);  //25
		d=d/2;    
	}
	
	
	cout<<d;
	s1.display();	
	return 0;
}
