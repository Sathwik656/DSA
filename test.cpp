#include<iostream>
using namespace std;
#define MAX 100

int list[MAX];
int nextA[MAX];
int head = -1;
int tail = -1;
int size = 0;

void insertion(int value){
    list[size] = value;
    if(head == -1){
        head = 0;
        tail = 0;
        nextA[size] = head;
    }else{
        nextA[tail] = size;
        nextA[size] = head;
        tail = size;
    }
    size++;
}

void deletion(){
    if(head == -1){
        cout<<"List is empty";
        return;
    }
    cout<<"Deletd"<<list[head]<<endl;
    if(head == tail){
        head = -1;
        tail = -1;
    }else{
        head = nextA[head];
        nextA[tail] = head;
    }
}

void display(){
    if(head == -1){
        cout<<"List is empty";
        return;
    }
    int temp = head;
    do{
        cout<<list[temp]<<" ";
        temp = nextA[temp];
    }while(temp != head);
    cout<<endl;
}
