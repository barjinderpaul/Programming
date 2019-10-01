#include<bits/stdc++.h>
#define ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void calCost(priority_queue<lli, vector<lli> , greater<lli> >minHeap, lli &totalCost){
    lli temp=0;
    while(minHeap.size()>1){
        lli f = minHeap.top();minHeap.pop();
        lli s = minHeap.top();minHeap.pop();
        temp=(f+s);
        minHeap.push(temp);
        totalCost+=temp;
    }
}

int main(){
    lli n,val;
    cin>>n;
    priority_queue<lli, vector<lli>, greater<lli> >minHeap;
    for(int i=0;i<n;i++)
        cin>>val,minHeap.push(val);
    lli totalSum=0;
    calCost(minHeap,totalSum);
    cout<<totalSum;
}
