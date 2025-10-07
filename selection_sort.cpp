#include<iostream>
using namespace std;

int main(){
    int arr[5] = {64,25,12,22,11};
    int n = 5;

    cout<<"Original array: ";
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    
    //selecton sort
    for(int i=0; i<n-1; i++){
        int mini = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
    cout<<"Sorted array: ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}