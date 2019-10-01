#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void bfs(list<int>*adj, int source, int v){
    int vis[v+1]={0};
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();
        vis[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++)
            if(!vis[*it])
                q.push(*it);
    }
}




void dfs(list<int>*adj, int vis[], int source){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it=adj[source].begin();it!=adj[source].end();it++)
        if(!vis[*it])
            dfs(adj,vis,*it);
}


//void topological_sort(list<int>*adj, int v){
    //find zero indegrees;

//}

int main(){
    fast;
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int source;
    cin>>source;
    cout<<"BFS\n";
    bfs(adj,source,v);
    int vis[v+1]={0};
    cout<<"DFS\n";
    dfs(adj,vis,source);

    topological_sort(adj,v);
}
