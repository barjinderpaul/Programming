#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void bfs2(vector<int>adj[],int v,int source){
    //cout<<"V = "<<v<<"\n";
    //cout<<"\nsecondbfs\n";
    int vis[v+1]={0};
    int diameter[v+1]={0};
    queue<int>q;
    int count=0;
    q.push(source);
    vis[source] =1;
    int f;
    while(!q.empty()){
        f=q.front();
        count++;
        //cout<<f<< " ";
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(!vis[adj[f][i]]){
                diameter[adj[f][i]] += diameter[f]+1;
                vis[adj[f][i]]=1;
                q.push(adj[f][i]);
            }
        }
    }
    int i = int(max_element(diameter + 1, diameter + v + 1) - diameter);
    cout<<diameter[i];
    //cout<<"\ncount  = "<<count;
}

void bfs(vector<int>adj[],int v,int source){
    int vis[v+1]={0};
    queue<int>q;
    q.push(source);
    vis[source]=1;
    int f;
    while(!q.empty()){
        f=q.front();
        q.pop();
        for(int i =0;i<adj[f].size();i++){
            if(vis[adj[f][i]]==0){
                vis[adj[f][i]]=1;
                q.push(adj[f][i]);
            }
        }
    }
    bfs2(adj,v,f);
}

int main(){
    fast;
    int v,x,y;
    cin>>v;
    int e = v-1;
    vector<int>adj[v+1];
    while(e--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int len=0;
    bfs(adj,v,1);
    //cout<<len;
}

