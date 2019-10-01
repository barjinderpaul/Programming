#include<bits/stdc++.h>
using namespace std;

bool isBipartite(list<int>*adj,int color[],int v, int source){
    int visited[v+1]={0};
    queue<int>q;
    q.push(source);
    color[source]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto it=adj[f].begin();it!=adj[f].end();it++){
            if(color[*it]==-1){
                color[*it] = 1 - color[f];
                q.push(*it);
            }
            else if(color[*it]==color[f])
                return 0;
        }
    }
    return 1;
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
    int color[v+1];
    for(int i=0;i<=v;i++)
        color[i]=-1;
    int source;
    cin>>source;
    if(isBipartite(adj,color,v,source))
        cout<<"Yes\n";
    else
        cout<<"No\n";

}
