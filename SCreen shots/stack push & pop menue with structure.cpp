#include<iostream>
using namespace std;
struct Stack{
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
	char ch;
	do
	{
		cout<<"Enter an option:\n 1. For push\n 2. For pop\n 3. For display"<<endl;
		int op;
		cin>>op;
		switch(op)
		{
			case 1:
				int n;
				cout<<"Enter value to push : ";
				cin>>n;
				s1.push(n);
				break;
				case 2:
					s1.pop();
					break;
					case 3:
						s1.display();
						break;
		}
		cout<<"Do you wish to contiune [y/n]";
		cin>>ch;
		
	} while(ch=='y');
	
	return 0;	
}
