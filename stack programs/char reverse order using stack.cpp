#include<iostream>
using namespace std;
class Stack{
	private :
		int top;
		int s[26];
	public:
		Stack()
		{
			top=-1;
		}
		void push(char a)
		{
			if(top==26)
			{
				cout<<"Overflow";
			}
			else
				s[++top]=a;   
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
	s1.push();
	s1.push(b);
	s1.push(c);
	s1.push(d);
	s1.push(e);
	s1.display();
	s1.pop();
	s1.pop();
	s1.display();  // last two elements are pop( delete)
	return 0;	
}
