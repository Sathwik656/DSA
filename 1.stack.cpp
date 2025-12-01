#include <iostream>
using namespace std;

#define MAX 5

int main()
{
    int arr[MAX];
    int top = -1;
    int choice, value;
    cout << "Stack Operations\n";
    while(true)
    {
        cout << "\nEnter your choice";
        cout << "\n1:Push\n1:Pop\n3:Display\n4:Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            if (top >= MAX-1){
                cout<<"Stack Overflow "<<value<<endl;
            }else{
                cout<<"Enter value to push";
                cin>>value;
                top++;
                arr[top] = value;
                cout << value << " Pushed into stack" << endl;
            }
            break;
        case 2:
            if (top < 0){
                cout << "Stack underflow" << endl;
            }else{
                cout << arr[top--] << " Popped from stack" << endl;
            }
            break;
        case 3:
            if (top < 0){
                cout << "Stack is empty" << endl;
            }else{
                for (int i = top; i >= 0; i--){
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
            break;
        case 4:
            cout<<"Exitting...\n";
            exit(0);
            break;
        default:
            cout<<"Invalid Choice...";
        }
    }
    return 0;
}