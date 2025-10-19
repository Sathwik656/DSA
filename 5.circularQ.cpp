#include<iostream>
using namespace std;
#define MAX 5

int queuearr[MAX];
int front = -1; 
int rear = -1;

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
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    dequeue();
    display();
}