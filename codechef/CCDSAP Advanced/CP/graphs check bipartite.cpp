#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;



int main(){
    lli n,t,v,e,v1,v2;
    cin>>t;
    while(t--){
        cin>>v>>e;
        lli source;
        vector<lli>adj[v+1];
        while(e--){
            cin>>v1>>v2;
            adj[v1].push_back(v2)l
            adj[v2].push_back(v1);
            souce = v1;
        }
        int visited[v+1]={0};
        for(int i=1;i<=v;i++){
            if(!visted[i]){
                visited[i]=1;
                checkBipartite(adj,i,visited);
            }
        }
    }
}
