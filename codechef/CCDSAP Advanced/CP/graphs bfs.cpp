#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int v,int source){
    int visited[v+1]={0};
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            //cout<<"adj[i]  ="<<adj[f][i]<<"\n";
            if(visited[adj[f][i]]==0){
                q.push(adj[f][i]);
                visited[adj[f][i]] = 1;
            }
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
    int source;
    cin>>source;
    cout<<"BFS of graph = ";
    bfs(adj,v,source);
}
