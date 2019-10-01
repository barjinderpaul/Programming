#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<int>adj[],int visited[],int s,int d){
    visited[s]=1;
    ///cout<<"s,d = "<<s<<"  "<<d<<"\n";
    for(int i=0;i<adj[s].size();i++){
        if(visited[adj[s][i]]==0){
            if(adj[s][i]==d){
                cout<<"Path available \n";
                return;
            }
            else
                dfs(adj,visited,adj[s][i],d);
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
    int s,d;
    cin>>s>>d;
    int visited[v+1]={0};
    dfs(adj,visited,s,d);
}
