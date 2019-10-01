#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[],int s,int vis[]){
    vis[s]=1;
    cout<<s<<" ";

    for(int i=0;i<adj[s].size();i++)
        if(!vis[adj[s][i]])
            dfs(adj,adj[s][i],vis);
}

void countComponentsInGraph(vector<int>adj[],int v,int &count){
    int vis[v+1]={0};
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            cout<<"connected component - ";
            dfs(adj,i,vis);
            count++;
            cout<<"\n";
        }
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
    int count=0;
    countComponentsInGraph(adj,v,count);
    cout<<"count = "<<count;
}
