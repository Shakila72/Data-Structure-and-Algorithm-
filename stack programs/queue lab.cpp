#include <iostream>

using namespace std;
 
class Queue {
private:
int myqueue[5],size=5, front, rear;
     
public:
Queue(){
front = -1;
rear = -1;
    }
     
boolisFull(){
if(front == 0 && rear == size - 1){
return true;
        }
return false;
    }
     
boolisEmpty(){
if(front == -1) return true;
else return false;
    }
     
void enQueue(int value){
if(isFull()){
cout << endl<< "Queue is full!!";
        } else {
if(front == -1) front = 0;
rear++;
myqueue[rear] = value;
cout << value << " ";
        }
    }
int deQueue(){
int value;
if(isEmpty()){
cout << "Queue is empty!!" << endl;
 return(-1); } 
 else 
 { value = myqueue[front]; 
 if(front >= rear)
 {      
front = -1;
rear = -1;
            } 
else {
front++;
            }
cout << endl << "Deleted => " << value << " from myqueue";
return(value);
        }
    }
     
    
void displayQueue()
    { 
int i;
if(isEmpty()) {
cout << endl << "Queue is Empty!!" << endl;
        }
else {
cout << endl << "Front = " << front;
cout << endl << "Queue elements : ";
for(i=front; i<=rear; i++)
cout << myqueue[i] << "\t";
cout << endl << "Rear = " << rear << endl;
        }
    }
};
int main()
{
    Queue myq;
     
myq.deQueue();      
     
cout<<"Queue created:"<<endl;
 myq.enQueue(1);
  myq.enQueue(2); 
  myq.enQueue(3); 
  
     
myq.displayQueue();
     
    
myq.deQueue();
     
    
myq.displayQueue();
     
return 0;
}
