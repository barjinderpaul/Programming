#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

/*

    //Heaps max and min heap//

void displayMax(priority_queue<lli>pq){
    while(!pq.empty()){
        lli t = pq.top();pq.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
}

void displayMin(priority_queue<lli,vector<lli>,greater<lli> > pq){
    while(!pq.empty()){
        lli t = pq.top();pq.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
}

int main(){
    lli n,val;
    cin>>n;
    priority_queue<lli>maxHeap;
    priority_queue<lli,vector<lli>,greater<lli>>minHeap;
    for(int i=0;i<n;i++){
        cin>>val;
        maxHeap.push(val);
        minHeap.push(val);
    }
    displayMax(maxHeap);
    displayMin(minHeap);
}

*/




    //Binary Trees;
    //1. insertion O(n^2)
    //2. insertion O(n)
    //3. preorder, inorder, postorder
    //4. Level Wise Print or BFS

struct node{
    lli data;
    node *right,*left;
};
queue<node *> optimizedInsertionQueue;

node *newnode(lli data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root){
    if(!root){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void insert(node **root,lli data){
    node *toAdd = newnode(data);
    if(!(*root)){
        *root = toAdd;
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(!temp->left){
            temp->left = toAdd;
            return;
        }
        if(!temp->right){
            temp->right = toAdd;
            return;
        }
        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }
}

void insertOptimized(node **root, lli data){
    node *toAdd = newnode(data);
    if(!(*root)){
        *root = toAdd;
        optimizedInsertionQueue.push(toAdd);
        return;
    }
    while(!optimizedInsertionQueue.empty()){
        node *t = optimizedInsertionQueue.front();
        if(!t->left){
            t->left = toAdd;
            optimizedInsertionQueue.push(toAdd);
            break;
        }
        else if(!t->right){
            t->right = toAdd;
            optimizedInsertionQueue.push(toAdd);
            break;
        }
        else
            optimizedInsertionQueue.pop();
    }
}



void printingLevelWise(node *root){
    queue<node *>q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        node *temp = q.front();
        q.pop();
        if(temp == NULL){
            q.push(NULL);
            cout<<"\n";
        }
        else{
            cout<<temp->data << " ";
            if(temp->left)
                q.push(temp->left);
            if(temp->right)
                q.push(temp->right);
        }
    }

}

int main(){
    node *root = NULL;
    lli n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }
    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";

    lli n2;
    cin>>n2;
    node *root2 = NULL;
    for(int i=0;i<n;i++){
        cin>>val;
        insertOptimized(&root2,val);
    }
    preorder(root2);
    cout<<"\n";
    inorder(root2);
    cout<<"\n";
    postorder(root2);
    cout<<"\n";

    printingLevelWise(root);
    cout<<"\n";

}




/*
    //Binary Search Trees;
    1. insertion;
struct node{
    lli data;
    node *left, *right;
};

node *newnode(lli data){
    node *newNode = new node;
    newNode->data = data;
    newNode ->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root, lli data){
    node *toAdd = newnode(data);
    if(!(*root) ){
        *root = toAdd;
        return;
    }
    queue<node *>q;
    q.push(*root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp==NULL){
            temp = toAdd;
            return;
        }
        if(temp->data < data){
            insert( &(*root)->right,data );
        }
        else{
            insert( &(*root)->left,data );
        }

    }
}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}



int main(){
    node *root = NULL;
    lli n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        insert(&root,val);
    }

    inorder(root); //gives sorted array as it is a BST;
    return 0;
}

*/




