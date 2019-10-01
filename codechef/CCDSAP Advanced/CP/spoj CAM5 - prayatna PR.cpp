#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void dfs(vector<int> adj[],int s,int vis[]){
    vis[s]=1;
    //cout<<s<<" ";

    for(int i=0;i<adj[s].size();i++)
        if(!vis[adj[s][i]])
            dfs(adj,adj[s][i],vis);
}

void countComponentsInGraph(vector<int>adj[],int v,int &count){
    int vis[v]={0};
    for(int i=0;i<v;i++){
        if(!vis[i]){
            //cout<<"connected component - ";
            dfs(adj,i,vis);
            count++;
            //cout<<"\n";
        }
    }
}

int main(){
    int v,e,x,y,t;
    cin>>t;
    while(t--){
        cin>>v;
        cin>>e;
        vector<int>adj[v];
        while(e--){
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int count=0;
        countComponentsInGraph(adj,v,count);
        cout<<count<<"\n";
    }
}
