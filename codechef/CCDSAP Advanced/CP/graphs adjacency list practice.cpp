#include<bits/stdc++.h>
using namespace std;
int main(){
    int ve,e,v,v2;
    cin>>ve>>e;
    const int vee = ve+1;
    vector<pair<int,int>>adj[vee];
    int i=1;
    while(e--){
        cin>>v>>v2;
        adj[v].push_back(make_pair(i,v2));
        adj[v2].push_back(make_pair(i,v));
        i++;
    }
    cout<<"roads:\n";
    for(int i=1;i<=ve;i++){
        cout<<"vertex i connected to = "<<i<<"\n";
        for(int j=0;j<adj[i].size();j++){
            cout<<"first = "<<adj[i][j].first<<"\n" ;
            cout<<"second = "<<adj[i][j].second<<" ";
        }
        cout<<"\nnext vertex\n";
    }
}
