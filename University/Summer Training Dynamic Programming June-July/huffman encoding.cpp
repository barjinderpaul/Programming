#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    int freq;
    char ch;
    node *left,*right;
};

node *newnode(int data, char ch){
    node *newNode = new node;
    newNode->freq = data;
    newNode->ch = ch;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct cmp{
    bool operator()(node *a, node *b){
        return (a->freq > b->freq);
}
};

void printEncoding(node *root, string s){
    if(root==NULL)
        return;
    if(root->ch!='$')
        cout<<s<<" ";
    printEncoding(root->left,s + "0");
    printEncoding(root->right,s  + "1");
}

void HuffmanEncoding(int freq[],int n,string s){
    //int leftFreq,rightFreq;
    priority_queue<node *,vector<node *>,cmp>minHeap;
    node *left,*right,*top;
    for(int i=0;i<n;i++){
        minHeap.push(newnode(freq[i],s[i]));
    }

    while(minHeap.size()>1){
        left = minHeap.top();
        minHeap.pop();
        right = minHeap.top();
        minHeap.pop();
        //cout<<"left,right = "<<left->freq<<" "<<right->freq<<"\n";

        int sum = left->freq + right->freq;
        top = newnode(sum,'$');
        top->left = left;
        top->right = right;
        minHeap.push(top);
    }
//    cout<<"last top  = "<<minHeap.top()->freq<<" ";
    printEncoding(minHeap.top(),"");
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        //priority_queue<int,vector<int>,greater<int>>minHeap;
        string s;
        cin>>s;
        int freq[s.length()];
        for(int i=0;i<s.length();i++)
            cin>>freq[i];
        HuffmanEncoding(freq,s.length(),s);

    }

}
