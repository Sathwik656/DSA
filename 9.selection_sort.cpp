#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no of elments: ";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" Elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n-1;i++){
        int mini = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        //swap i amd mini
        int temp = arr[i];
        arr[i]=arr[mini];
        arr[mini] = temp;
    }

    cout<<"Sorted array ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}

