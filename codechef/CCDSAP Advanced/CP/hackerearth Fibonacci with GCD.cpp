#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
lli fib[1000001];

void calFib(){
    fib[0]=0;fib[1]=1;fib[2]=1;
    for(int i=3;i<1001;i++){
        fib[i] = fib[i-1]+fib[i-2];
    }
}

void createSegment(lli a[],lli st[], lli low, lli high ,lli pos){
    if(low==high){
        st[pos] = a[low];
        return;
    }
    lli mid = (low+high)/2;
    createSegment(a,st,low,mid,2*pos+1);
    createSegment(a,st,mid+1,high,2*pos+2);
    st[pos] = __gcd(st[2*pos+1],st[2*pos+2]);
}

lli RMQ(lli st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high){
        return fib[st[pos]];
    }
    if(qlow>high || qhigh<low){
        return -1;
    }
    lli mid = (low+high)/2;
    RMQ(st,qlow,qhigh,low,mid,2*pos+1);
    RMQ(st,qlow,qhigh,mid+1,high,2*pos+2);
}

int main(){
    lli n,q,qlow,qhigh;
    cin>>n>>q;
    lli a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    calFib();
    lli st[4*n];
    createSegment(a,st,0,n-1,0);
    while(q--){
        cin>>qlow>>qhigh;
        qlow-=1;qhigh-=1;
        cout<<RMQ(st,qlow,qhigh,0,n-1,0)<<"\n";
    }
}
