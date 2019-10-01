#include<bits/stdc++.h>
using namespace std;

void djkstra(list<pair<int,int> >*adj, int source, int v){
    priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > >pq;
    pq.push({0,source});
    int dist[v+1];
    for(int i=0;i<=v;i++) dist[i]=INT_MAX;
    dist[source]=0;
    while(!pq.empty()){
        int f = pq.top().second;pq.top();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(dist[(*it).second] > dist[f] + (*it).first){
                dist[ (*it).second ] = dist[f] + (*it).first;
                pq.push({(*it).first,(*it).second});
            }
        }
    }
}

int main(){
    int v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<int,int> >adj[v+1];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({v2,weight});
        adj[v2].push_back({v1,weight});
    }
    int source;
    cin>>source;
    djkstra(adj, source, v);
}
