#include<iostream>
using namespace std;

#define SIZE 20
int arr[SIZE];
int top = -1;

void push(int value){
    arr[top++] = value;
}

int pop(){
    return arr[top--];
}

int evaluatePrefix(string exp){
    for(int i=exp.length()-1;i>=0;i--){
        char ch = exp[i];

        if(ch >= '0' && ch<= '9'){
            push(ch - '0');
        }else{
            int val1 = pop();
            int val2 = pop();

            switch (ch)
            {
            case '+':push(val1+val2);break;
            case '-':push(val1-val2);break;
            case '*':push(val1*val2);break;
            case '/':push(val1/val2);break;
            }
        }
    }
    return pop();
}

int main(){
    string exp = "-+23*549";
    cout<<"Prefix Expression: "<<exp<<endl;
    cout<<"Result: "<<evaluatePrefix(exp)<<endl;
    return 0;
}