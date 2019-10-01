#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,val;
    string name;
    cin>>n>>k;
    list<pair<string,int>>adj[n];
    for(int i=0;i<n;i++){
        cin>>name>>val;
        //does not work
        adj[name].push_back({val,0});
    }
}
