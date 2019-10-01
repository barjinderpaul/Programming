#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int lli;
using namespace std;

void dfs(vector<lli>adj[],lli source,lli &count,lli visited[]){
    visited[source]=1;
    for(int i=0;i<adj[source].size();i++){
        if(visited[adj[source][i]]==0){
            visited[adj[source][i]]=1;
            count++;
            dfs(adj,adj[source][i],count,visited);
        }
    }

}
int main(){
    lli n,m,x,y;
    cin>>n>>m;
    vector<lli>adj[n+1];
    while(m--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    lli source;
    cin>>source;
    lli count=0,visited[n+1]={0};
    dfs(adj,source,count,visited);
    cout<<n-count-1;
}
