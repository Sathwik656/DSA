#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

class LinkedList{
    Node* head;
    public:
      LinkedList(){
        head = nullptr;
    }

    void insert(int value){
        Node* newNode = new Node();
        newNode -> data = value;
        newNode -> next = nullptr;
        if(head == nullptr){
            head = newNode;
        }else{
            Node* temp = head;
            while(temp->next!=nullptr){
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
        cout<<value<<" Inserted "<<endl;
    }

    void deleteNode(){
        if(head == nullptr){
            cout<<"List is empty";
            return;
        }
        Node* temp = head;
        cout<<head->data<<" deleted";
        head = head-> next;
        delete temp;
    }

    void display(){
        if(head == nullptr){
            cout<<"List is empty";
            return;
        }
        cout<<"Linked list: "<<endl;
        Node* temp = head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList list;
    int choice,value;
    while(true)
    {
        cout << "\nEnter your choice";
        cout << "\n1:insert\n1:delete\n3:Display\n4:Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter value to insert: ";
            cin>>value;
            list.insert(value);
            break;
        case 2:
            list.deleteNode();
            break;
        case 3:
            list.display();
            break;
        case 4:
            cout<<"Exitting...\n";
            exit(0);
            break;
        default:
            cout<<"Invalid Choice...";
        }
    }
}