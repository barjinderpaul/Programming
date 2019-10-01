#include<bits/stdc++.h>
using namespace std;

void dfsWithoutRecurse(vector<int>adj[],int v,int source){
    int visited[v+1]={0};
    stack<int>st;
    st.push(source);
    while(!st.empty()){
        int top = st.top();
        cout<<"top  ="<<top<<"\n";
        st.pop();
        visited[top]=1;
        for(int i=0;i<adj[top].size();i++){
                if(visited[adj[top][i]]==0){
                    visited[adj[top][i]] = 1;
                    st.push(adj[top][i]);
                }
        }
    }

}

void dfsRecurse(vector<int>adj[],int source, int v,int visited[]){
    visited[source] = 1;
    cout<<"v = "<<source<<"\n";
    for(int i=0;i<adj[source].size();i++){
        if(!visited[ adj[source][i]])
            dfsRecurse(adj,adj[source][i],v,visited);
    }
}


void bfs(vector<int>adj[], int v,int source){
    int visited[v+1]={0};
    queue<int>q;
    q.push(source);
    visited[source]=1;
    while(!q.empty()){
        int f = q.front();
        cout<<"f = "<<f<<"\n";
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(visited[ adj[f][i] ]==0){
                visited[ adj[f][i] ]=1;
                q.push(adj[f][i]);
            }
        }
    }
}

void shortestDistanceBFS(vector<int>adj[],int v, int source){
    int level=0,visited[v+1]={0};
    queue<int>q;
    q.push(source);
    cout<<"source  = "<<source<<"\n";
    visited[source]=1;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        level++;
        for(int i=0;i<adj[f].size();i++){
            if(!visited[ adj[f][i] ] ){
                cout<<"Distance of vertex = "<<adj[f][i]<<" is "<<level<<"\n";
                visited[ adj[f][i] ]=1;
                q.push(adj[f][i]);
            }
        }
    }

}

int main(){
    int v,e,v1,v2;      //1 is source
    cin>>v>>e;
    vector<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    dfsWithoutRecurse(adj,v,1);
    cout<<"\n";
    int visited[v+1]={0};
    dfsRecurse(adj,1,v,visited);
    cout<<"\n";
    bfs(adj,v,1);
    cout<<"\n Shortest distance to each node\n";
    shortestDistanceBFS(adj,v,1);
}
