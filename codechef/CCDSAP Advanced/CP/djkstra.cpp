#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

void djkstra(list<pair<lli,lli>>*adj,lli v, lli source){
    priority_queue<pair<lli,lli>,vector<pair<lli,lli>>,greater<pair<lli,lli>> >pq;
    lli dist[v+1];
    bool visited[v+1]={0};
    for(int i=0;i<=v;i++)
        dist[i] = INT_MAX;
    pq.push({0,source});
    dist[source] = 0;
    while(!pq.empty()){
        lli f  = pq.top().second;
        visited[f] = true;
        pq.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            lli vertexWeight = (*it).first;
            lli vertex = (*it).second;
            if(!visited[vertex] && dist[vertex] > dist[f] + vertexWeight){
                dist[vertex] =  dist[f]  + vertexWeight;
                pq.push({vertexWeight,vertex});
            }
        }
    }
    for(int i=0;i<=v;i++)
        cout<<"distance of "<<i<<" = "<<dist[i]<<"\n";

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
