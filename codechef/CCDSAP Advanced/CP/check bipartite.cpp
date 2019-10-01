#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<long long int>adj[],long long int v,long long int src){
    int cl[v+1];
    for(int i=0;i<=v;i++)
        cl[i]=-1;
    queue<long long int>q;
    q.push(src);
    cl[src]=1;
    while(!q.empty()){
        long long int v=q.front();
        q.pop();
        for(long long int i=0;i<adj[v].size();i++){
            if(v==adj[v][i])
                return false;
            if(cl[v]==cl[adj[v][i]])
                return false;
            else if(cl[adj[v][i]]==-1){
                cl[adj[v][i]]=1-cl[v];
                q.push(adj[v][i]);
            }
        }
    }
    return true;
}

int main(){
    long long int t;
    cin>>t;
    long long int e,v,x,y;
    int src;
    for(int i=1;i<=t;i++){
        cin>>v>>e;
        vector<long long int>adj[v+1];
        while(e--){
            cin>>x>>y;
            src=x;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        //cout<<"T = "<<t<<"\n";
        if(isBipartite(adj,v,src))
            cout<<"Scenario #"<<i<<":\nNo suspicious bugs found!\n";
        else
            cout<<"Scenario #"<<i<<":\nSuspicious bugs found!\n";
    }
}
