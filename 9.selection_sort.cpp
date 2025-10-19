#include<iostream>
using namespace std;

int main(){
    int arr[5] = {56,23,67,12,68};
    int n = 5;

    cout<<"Original array ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    //selection sort
    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini] = temp;
    }
    cout<<"Sorted array ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

}