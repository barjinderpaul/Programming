#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define iAmMax INT_MAX
using namespace std;
typedef long long int lli;

void shortestPath(list<pair<lli,lli> >*adj, lli v,lli source, lli destination){
    priority_queue<pair<lli,lli>, vector<pair<lli,lli>>, greater<pair<lli,lli>> >pq;
    //priority queue structure pair<weight,vertex>, thus, sorted by weight;
    lli dist[v+1];
    for(int i=0;i<=v;i++)
        dist[i]=iAmMax;
    pq.push(make_pair(0,source));
    dist[source]=0;
    while(!pq.empty()){
        lli f = pq.top().second; //front vertex number;
        //cout<<"front vertex = "<<f<<"\n";
        pq.pop();
        //list<pair<lli,lli>>::iterator it;
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            lli vertex = (*it).second;
            lli vertexWeight = (*it).first;
            //checking distance;
            /*
                1-3 4
                1-2 5
                1-4 6
                1-5 6

                5 4
                0 2 4
                0 1 5
                2 4 6
                 5 6
1
            */
            if(dist[vertex] > dist[f]+vertexWeight){
                dist[vertex] = dist[f] + vertexWeight;
                pq.push(make_pair(dist[v],vertex));
            }
        }
    }
    if(dist[destination]!=iAmMax){
        cout<<dist[destination]<<"\n";
    }
    else
        cout<<"NO\n";
}

int main(){
    //fast;
    lli t,v,e,v1,v2,weight;
    cin>>t;
    while(t--){
        cin>>v>>e;
        list<pair<lli,lli>>adj[v+1];
        while(e--){
            cin>>v1>>v2>>weight;
            adj[v1].push_back(make_pair(weight,v2));
            //adj[v2].push_back(make_pair(weight,v1));
        }
        lli source,destination;
        cin>>source>>destination;
        shortestPath(adj,v,source,destination);
    }
}
