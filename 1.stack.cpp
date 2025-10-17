#include<iostream>
using namespace std;

#define MAX 5

int arr[MAX];
int top = -1;

void push(int value){
    if(top>=MAX-1){
        cout<<"Stack Overflow "<<value<<endl;
    }else{
        top++;
        arr[top] = value;
        cout<<value<<" Pushed into stack"<<endl;
    }
}

void pop(){
    if(top<0){
        cout<<"Stack underflow"<<endl;
    }else{
        cout<<arr[top]<<" Popped from stack"<<endl;
        top--;
    }
}

void display(){
    if(top<0){
        cout<<"Stack is empty"<<endl;
    }else{
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    pop();
    display();
    pop();
    pop();
    display();
    return 0;
}