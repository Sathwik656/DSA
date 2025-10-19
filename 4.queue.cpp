#include<iostream>
using namespace std;

#define MAX 5

int queuearr[MAX];
int rear = -1;

void enqueue(int value){
    if(rear==MAX-1){
        cout<<"Queue overflw cannot insert"<<value<<endl;
    }else{
        queuearr[++rear]=value;
        cout<<value<<" Enqueued into queue"<<endl;
    }
}
void dequeue(){
    if(rear==-1){
        cout<<"Queue underflow"<<endl;
    }else{
        cout<<queuearr[0]<<" Dequeued from queue"<<endl;
        for(int i=0;i<rear;i++){
            queuearr[i]=queuearr[i+1];
        }
        rear--;
    }
}
void display(){
    if(rear==-1){
        cout<<"Queue is empty"<<endl;
    }else{
        cout<<"Queue elements ";
        for(int i=0;i<=rear;i++){
            cout<<queuearr[i]<<" ";
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