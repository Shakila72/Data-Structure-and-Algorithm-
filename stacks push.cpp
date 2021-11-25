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
			for(int i=0; i<=top; i++)
			{
				cout<<s[i]<< " " ;
			}
			cout <<endl;
		}
};
int main()
{
	Stack s1;
	s1.push(4);
	s1.push(5);
	s1.push(7);
	s1.push(8);
	s1.push(9);
	s1.display();
	return 0;	
}
