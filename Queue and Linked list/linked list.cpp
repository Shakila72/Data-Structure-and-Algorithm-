#include<iostream>
using namespace std;

class node 
{
public:
    int data;
    node* next;

    node(int val) 
    {
        data = val;
        next = NULL;
    }

};
void insertAtTail(node* &head,
            int val) 
{
    if( head==NULL )
    {
        head = new node(val);
        return;
    }
    while( head->next!=NULL) 
    {
        head = head->next;
    }
    head->next = new node(val);

}
void display(node* head) 
{
    while( head!=NULL ) 
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
void delnodes( node* head )
{
    node *t;
    while( head!=NULL )
    {
        t = head->next;
        delete head;
        head = t;
    }
}     
int main() 
{
    node* head = NULL;
    insertAtTail( head, 1 );
    insertAtTail( head, 2 );
    insertAtTail( head, 3 );
    display( head );
    delnodes( head );
    return 0;
}
