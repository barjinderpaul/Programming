#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;

struct edges{
    int u,v,w;
};
edges edge[1024];
//lli dis[1024],path[1024];
lli dis[1024];
unordered_map<lli,lli> path;
int relax(lli e){
    int i,cnt=0;
    for(int i=0;i<e;i++){
        if(dis[edge[i].u] + edge[i].w < dis[edge[i].v]){
            dis[edge[i].v] = dis[edge[i].u] + edge[i].w;
            path[edge[i].v] = edge[i].u;
            cnt++;
        }
    }
    return cnt;
}

lli bellman(lli v,lli e,lli source,lli destination){
    lli y;
    for(int i=0;i<v;i++)
        dis[i] = INT_MAX;
    dis[source]=0;
    for(int i=0;i<v-1;i++){
        y = relax(e);
        if(y==0)
            break;
    }
    if(relax(e)==0){
        cout<<"Negative weight cycle \n";
        return -1;
    }
    return dis[destination];
}

int main(){
    lli v,e,u,weight,source,destination;
    cin>>v>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v>>weight;
        edge[i].u = u;
        edge[i].v = v;
        edge[i].w = weight;
    }
    for(int i=0;i<v;i++)
        path[i]=INT_MAX;
    cin>>source>>destination;
    lli k = destination;
    lli srPath = bellman(v,e,source,destination);
    if(srPath!=-1){
        cout<<srPath<<"\n";
        vector<lli>path;
        destination = path[destination];
        while(destination!=k){
            path.push_back(destination);
            destination = path[destination];
        }
        for(int i=path.size()-1;i>=0;i--)
            cout<<path[i]<<" ";
        cout<<"\n";
    }
}
