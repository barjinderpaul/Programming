#include<bits/stdc++.h>
#define fast ios_base:;sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
unordered_map<lli,lli>parent;

void shortestPathUsingBFS(list<lli>*adj,lli v, lli source,lli destination){
    int dist[v+1]={0};
    int visited[v+1]={0};
    queue<lli>q;
    q.push(source);
    parent[source]=-1;
    dist[source]=0;
    visited[source]=1;
    while(!q.empty()){
        lli f = q.front();
        q.pop();
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(!visited[*it]){
                visited[*it]=1;
                dist[*it] = dist[f]+1;
                parent[*it] = f;
                q.push(*it);
            }
            if(*it == destination)
                return;
        }
    }

}

void printPath(int j){
    if (parent[j] == - 1)
        return;
    printPath(parent[j]);
    cout<<j<<" ";
}
c
int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    lli source,destination;
    cin>>source>>destination;
    shortestPathUsingBFS(adj,v,source,destination);
    cout<<"\nPath\n";
    printPath(destination);


}
