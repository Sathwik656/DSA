#include<iostream>
#include<cctype>
#include<cmath>
using namespace std;

#define SIZE 20
int arr[SIZE];
int top = -1;

void push(int value){
    arr[++top]=value;
}

int pop(){
    return arr[top--];
}

int evaluatePostfix(string exp) {
    for (int i = 0; i < exp.length(); i++) {
        char ch = exp[i];

        if (ch >= '0' && ch <= '9') {
            push(ch - '0');
        }
        else {
            int val2 = pop();
            int val1 = pop();

            switch (ch) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
                case '^': push(pow(val1,val2)); break;
            }
        }
    }
    return pop();
}

int main(){
    string exp = "23*54*+9-";
    cout<<"Postfix Expression: "<<exp<<endl;
    cout<<"Result: "<<evaluatePostfix(exp)<<endl;
    return 0;
}