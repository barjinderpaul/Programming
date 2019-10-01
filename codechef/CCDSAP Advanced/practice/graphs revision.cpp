#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void bfs(list<int>adj[], int source, int v){
    int visited[v+1]={0};
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(!visited[*it]){
                visited[*it]=1;
                q.push(*it);
            }
        }
    }
}

void dfs(list<int>adj[], int vis[], int source){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it])
            dfs(adj,vis,*it);
    }
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    cout<<"BFS\n";
    bfs(adj,1,v);
    cout<<"\n";
    int vis[v+1]={0};
    dfs(adj,vis,1);

}
