#include<bits/stdc++.h>
using namespace std;

void topologicalSort(list<int>adj[],int source, stack<int> &st, int visited[]){
    visited[source]=1;
    for(auto it=adj[source].begin();it!=adj[source].end();it++){
        if(!visited[*it]){
            topologicalSort(adj,*it,st,visited);
        }
    }
    st.push(source);

}

int main(){
    int v,e,v1,v2;
    cin>>v>>e;
    list<int>adj[v+1];
    while(e--){
        cin>>v1>>v2;
        adj[v1].push_back(v2);
    }
    int visited[v+1]={0};
    stack<int>st;
    for(int i=1;i<=v;i++){
        if(!visited[i]){
            topologicalSort(adj,i,st,visited);
        }
    }
    cout<<"After topological sort\n";
    while(!st.empty()){
        int t = st.top();
        st.pop();
        cout<<t<<" ";
    }
}
