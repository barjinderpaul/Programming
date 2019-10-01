/*    //Disjoint set union ; Determine size of components at each step; find with path compression and without path compression;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
vector<int>parent,sze;

void initDSU(int n){
    parent.resize(n+1);
    sze.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
        sze[i]=1;
    }
}

int find(int x){
    while(parent[x]!=x){
        x = parent[x];
    }
    return x;
}

int findWithPathCompression(int x){
    while(parent[x]!=x){
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;

}

void make_union(int x, int y){
    int x_set = findWithPathCompression(x);
    int y_set = findWithPathCompression(y);

    if(x_set==y_set)    //in same component;
        return;
    if(sze[x_set] > sze[y_set] ){
        parent[y_set] = x_set;
        sze[x_set]+=sze[y_set];
        sze[y_set]=0;
    }
    else{
        parent[x_set] = y_set;
        sze[y_set] += sze[x_set];
        sze[x_set]=0;
    }
}

void printComponents(){
    vector<int>components;
    for(int i=1;i<sze.size();i++){
        if(sze[i]>0)
            components.push_back(sze[i]);
    }
    sort(components.begin(),components.end());
    for(auto it:components){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main(){
    fast;
    int n,m;
    cin>>n>>m;
    initDSU(n);
    int v1,v2;
    for(int i=0;i<m;i++){
        cin>>v1>>v2;
        make_union(v1,v2);
        printComponents();
    }

}

*/

/*    //Detect cycle with disjoint set union;

#include<bits/stdc++.h>
using namespace std;
vector<int>parent,sze;

void initDSU(int n){
    parent.resize(n+1);
    sze.resize(n+1);
    for(int i=0;i<=n;i++){
        parent[i]=i;
        sze[i]=1;
    }
}

int find(int x){
    while(parent[x]!=x){
        x = parent[x];
    }
    return x;
}

int findWithPathCompression(int x){
    while(parent[x]!=x){
        parent[x] = parent[parent[x]];
        x = parent[x];
    }
    return x;
}

void make_union(int x, int y){
    int x_set = findWithPathCompression(x);
    int y_set = findWithPathCompression(y);
    if(x_set==y_set)
        return;
    if(sze[x_set]>sze[y_set]){
        parent[y_set] =  x_set;
        sze[x_set]+=sze[y_set];
        sze[y_set]=0;
    }
    else{
        parent[x_set] = y_set;
        sze[y_set] += sze[x_set];
        sze[x_set]=0;
    }
}


bool hasCycle(vector<pair<int,int>> adj, int v){
    for(int i=0;i<adj.size();i++){
        int f = adj[i].first;
        int v = adj[i].second;
        //cout<<"f,v = "<<f<<" "<<v<<"\n";
        int f_set = findWithPathCompression(f);
        int v_set = findWithPathCompression(v);
        //cout<<"fset, vset = "<<f_set<<" "<<v_set<<"\n";
        if(f_set==v_set)
            return 1;
        make_union(f,v);
    }
    return 0;
}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    vector<pair<int,int>>adj;
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        adj.push_back({v1,v2});
    }

    initDSU(v);

    if(hasCycle(adj,v))
        cout<<"Cycle exists\n";
    else
        cout<<"Cycle does not exist\n";
}

*/

    //Do question after asking from jayesh that what was the question in previous attempt;
#include<bits/stdc++.h>
using namespace std;
int main(){

}
