#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

bool checkCycle(list<lli>*adj, int vis[], lli source,lli parent){
    vis[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            if(checkCycle(adj,vis,*it,source))
                return true;
        }
        else if(*it!=parent){
            return true;
        }
    }
    return false;
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }
    int vis[v+1]={0},f=0;
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            if(checkCycle(adj,vis,i,-1)){
                cout<<"Cycle Exists\n";
                f=1;
                break;
            }
        }
    }
    if(f==0)
        cout<<"No cycle\n";

}
