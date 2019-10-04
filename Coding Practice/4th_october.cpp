/*
    Graphs : BFS, DFS;


#include<iostream>
#include<queue>
#include<list>
using namespace std;

void bfs(list<int>*adj, int v, int e, int source){
    cout<<"BFS Start\n";
    queue<int>q;
    int vis[v+1]={0};
    q.push(source);
    vis[source]=1;
    while(!q.empty()){
        int front = q.front();
        cout<<front<<" ";
        q.pop();
        vis[front]=1;
        for(auto it = adj[front].begin();it!=adj[front].end();it++){
            if(!vis[*it]){
                q.push(*it);
            }
        }
    }
}

void dfs(list<int>*adj, int source, int vis[]){
    vis[source]=1;
    cout<<source<<" ";
    for(auto it = adj[source].begin();it!=adj[source].end();it++){
        if(!vis[*it]){
            dfs(adj,*it,vis);
        }
    }
}

int main(){
    int v,e,v1,v2;

    cin>>v>>e;
    list<int>adj[v+1];
    for(int i=0;i<e;i++){
        cin>>v1>>v2;
        //Undirected Graph;
        adj[v1].push_back(v2);
        adj[v2].push_back(v1);
    }

    int source;
    cout<<"Enter source\n";
    cin>>source;

    bfs(adj,v,e,source);

    //Covers disconnected graph
    cout<<"\nDFS : ";
    int vis[v+1]={0};
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            dfs(adj,i,vis);
        }
    }
}

*/

/* Binary Tree */

#include<iostream>
#include<queue>

using namespace std;

struct node{
    int data;
    node *left,*right;
};

node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

int main(){
    int nodes;
    cin>>nodes;
    node *root = NULL;
    int val;
    cin

}