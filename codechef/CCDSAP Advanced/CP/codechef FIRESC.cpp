#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1000000007
using namespace std;
typedef long long int lli;

void dfs(vector<lli>adj[],lli visited[],lli source,lli &cI){

    visited[source] = 1;
    for(int i=0;i<adj[source].size();i++){
        if(!visited[adj[source][i]]){
            cI++;
            dfs(adj,visited,adj[source][i],cI);
        }
    }
}

int main(){
    lli t,n,m,v1,v2;
    cin>>t;
    while(t--){
        cin>>n>>m;
        vector<lli>adj[n+1];
        while(m--){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }
        lli components=0,product=1,cIndividual=1;
        lli flag=0,visited[n+1]={0};
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                components++;
                dfs(adj,visited,i,cIndividual);
                flag=1;
            }
            if(flag){
                //cout<<"number of vertices = "<<cIndividual<<"\n";
                product = (product*cIndividual)%mod;
                cIndividual=1;
                flag=0;
            }
        }
        cout<<components<<" "<<product<<"\n";
    }
}


