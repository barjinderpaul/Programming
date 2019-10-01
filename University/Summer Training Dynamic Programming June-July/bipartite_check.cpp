#include<bits/stdc++.h>
using namespace std;

void checkBipartite(list<int>*adj, int v){

}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    checkBipartite(adj,v);
}
