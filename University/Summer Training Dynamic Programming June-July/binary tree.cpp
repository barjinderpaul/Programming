#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};
queue<node *>q;

node *newnode(int val){
    node *newNode = new node;
    newNode->data = val;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void insert(node **root, int val){
    node *toAdd = newnode(val);
    if(*root==nullptr){
        *root = toAdd;
        q.push(*root);
        return;
    }
    while(!q.empty()){
        node *f = q.front();
        //cout<<"front = "<<f->data<<" ";

        if(f->left==nullptr){
            f->left = toAdd;
            q.push(f->left);
            return;
        }
        else if(f->right==nullptr){
            f->right = toAdd;
            q.push(f->right);
            return;
        }
        else
            q.pop();

    }

}

void inorder(node *root){
    if(root==nullptr)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(node *root){
    if(root==nullptr)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<< " ";
}

void preorder(node *root){
    if(root==nullptr)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);


}

void bfs(node *root){
    if(root==nullptr)
        return;
    queue<node* >q;
    q.push(root);
    while(!q.empty()){
        node *f = q.front();
        q.pop();
        cout<<f->data<<" ";
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}

void levelWisePrint(node *root){
    if(root==nullptr)
        return;
    queue<node *>q;
    q.push(root);
    q.push(nullptr);
    int level=0;
    cout<<"level = "<<level<<"\n";
    while(q.size()>1){
        node *f = q.front();
        q.pop();
        if(f==nullptr){
            q.push(nullptr);
            level++;
            cout<<"\nlevel = "<<level<<"\n";
        }
        else{
            cout<<f->data<<" ";
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
    }
}

void inorder_iterative(node *root){
    if(root==nullptr)
        return;
    node *curr = root;
    stack<node *>st;
    while(curr!=nullptr || !st.empty()){
        while(curr!=nullptr){
            st.push(curr);
            curr=curr->left;
        }
        curr = st.top();
        st.pop();
        cout<<curr->data<<" ";
        curr = curr->right;
    }
}

void preorder_iterative(node *root){
    if(root==nullptr)
        return;
    node *curr = root;
    stack<node *>st;
    st.push(root);
    while(!st.empty()){
        node *t = st.top();
        st.pop();
        cout<<t->data<<" ";
        if(t->right)
            st.push(t->right);
        if(t->left)
            st.push(t->left);
    }
}

void postorder_iterative(node *root){

}
int main(){
    int n,val;
    node *root = nullptr;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>val,insert(&root,val);

    cout<<"inorder recursive = ";
    inorder(root);
    cout<<"\ninorder iterative = ";
    inorder_iterative(root);

    cout<<"\nPreorder : ";
    preorder(root);
    cout<<"\npreorder iterative = ";
    preorder_iterative(root);

    cout<<"\nPostorder : ";
    postorder(root);
    cout<<"\npostorder iterative\n";
    postorder_iterative(root);

    cout<<"\nbfs = ";
    bfs(root);

    cout<<"\nlevel wise = \n";
    levelWisePrint(root);




}
