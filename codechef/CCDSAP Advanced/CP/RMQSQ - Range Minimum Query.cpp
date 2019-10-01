#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void createSegmentTree(lli a[], lli ST[], lli low, lli high, lli pos){
    if(low==high){
        ST[pos] = a[low];
        return;
    }
    lli mid = (low+high)/2;
    createSegmentTree(a,ST,low,mid,2*pos+1);
    createSegmentTree(a,ST,mid+1,high,2*pos+2);
    ST[pos] = min(ST[2*pos+1],ST[2*pos+2]);

}

lli RMQ(lli ST[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high){
        return ST[pos];
    }
    if(qlow>high || qhigh<low){
        return INT_MAX;
    }
    lli mid = (low+high)/2;
    return min(RMQ(ST,qlow,qhigh,low,mid,2*pos+1),
               RMQ(ST,qlow,qhigh,mid+1,high,2*pos+2)
               );
}

int main(){
    fast;
    lli n,q,qlow,qhigh;
    cin>>n;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    lli ST[4*n];
    createSegmentTree(a,ST,0,n-1,0);
    cin>>q;
    while(q--){
        cin>>qlow>>qhigh;
        cout<<RMQ(ST,qlow,qhigh,0,n-1,0)<<"\n";
    }
}
