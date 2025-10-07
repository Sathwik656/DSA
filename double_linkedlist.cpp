#include <iostream>
using namespace std;

#define MAX 100

int list[MAX];   // stores data
int prevIndex[MAX]; // stores previous index
int nextIndex[MAX]; // stores next index
int head = -1;
int tail = -1;
int size = 0;

void insertEnd(int value) {
    list[size] = value;
    prevIndex[size] = tail;
    nextIndex[size] = -1;

    if (head == -1) {
        head = size;
    } else {
        nextIndex[tail] = size;
    }
    tail = size;
    size++;
}

void deleteFront() {
    if (head == -1) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    cout << "Deleted: " << list[head] << endl;
    head = nextIndex[head];

    if (head != -1) {
        prevIndex[head] = -1;
    } else {
        tail = -1;
    }
}

void display() {
    if (head == -1) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "List: ";
    int temp = head;
    while (temp != -1) {
        cout << list[temp] << " ";
        temp = nextIndex[temp];
    }
    cout << endl;
}

int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    display();
    deleteFront();
    deleteFront();
    display();

    return 0;
}
