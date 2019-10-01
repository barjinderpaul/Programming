#include<bits/stdc++.h>
using namespace std;

void dispMinHeap(priority_queue<int,vector<int>,greater<int>> pq1){
    cout<<"Min heap queue\n";
    while(!pq1.empty()){
        int t = pq1.top();
        pq1.pop();
        cout<<t<<" ";
    }
}

void dispMaxHeap(priority_queue<int>pq){
    cout<<"Max heap\n";
    while(!pq.empty()){
        int t = pq.top();
        pq.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
}
int main(){
    int n,val;
    cin>>n;
    priority_queue<int>pq; //max heap
    priority_queue<int,vector<int>,greater<int> >pq1; //min heap
    for(int i=0;i<n;i+=1){
        cin>>val;
        pq.push(val);
        pq1.push(val);
    }
    int k,i=1;
    cin>>k;
    if(k>pq.size())
        cout<<"Invalid k\n";
    else{
        while(!pq.empty()){
            int t=pq.top();
            pq.pop();
            if(i==k){
                cout<<t;
                break;
            }
            i+=1;
        }
    }
}
