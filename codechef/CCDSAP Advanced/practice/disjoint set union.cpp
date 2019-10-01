#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;


/*    //basic implementation without path compression
int find(int parent[], int v){
    if(parent[v]==-1)
        return v;
    return find(parent,parent[v]);
}

void make_make_make_union(int parent[] , int x, int y){
    int x_set = find(parent,x);
    int y_set = find(parent,y);
    if(x_set!=y_set)
        parent[y_set] = x_set;
}

bool hasCycle(list<int>adj[], lli v){
    int parent[v];
    for(int i=0;i<v;i++)
        parent[i]=-1;
    int visited[v+1]={0};
    queue<int>q;
    q.push(0);
    visited[0]=1;
    while(!q.empty()){


        int firstVertex = q.front();q.pop();
        visited[firstVertex]=1;
        cout<<"first Vertex = "<<firstVertex<<"\n";
        for(auto it = adj[firstVertex].begin();it!=adj[firstVertex].end();it++){
            //if(!visited[*it]){
                cout<<"second vertex = "<<*it<<"\n";
                int secondVertex = *it;
                int a = find(parent,firstVertex);
                int b = find(parent,secondVertex);
                cout<<"Before firstVertexParent , secondVertexParent = "<<a<<" "<<b<<"\n";
                if(a==b ){
                    cout<<"first, second = "<<firstVertex<<" "<<secondVertex<<"\n";
                    cout<<"parentFirst, parentSecond = "<<a<<" "<<b<<"\n";
                    return 1;
                }
                make_make_make_union(parent,firstVertex,secondVertex);
                q.push(*it);
                visited[*it]=1;
                a = find(parent,firstVertex);
                b = find(parent,secondVertex);
                cout<<"After firstVertexParent , secondVertexParent = "<<a<<" "<<b<<"\n";

            //}
        }
    }
    return 0;
}

int main(){
    lli v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
        //adj[v2].push_back(v1);
    }
    if(hasCycle(adj,v)){
        cout<<"Cycle Present\n";
    }
    else
        cout<<"No cycle present\n";
}
*/

    //hackerearth disjoint sets practice problem : print number of components at each step after adding an edge.
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<int>parent,rck;

void init(int n){
    parent.resize(n+1);rck.resize(n+1);
    for(int i=1;i<=n;i++)
        parent[i]=i,rck[i]=1;
}
int find(int x){
    while(parent[x]!=x)
        x = parent[x];
    return x;
}

void make_union(int x, int y){
    //cout<<"in make =
    int xset = find(x);
    int yset = find(y);
    //cout<<"xset, yset = "<<xset<<" "<<yset<<"\n";
    if(xset==yset)
        return;
    if(rck[xset]>rck[yset]){
        parent[yset] = parent[xset];
        rck[xset]+=rck[yset];
        rck[yset]=0;
    }
    else {
        parent[xset] = parent[yset];
        rck[yset]+=rck[xset];
        rck[xset]=0;
    }

}

void printComp(){
    vector<int>v;
    //cout<<"rck.size() = "<<rck.size()<<"\n";
    for(int i=1;i<rck.size();i++)
        if(rck[i]>0)
            v.push_back(rck[i]);

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<"\n";
}

int main(){
    fast;
    int n,m,x,y;
    cin>>n>>m;
    init(n);
    for(int i=0;i<m;i++){
        cin>>x>>y;
        make_union(x,y);
        printComp();
    }


}
