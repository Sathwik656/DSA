#include<iostream>
using namespace std;
#define MAX 5

class Queue{
    int queuearr[MAX];
    int front; 
    int rear;

    public:
        Queue(){
            front=-1;
            rear=-1;
        }
    
    void enqueue(int value){
        if((front == 0 && rear == MAX -1) || (rear+1)%MAX == front){
            cout<<"Queue Overflow"<<endl;
        }else{
            if(front == -1){
                front = 0;
            }
            rear = (rear + 1) % MAX;
            queuearr[rear] = value;
            cout<<value<<" Enqueued into queue"<<endl;
        }
    }
    void dequeue(){
        if(front==-1){
            cout<<"Queue underflow";
        }else{
            cout<<queuearr[front]<<" Dequeued from queue"<<endl;
            if(front == rear){
                front = rear = -1;
            }else{
                front = (front + 1)% MAX;
            }
        }
    }
    void display(){
        if(front == -1){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Queue elements: ";
            int i = front;
            while(true){
                cout<<queuearr[i]<<" ";
                if(i == rear){break;}
                i = (i + 1) % MAX;
            }
            cout<<endl;
        }
    }
 };

int main(){
    Queue q;
    int choice,value;
    do
    {
        cout << "\nEnter your choice";
        cout << "\n1:Enqueue\n1:Dequeue\n3:Display\n4:Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value to insert: ";
            cin>>value;
            q.enqueue(value);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            cout<<"Exitting...\n";
            break;
        default:
            cout<<"Invalid Choice...";
        }
    }while(choice!=4);
}