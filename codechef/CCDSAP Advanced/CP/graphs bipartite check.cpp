#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
bool isBipartite(vector<lli>adj[], lli color[], lli source){
    color[source]=1;
    queue<lli>q;
    q.push(source);
    while(!q.empty()){
        lli f = q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(color[adj[f][i]]==-1){
                //cout<<"no color match = "<<f<<" "<<adj[f][i]<<"\n";
                //cout<<"color[f], color[adj[f][i]] = "<<color[f]<<" "<<color[adj[f][i]]<<"\n";
                color[adj[f][i]] = 1 - color[f];
                //cout<<"After color[f], color[adj[f][i]] = "<<color[f]<<" "<<color[adj[f][i]]<<"\n";

                q.push(adj[f][i]);
            }
            else if(color[adj[f][i]] == color[f])
                return false;
        }
    }
    return true;
}

int main(){
    fast;
    lli t,v,e,v1,v2;
    cin>>t;
    int c=1;
//    cout<<"i = "<<i<<"\n";
    while(t--){
  //      cout<<"i = "<<i<<"\n";
        cin>>v>>e;
        vector<lli>adj[v+1];
        while(e--){
            cin>>v1>>v2;
            adj[v1].push_back(v2);
            adj[v2].push_back(v1);
        }

        lli color[v+1],flag=0;
        for(int i=0;i<=v;i++)
            color[i]=-1;

        for(int i=1;i<=v;i++){
            if(color[i]==-1){
                cout<<"running for i = "<<i<<"\n";
                if(!isBipartite(adj,color,i)){
                    cout<<"Scenario #"<<c<<":\nSuspicious bugs found!\n";
                    flag=1;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"Scenario #"<<c<<":\nNo suspicious bugs found!\n";
        }
    c++;
    }
}
