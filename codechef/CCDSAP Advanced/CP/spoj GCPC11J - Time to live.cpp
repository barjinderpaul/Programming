#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void bfs2(vector<lli>adj[],lli source, lli n){
    queue<lli>q;
    q.push(source);
    int visited[n]={0};
    int diameter[n]={0};
    visited[source]=1;
    lli f;
    while(!q.empty()){
        f = q.front();
        q.pop();
        //l++;
        for(int i=0;i<adj[f].size();i++){
            if(!visited[ adj[f][i] ]){
                q.push(adj[f][i]);
                diameter[adj[f][i]]+=diameter[f]+1;
                visited[ adj[f][i] ] = 1;
            }
        }
    }
    int i = int(max_element(diameter, diameter + n) - diameter);
    diameter[i]%2!=0?cout<<(diameter[i]+1)/2<<"\n":cout<<diameter[i]/2<<"\n";
}

void bfs(vector<lli>adj[],lli source,lli n){
    queue<lli>q;
    q.push(source);
    int visited[n]={0};
    visited[source]=1;
    lli f;
    while(!q.empty()){
        f = q.front();
        q.pop();
        //l++;
        for(int i=0;i<adj[f].size();i++){
            if(!visited[ adj[f][i] ]){
                q.push(adj[f][i]);
                visited[ adj[f][i] ] = 1;
            }
        }
    }
    bfs2(adj,f,n);
}

int main(){
    fast;
    lli t,n,v1,v2;
    cin>>t;
    while(t--){
        cin>>n;
        lli e = n-1;
        vector<lli>adj[n];
        while(e--){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        bfs(adj,0,n);
    }
}
