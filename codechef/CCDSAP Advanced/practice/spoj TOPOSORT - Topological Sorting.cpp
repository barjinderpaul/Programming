#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio
using namespace std;
typedef long long int lli;
priority_queue<lli, vector<lli> , greater<lli> >pq;

void topological_sort(list<lli>*adj, lli v, int indegrees[]){
    lli count=0;
    vector<lli>order;
    while(!pq.empty()){
        lli f = pq.top(); count++;
        pq.pop();
        order.push_back(f);
        for(auto it = adj[f].begin();it!=adj[f].end();it++){
            indegrees[(*it)]--;
            if(indegrees[*it]==0)
                pq.push(*it);
        }
    }
    if(count!=v){
        cout<<"Sandro fails.";
    }
    else{
        for(int i=0;i<order.size();i++)
            cout<<order[i]<<" ";
        //cout<<"\n";
    }
}

int main(){
    fast;
    lli v,e,v1,v2;
    cin>>v>>e;
    list<lli>adj[v+1];
    int indegrees[v+1]={0};
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        indegrees[v2]++;
    }
    for(int i=1;i<=v;i++)
        if(indegrees[i]==0)
            pq.push(i);

    topological_sort(adj,v,indegrees);


}
