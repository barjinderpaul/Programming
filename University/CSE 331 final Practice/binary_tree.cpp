#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left,*right;
};
queue<node *>q;
node *newnode(int data){
    node *newNode = new node;
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insert(node **root,int data){
    node *toAdd = newnode(data);
    if(!(*root)){
        *root = toAdd;
        q.push(toAdd);
        return;
    }
    while(!q.empty()){
        node *t = q.front();
        if(!t->left){
            t->left = toAdd;
            q.push(toAdd);
            break;
        }
        else if(!t->right){
            t->right = toAdd;
            q.push(toAdd);
            break;
        }
        else
            q.pop();
    }
}

void preorder(node *root){
    if(!root)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(node *root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(node *root){
    if(!root)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

bool searchKey(node *root, int key){
    if(!root)
        return false;
    queue<node *>q;
    q.push(root);
    while(!q.empty()){
        node *temp = q.front();
        q.pop();
        if(temp->data == key){
            return 1;
        }
        if(temp->left)  q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
    return 0;
}

void deleteFromTree(node **root, int data){
    if(!(*root)){
        cout<<"Tree already empty\n";
        return;
    }
    if( (*root)->data == data ){
        free(*root);
        cout<<"Tree empty\n";
        return;
    }
    queue<node *>q;
    q.push(*root);
    node *deepestNode,*toDeleteNode;
    while(!q.empty()){
        deepestNode = q.front();
        q.pop();
        if(deepestNode->data == data)
            toDeleteNode = deepestNode;
        if(deepestNode->left)
            q.push(deepestNode->left);
        if(deepestNode->right)
            q.push(deepestNode->right);
    }

}

int main(){
    node *root = NULL;
    int n,val;
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

    int key;
    cin>>key;
    if(searchKey(root,key))
        cout<<"Key Found\n";
    else
        cout<<"Key not found\n";
        /*

    //Lowest common ancestor binary tree
    // can be useful to find distance between 2 pairs of nodes;
}
