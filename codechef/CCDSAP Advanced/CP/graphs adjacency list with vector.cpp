#include<bits/stdc++.h>
using namespace std;
int main(){
    int nodes,edges,v1,v2;
    cin>>nodes>>edges;
    const int newnodes = nodes+1;
    vector<int>adj[newnodes];
    for(int i=0;i<edges;i++){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
    }
    for(int i=1;i<=nodes;i++){
        cout<<"adj lst of node "<<i<<" : ";
        for(int j=0;j<adj[i].size();j++){
            if(j==adj[i].size()-1)
                cout<<adj[i][j]<<"\n";
            else
                cout<<adj[i][j]<<" -> ";
        }
    }
    return 0;
}
