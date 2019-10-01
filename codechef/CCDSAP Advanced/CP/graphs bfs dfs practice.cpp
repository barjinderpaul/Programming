#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int v,int s){
    int visited[v+1]={0};
    queue<int>q;
    q.push(s);
    visited[s]=1;
    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(visited[adj[f][i]]==0){
                q.push(adj[f][i]);
                visited[adj[f][i]]=1;
            }
        }
    }
}

void dfs(vector<int>adj[],int s,int visited[]){
    visited[s]=1;
    cout<<s<<" ";
    for(int i=0;i<adj[s].size();i++){
        if(visited[adj[s][i]]==0)
            dfs(adj,adj[s][i],visited);
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
    int s;
    cin>>s;
    cout<<"BFS - ";
    bfs(adj,v,s);
    int vis[v+1]={0};
    cout<<"\n dfs - ";
    dfs(adj,s,vis);
}
