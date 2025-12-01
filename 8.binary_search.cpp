#include<iostream>
using namespace std;

int main(){
    int arr[6] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int key;

    cout<<"Array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\nEnter the element to search: ";
    cin>>key;

    int low=0,high = n -1;
    bool found = false;

    while(low <= high){
        int mid = (low+high) / 2;

        if(arr[mid] == key){
            cout<<"Element found at index "<<mid<<endl;
            found = true;
            break;
        }
        else if(arr[mid]<key)
            low = mid + 1;
        else
            high = mid -1;
    }

    if(!found){
        cout<<"Element not found. "<<endl;
    }
}
