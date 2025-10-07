#include <iostream>
using namespace std;

#define MAX 100

int list[MAX];      // stores data
int nextIndex[MAX]; // stores "next" index
int head = -1;
int tail = -1;
int size = 0;

// Insert at end
void insertEnd(int value) {
    list[size] = value;
    if (head == -1) { // first element
        head = 0;
        tail = 0;
        nextIndex[size] = head; // points to itself
    } else {
        nextIndex[tail] = size;
        nextIndex[size] = head; // circular link
        tail = size;
    }
    size++;
}

// Delete from front
void deleteFront() {
    if (head == -1) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    cout << "Deleted: " << list[head] << endl;

    if (head == tail) { // only one element
        head = -1;
        tail = -1;
    } else {
        head = nextIndex[head];
        nextIndex[tail] = head; // maintain circular link
    }
}

// Display circular list
void display() {
    if (head == -1) {
        cout << "List is empty." << endl;
        return;
    }

    cout << "Circular List: ";
    int temp = head;
    do {
        cout << list[temp] << " ";
        temp = nextIndex[temp];
    } while (temp != head);
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
