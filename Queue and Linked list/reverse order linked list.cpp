#include<iostream>
using namespace std;
struct Node{
	int data;
	Node* next;
};
class LinkedList{
	private:
		Node* head;
	public:
		LinkedList()
		{
			head=NULL;
		}
		void insertFirst(int x)
		{
			Node *t=new Node;
			t->data=x;
			t->next=NULL;
			Node *tem=head;
			while(tem->next!=NULL){
				tem=tem->next;
			}
			tem->next=t;
		}
		void display()
		{
			Node *temp=head;
			while(temp != NULL)
			{
				cout<< temp->data<<" ";
				temp=temp->next;
			}
		
			}
		};
		
		int main()
{
	LinkedList l1;
	l1.insertFirst(10);
	l1.insertFirst(20);
	l1.insertFirst(30);
	l1.display();
	
	}