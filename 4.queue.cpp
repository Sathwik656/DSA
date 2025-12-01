#include<iostream>
using namespace std;

#define MAX 5

class Queue{
    int queuearr[MAX];
    int front,rear;

    public:
        Queue(){
            front=-1;
            rear=-1;
        }
    void enqueue(int value){
        if(rear==MAX-1){
          cout<<"Queue overflw cannot insert"<<value<<endl;
        }else{
            if(front==-1)front=0;
            queuearr[++rear]=value;
            cout<<value<<" Enqueued into queue"<<endl;
        }
    }
    void dequeue(){
    if(front==-1 || rear ==-1){
        cout<<"Queue underflow"<<endl;
    }else{
        cout<<queuearr[front]<<" Removed from queue"<<endl;
        front++;
    }
    }

    void display(){
        if(front==-1 || rear==-1){
            cout<<"Queue is empty"<<endl;
        }else{
            cout<<"Queue elements ";
            for(int i=front;i<=rear;i++){
                cout<<queuearr[i]<<" ";
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