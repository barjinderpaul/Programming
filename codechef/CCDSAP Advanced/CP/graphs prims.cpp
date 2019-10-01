#include<bits/stdc++.h>
using namespace std;

void djkstraAndPrim(list<pair<int,int> >adj[], int v){
    int visited[v]={0};
    int distance[v];
    for(int i=0;i<v;i++)
        distance[i]=INT_MAX;
    priority_queue<pair<int,int>, vector<pair<int,int>>,greater<pair<int,int>> >pq;
    pq.push({0,0});
    distance[0] = 0;
    int parent[v]={0};
    parent[0] = -1;
    while(!pq.empty()){
        pair<int,int> p = pq.top();
        pq.pop();
        int vertex = p.second;
        visited[vertex]=1;
        //int distance = p.first;
        for(auto it = adj[vertex].begin();it!=adj[vertex].end();it++){
            int currV = (*it).second;
            int currW = (*it).first;
            if(visited[currV]==0 && (distance[currV] > distance[vertex] + currW)  ){
                distance[currV]  = distance[vertex] + currW;
                pq.push({currW,currV});
                parent[currV] = vertex;
            }
        }
    }
    cout<<"distance array = \n";
    for(int i=0;i<v;i++)    cout<<distance[i];
    cout<<"\nParent Array = \n";
    for(int i=0;i<v;i++)    cout<<parent[i];
}

int main(){
    int v,e,v1,v2,weight;
    cin>>v>>e;
    list<pair<int,int> >adj[v];
    while(e--){
        cin>>v1>>v2>>weight;
        adj[v1].push_back({weight,v2});
        adj[v2].push_back({weight,v1});
    }
    djkstraAndPrim(adj,v);
}
