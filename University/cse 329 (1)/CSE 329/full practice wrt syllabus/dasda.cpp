#include<bits/stdc++.h>
using namespace std;
bool bp(vector<int>adj[], int colour[], int source){
    colour[source]=1;
    queue<int>q;
    q.push(source);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(int i=0;i<adj[f].size();i++){
            if(colour[adj[f][i]]==-1){
                colour[adj[f][i]] = 1 - colour[f];
                q.push(adj[f][i]);
            }
            else if(colour[adj[f][i]] == colour[f])
                return 0;
        }
    }
    return 1;
}

int main(){
    fast;
    int t,vertices,edges,vertex,vertex2;
    cin>>t;
    while(t--){
        cin>>vertices>>edges;
        vector<int>adj[vertices+1];
       for(int i=0;i<edges;i++){
            cin>>vertex>>vertex2;
            adj[vertex].push_back(vertex2);
            adj[vertex2].push_back(vertex);
        }

        int colour[vertices+1],f=0;
        for(int i=0;i<=vertices;i++)
            colour[i]=-1;
        for(int i=1;i<=vertices;i++){
            if(colour[i]==-1){
                if(!bp(adj,colour,i)){
                     f=1;
                }
            }
        }
        if(f==0){
            cout<<"yes\n";
        }
        else
        	cout<<"no"
    }
}

