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
		void insertLast(int x)
		{
			Node* t=new Node;
			t->data=x;
			t->next=head;
			head=t;
			
			
		}
		void deleteLast()
		{
			Node *temp=head;
			if(head=NULL)
			{
				cout<<"No value exists"<<endl;
			}
			else
				head=temp->next;
				delete temp;
		}
		void search_Val(int x)
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				if(temp->data==x)
				{
				cout<<"value exists"<<endl;
				}
				temp=temp->next;
			}
			
		}
		void deleteFirst()
		{
			Node *temp=head;
			while(temp->next->next!=NULL){
				temp=temp->next;
			}
			delete temp->next;
			temp->next=NULL;
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
	l1.insertLast(20);
	l1.insertLast(30);
	
	l1.display();
		cout<<endl;
		l1.search_Val(20);
	l1.insertFirst(10);
	l1.display();
	cout<<endl;
	l1.deleteLast();
	l1.display();
	cout<<endl;
	l1.deleteFirst();
	l1.display();
		cout<<endl;
	

	return 0;
}
