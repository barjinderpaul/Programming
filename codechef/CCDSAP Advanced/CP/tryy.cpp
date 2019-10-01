#include<bits/stdc++.h>
using namespace std;

void dfs(list<int>adj[],int src, int visited[]){
    visited[src] = 1;
    cout<<src<<" ";
    for(int i=0;i<adj[src].size();i++){
        if( visited[adj[src][i]]==0 ){
            dfs(adj,adj[src][i],visited);
        }
    }
}

int main(){
    int v;
    cin>>v;
    list<int>adj[v+1];
    //dynamic = list<int> *adj = new list<int>[5];
    int v1,v2;
    int edges;
    cin>>edges;
    while(edges--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int visited[v+1]={0};
    int src;
    cin>>src;
    dfs(adj,src,visited);

}
