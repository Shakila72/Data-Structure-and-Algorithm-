#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	Node *prev;
	
};
class DoublyLinked_list{
	private:
		int data;
		Node *first;
		Node *last;
		public:
			DoublyLinked_list()
			{
				first=NULL;
				last=NULL;
			}
			void insertFirst(int x)
			{
				Node*temp =new Node;
				temp->data=x;
				if(last==NULL)
				{
					temp->next =NULL;
					temp->prev=NULL;
					first=temp;
					last=temp;
					
				}
				else
				{
					temp->next=first;
					temp->prev=NULL;
					first=temp;
					first->prev=temp;
				}
			}
			void insertLast(int x)
			
			{
				Node *temp=new Node;
				temp->data=x;
				if(last==NULL)
				{
					temp->next=NULL;
						temp->prev=NULL;
						first=temp;
						last=temp;
				}
				else
				{
					temp->prev=last;
					first->prev=temp;
					temp->next=NULL;
					last=temp;
				}
				
				
			}
				void display()
				{
					Node*temp=first;
					while(temp!=NULL)
					{
						cout<<temp->data<<" ";
						temp=temp->next;
					}
				}
			
};
int main()
{
	DoublyLinked_list l1;
	l1.insertFirst(20);
	l1.insertFirst(30);
	l1.insertFirst(50);
	l1.insertLast(5);
	l1.display();
	cout<<endl;
	l1.insertFirst(60);
	l1.display();
	cout<<endl;
	l1.insertLast(56);
	l1.display();
	return 0;
	
}
