#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int v,int source){
    int vis[v+1]={0};
    queue<int>q;
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for(int i=0;i<adj[f].size();i++){
            if(!vis[adj[f][i]]){
                vis[adj[f][i]]=1;
                q.push(adj[f][i]);
            }
        }
    }
}

void dfs(vector<int>adj[],int v,int vis[],int s){
    vis[s]=1;
    cout<<s<<" ";
    for(int i=0;i<adj[s].size();i++){
        if(!vis[adj[s][i]])
            dfs(adj,v,vis,adj[s][i]);
    }
}

void checkPath(vector<int>adj[],int s,int d,int &flag,int vis[]){
        vis[s] = 1;
        if(s==d){
            flag=1;
            return;
        }
        for(int i=0;i<adj[s].size();i++){
            if(vis[adj[s][i]]==0)
                checkPath(adj,adj[s][i],d,flag,vis);
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
    cout<<"BFS of graph - ";
    bfs(adj,v,s);
    cout<<"\nDFS of graph - ";
    int vis[v+1]={0};
    dfs(adj,v,vis,s);
    int source,destination;
    cin>>source>>destination;
    int flag=0,visited[v+1]={0};
    checkPath(adj,source,destination,flag,visited);
    if(flag)
        cout<<"Path exists\n";
    else
        cout<<"Path not exists\n";
}
