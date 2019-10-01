#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int lli;
using namespace std;
bool cmp(pair<lli,lli>a,pair<lli,lli>b){
    if(a.second!=b.second)
        return a.second>b.second;
    return a.first>b.first;
}
int main(){
    fast;
    lli n,m,k;
    cin>>n>>m>>k;
    lli vals[99999];
    int val;
    for(int i=1;i<=n;i++){
        cin>>val;
        vals[i]=val;
    }
    lli x,y;
    vector<int>adj[n+1];
    while(m--){
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        if(adj[i].size()<(k))
            cout<<"-1\n";
        else{
            vector<pair<lli,lli>>vp;
            for(int j=0;j<adj[i].size();j++){
                //cout<<"val = "<<adj[i][j]<<" "<<vals[adj[i][j]]<<"\n";
                vp.push_back(make_pair(adj[i][j],vals[adj[i][j]]));
            }
            sort(vp.begin(),vp.end(),cmp);
            cout<<vp[k-1].first<<"\n";
        }
    }
}
