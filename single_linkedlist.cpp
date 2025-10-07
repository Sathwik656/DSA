#include<iostream>
using namespace std;
#define MAX 100

int dataArr[MAX];
int nextArr[MAX];
int head = -1;
int freeIndex = 0;

//insert a node at end
void insertion(int value){
    dataArr[freeIndex] = value;
    nextArr[freeIndex] = -1;

    if(head == -1){
        head = freeIndex;
    }else{
        int temp = head;
        while(nextArr[temp] != -1){
            temp = nextArr[temp];
        }
        nextArr[temp] = freeIndex;
    }
    cout<<value<<" Inserted\n";
    freeIndex++;
}
//delete node from end
void deleteEnd(){
    if(head == -1){
        cout<<"List is empty nothing to display";
        return;
    }
    if(nextArr[head] == -1){
        cout<<dataArr[head]<<" deleted";
        head = -1;
        return;
    }
    int temp = head;
    int prev = -1;
    while(nextArr[temp] != -1){
        prev = temp;
        temp = nextArr[temp];
    }
    cout<<dataArr[temp]<<" deleted\n";
    nextArr[prev] = -1;
}

void display(){
    if(head == -1){
        cout<<"List is empty";
        return;
    }

    cout<<"Linked list: ";
    int temp = head;
    while(temp!= -1){
        cout<<dataArr[temp]<<" ";
        temp = nextArr[temp];
    }
    cout<<"\n";
}
int main(){
    insertion(10);
    insertion(20);
    insertion(30);  
    insertion(40);  
    insertion(50);  

    display();

    deleteEnd();
    deleteEnd();

    display();
}