#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void displayMinHeap(priority_queue<lli,vector<lli>, greater<lli> > minHeap){
    cout<<"Min Heap\n";
    while(!minHeap.empty()){
        lli t = minHeap.top();
        minHeap.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
}

void displayMaxHeap(priority_queue<lli>maxHeap){
    cout<<"Max heap\n";
    while(!maxHeap.empty()){
        lli t = maxHeap.top();
        maxHeap.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
}

int main(){
    lli n,val;
    cin>>n;
    priority_queue<lli>maxHeap;
    priority_queue<lli , vector<lli>, greater<lli> > minHeap;
    for(int i=0;i<n;i++){
        cin>>val;
        maxHeap.push(val);
        minHeap.push(val);
    }
    displayMinHeap(minHeap);
    displayMaxHeap(maxHeap);
}
