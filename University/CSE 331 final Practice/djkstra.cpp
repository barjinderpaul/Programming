#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

void djkstra(list<pair<lli,lli> >*adj,lli v, lli source){
    int dist[v+1];
    int vis[v+1]={0};
    for(int i=0;i<=v;i++)
        dist[i]=INT_MAX;
    priority_queue<pair<lli,lli>,vector<pair<lli,lli> >,greater<pair<lli,lli> > >q;
    q.push({0,source});
    dist[source]=0;
    while(!q.empty()){
        pair<lli,lli> p = q.top();
        q.pop();
        lli f = p.second;
        vis[f]=1;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            if(!vis[(*it).second] && dist[(*it).second] > dist[f] + (*it).first){
                dist[(*it).second] = dist[f] + (*it).first;
                q.push({(*it).first,(*it).second});
            }
        }
    }
    cout<<"Final Distances\n";
    for(int i=1;i<=v;i++){
        cout<<dist[i]<<" ";
    }
}

int main(){
    lli v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<lli,lli>>adj[v+1];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({weight,v2});
        adj[v2].push_back({weight,v1});
    }
    lli source;
    cin>>source;
    djkstra(adj,v,source);
}
