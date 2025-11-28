#include<iostream>
using namespace std;

int adj[10][10], visited[10], qarray[10];
int front = 0, rear = 0;

int main(){
    int n,edges,v,i,j;
    cout<<"Enter no of vertices: ";
    cin>>n;
    cout<<"Enter no of edges: ";
    cin>>edges;
    cout<<"Enter edges(fotmat: u v): \n";
    for(int k=0; k<edges; k++){
        cin>>i>>j;
        adj[i][j] = 1;
        adj[j][i] = 1; //if undirected
    }

    cout<<"Enter starting vertex: ";
    cin>>v;
    cout<<"Visited vertices: "<<v<<" ";
    visited[v] = 1;
    qarray[rear++] = v;

    while(front<rear){
        v = qarray[front++];
        for(j=0;j<n;j++){
            if(adj[v][j] == 1 && !visited[j]){
                cout<<j<<" ";
                visited[j] = 1;
                qarray[rear++] = j;
            }
        }
    }
    cout<<endl;
    return 0;
}

