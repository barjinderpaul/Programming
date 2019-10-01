#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

void bfs(list<lli>adj[],lli v, lli source){
    queue<lli>q;
    int visited[v+1]={0};
    visited[source]=1;
    q.push(source);
    while(!q.empty()){
        lli f = q.front();
        cout<<f<<" ";
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(!visited[*it]){
                visited[*it]=1;
                q.push(*it);
            }
        }
    }
    cout<<"\n";
}

void dfs(list<lli>adj[],int vis[], lli source){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,vis,*it);
        }
    }
}

void checkPath(list<lli>adj[],int vis[], lli source,lli dest, int &flag){
    vis[source]=1;
    if(source==dest)
        flag=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            checkPath(adj,vis,*it,dest,flag);
        }
    }
}

bool bipartite(list<lli>adj[], int color[], int source){
    color[source]=1;
    queue<lli>q;
    q.push(source);
    while(!q.empty()){
        lli f = q.front();
        q.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1 - color[f];
                q.push(*it);
            }
            else if(color[*it]==color[f])
                return false;
        }
    }
    return true;
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    int source;
    cin>>source;
    cout<<"BFS\n";
    bfs(adj,v,source);
    int vis[v+1]={0};
    cout<<"DFS\n";
    dfs(adj,vis,source);
    cout<<"\n";

    //connected component dfs;
    cout<<"connected component dfs\n";
    int visited[v+1]={0};
    int countConnected=0;
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            dfs(adj,visited,i);
            countConnected++;
        }
    }
    cout<<"\nNumber of connected components = "<<countConnected<<"\n";

    //Check Path;
    lli src,dest;
    cin>>src>>dest;
    int visitedd[v+1]={0};
    int flag=0;
    //also check for connected components;
    checkPath(adj,visitedd,src,dest,flag);
    flag==1?cout<<"There is a Path\n":cout<<"No Path\n";

    //checking bipartite graph disconnected graphs;
    flag=0;
    int color[v+1];
    for(int i=0;i<=v;i+=1)
        color[i]=-1;
    for(int i=1;i<=v;i++){
        if(color[i]==-1){
            if(!bipartite(adj,color,i)){
                flag=1;
                break;
            }
        }
    }
    flag==0?cout<<"Bipartite\n":cout<<"Not Bipartite\n";

}
