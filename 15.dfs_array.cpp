#include<iostream>
using namespace std;

int adj[10][10], visited[10], qarray[10];
int front = 0, rear = 0;

void dfs(int v, int n){
    cout<<v<<" ";
    visited[v] = 1;
    for(int j=0; j<n; j++){
        if(adj[v][j] == 1 && !visited[j]){
            dfs(j,n);
        }
    }
}

int main(){
    int n,edges,start,i,j;
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
    cin>>start;
    cout<<"Visited vertices: ";
    dfs(start,n);

    cout<<endl;
    return 0;
}

