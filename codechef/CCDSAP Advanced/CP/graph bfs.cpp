#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int v,int source){
    cout<<"bfs Traversal - ";
    bool visited[v+1]={0};
    queue<int>q;
    q.push(source);
    visited[source]=1;

        cout<<"visiting all\n";

    for(int i=0;i<v;i++){
        cout<<"vertex : "<<i<<"\n";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<"\n";
    }


    while(!q.empty()){
       // cout<<"q.size() = "<<q.size()<<"\n";
       int f = q.front();
       cout<<f<<" ";
       //cout<<"adj[f].size() = "<<adj[f].size()<<"\n";
       q.pop();

       for(int i=0;i<adj[f].size();i++){
            if(visited[adj[f][i]]==0){
                q.push(adj[f][i]);
                visited[adj[f][i]] = 1;
            }
       }
    }
}

int main(){
    int v,e,x,y;
    cin>>v>>e;
    vector<int>adj[v+1];
    while(e--){
        cin>>x>>y;
        adj[x].push_back(y);
        //adj[y].push_back(x);
    }
    int source;
    cin>>source;
    bfs(adj,v,source);
}
