#include<bits/stdc++.h>
using namespace std;

void bfs(list<int>*adj,int v, int source){
    queue<int>q;
    int visited[v+1]={0};
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int f = q.front();
        cout<<f<<" ";
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(!visited[*it])
                visited[*it]=1,q.push(*it);
        }
    }
}

void dfs(list<int>*adj,int source, int vis[]){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it])
            dfs(adj,*it,vis);
    }
}

int countConnectedComponents(list<int> *adj,int v){
    cout<<"\nCounting Connected Components .... \n";
    int count=0,vis[v+1]={0};
    for(int i=1;i<=v;i++){
        if(!vis[i])
            count++,dfs(adj,i,vis);
    }
    return count;
}

bool bipartite(list<int>*adj, int v, int color[], int source){
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();q.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                q.push(*it);
                color[*it] = 1 - color[f];
            }
            else if(color[*it] == color[f])
                return false;
        }
    }
    return true;
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

    int source;
    cin>>source;

    cout<<"BFS\n";
    bfs(adj,v,source);

    cout<<"\nDFS\n";
    int vis[v+1]={0};
    dfs(adj,source,vis);

    cout<<"\nNo of connected components = "<<countConnectedComponents(adj,v)<<"\n";

    cout<<"\nChecking Bipartite..... \n";
    int color[v+1];
    for(int i=0;i<=v;i++) color[i]=-1;

    //for 1 connected component;
    if(bipartite(adj,v,color,source))
        cout<<"Loading......\nGraph is bipartite\n";
    else
        cout<<"\nNot Bipartite\n";
}
