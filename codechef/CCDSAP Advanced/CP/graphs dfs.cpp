#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>adj[],int source,int v){
    int visited[v+1]={0};
    stack<int>s;
    s.push(source);
    visited[source]=1;
    cout<<"DFS from "<<source<<" = ";
    while(!s.empty()){
        int f = s.top();
        cout<<f<<" ";
        s.pop();
        for(int i=0;i<adj[f].size();i++){
            if(visited[adj[f][i]]==0){
                visited[adj[f][i]] = 1;
                s.push(adj[f][i]);
            }
        }
    }
}

void dfsRecursive(vector<int>adj[],int source,int v,int visited[]){
    visited[source]=1;
    cout<<source<<" ";
    for(int i=0;i<adj[source].size();i++){
        if(visited[adj[source][i]]==0)
            dfsRecursive(adj,adj[source][i],v,visited);
    }
}

int main(){
    int v,e,x,y;
    cin>>v>>e;
    vector<int>adj[v+1];
    while(e--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int source;
    cin>>source;
    dfs(adj,source,v);
    cout<<"\nDFS recursive \n";
    int visited[v+1]={0};
    dfsRecursive(adj,source,v,visited);
}
