#include<iostream>
using namespace std;
class queue
{
	int arr[50];
	int rear,front;
	public:
		queue()
		{
			rear=-1;
			front=0;
			
		}
		bool isEmpty()
		
		{
			if (rear==-1)
			{
				return 1;
			}
			else
			return 0;
			
		}
		bool isFull()
		
		{
			if (rear==50)
			{
				return 1;
			}
			else
			{
				return 0;
			}
			
		}
		void enqueue(int x)
		{
			if(isFull())
			{
				cout<<"The queue is full";
			}
			else
			{
				arr[++rear]=x;
			}
			
		}
		void dequeue()
		{
			if(isEmpty())
			{
				cout<<"The queue is empty";
			}
			else
			{
				front++;
			}
			
		}
		void display()
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		
		
};
int main()
{
	queue q1;
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(7);
	q1.enqueue(8);
	q1.enqueue(9);
		q1.display();
	q1.dequeue();
	q1.dequeue();
	q1.display();
	

	return 0;	
}
