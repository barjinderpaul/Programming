#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int>adj[],int s,int vis[]){
    vis[s]=1;
    for(int i=0;i<adj[s].size();i++){
        if(vis[adj[s][i]]==0)
            dfs(adj,adj[s][i],vis);
    }
}

void connectedComponents(vector<int>adj[],int v){
    int count=0;
    int visited[v+1]={0};
    for(int i=1;i<=v;i++){
        if(visited[i]==0){
            dfs(adj,i,visited);
            count++;
        }
    }
    if(count==1)
        cout<<"YES";
    else
        cout<<"NO";
}

int main(){
    int v,e,x,y;
    cin>>v>>e;
    vector<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    if(e!=(v-1))
        cout<<"NO";
    else{
        if(v==0)
            cout<<"YES";
        else
            connectedComponents(adj,v);
    }
}
