#include<bits/stdc++.h>
using namespace std;

bool isBipartite(vector<int>adj[],int color[],int source){
    color[source] = 1;
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();
        q.pop();

        for(int i=0;i<adj[f].size();i++){
            if(color[adj[f][i]]==-1)
                color[adj[f][i]] = 1 - color[f],q.push(adj[f][i]);
            else if(color[adj[f][i]]==color[f])
                return false;
        }
    }
    return true;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    vector<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int color[v+1],flag=0;
    for(int i=0;i<=v;i++)
        color[i]=-1;
    for(int i=1;i<=v;i++){
        if(color[i] == -1){
            if(!isBipartite(adj,color,i)){
                cout<<"Not bipartite\n",flag=1;
                break;
            }
        }
    }
    if(!flag)
        cout<<"Bipartite\n";
}
