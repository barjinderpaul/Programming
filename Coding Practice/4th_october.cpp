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
#include<chrono>

using namespace std;
using namespace std::chrono;


struct node{
    int data;
    node *left,*right;
};

queue <node *> globalInsertionQueue;

node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root, int val){

    node *toAdd = newnode(val);
    if(*root == NULL){
        *root = toAdd;
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *front = q.front();
        q.pop();
        if(front->left == NULL){
            front->left = toAdd;
            return;
        }
        if(front->right == NULL){
            front->right = toAdd;
            return;
        }
        q.push(front->left);
        q.push(front->right);
    }
}

void preorder(node *root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void optimizedInsertion(node **root1, int val){
    node *toAdd = newnode(val);
    if(*root1 == NULL){
        *root1 = toAdd;
        globalInsertionQueue.push(*root1);
        return;
    }

    while(!globalInsertionQueue.empty()){
        node *front = globalInsertionQueue.front();
        if(front->left == NULL){
            front->left = toAdd;
            globalInsertionQueue.push(toAdd);
            return;
        }
        else if(front->right==NULL){
            front->right = toAdd;
            globalInsertionQueue.push(toAdd);
            return;
        }
        else{
            globalInsertionQueue.pop();
        }

    }
}

void savePreorder(node *root, vector<int>&preorderVector){
    if(!root){
        return;
    }
    preorderVector.emplace_back(root->data);
    savePreorder(root->left,preorderVector);
    savePreorder(root->right,preorderVector);
}

bool matchPreorder(vector<int>preorder1, vector<int>preorder2){
    if(preorder1.size()!=preorder2.size())
        return 0;
    
    cout<<"Preordersizes = "<<preorder1.size()<<" "<<preorder2.size()<<"\n";

    for(int i=0;i<preorder1.size();++i){
        if(preorder1[i]!=preorder2[i]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int nodes;
    cin>>nodes;
    node *root = NULL;
    vector<int>givenValues;
    int val;
    for(int i=0;i<nodes;i++){
        cin>>val;
        givenValues.push_back(val);
    }
    

    auto standardWayOfInsertionStart = high_resolution_clock::now();
    for(auto it:givenValues){
        insert(&root,it);
    }
    auto standardWayOfInsertionDone = high_resolution_clock::now();
    auto durationOfStandardWay = duration_cast<microseconds>(standardWayOfInsertionDone - standardWayOfInsertionStart);
    cout<<"\nTime taken for standard insertion = "<<durationOfStandardWay.count()<<" mircoseconds\n";
    

    //Doing with a little optimized way;
    //Using globally declared queue while insertion


    node *root1 = NULL;
    auto optimizedWayOfInsertionStart = high_resolution_clock::now();
    for(auto it:givenValues){
        optimizedInsertion(&root1,it);
    }

    auto optimizedWayOfInsertionDone = high_resolution_clock::now();
    auto durationOfOptimizedWay = duration_cast<microseconds>(optimizedWayOfInsertionDone - optimizedWayOfInsertionStart );
    cout<<"\nTime taken for optimized insertion = "<<durationOfOptimizedWay.count()<<" microseconds\n";

    //Checking if preorder for both are same or not
    vector<int> preorderOfStandardWay,preorderOfOptimizedWay;
    savePreorder(root,preorderOfStandardWay);
    savePreorder(root,preorderOfOptimizedWay);
    matchPreorder(preorderOfOptimizedWay,preorderOfStandardWay) ? cout<<"Preorder Match" : cout<<"Preorder does not match";


}