#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void createST(lli a[],lli st[],lli low,lli high,lli pos){
    if(low==high){
        st[pos] = a[low];
        return;
    }
    lli mid = (low+high)/2;
    createST(a,st,low,mid,2*pos+1);
    createST(a,st,mid+1,high,2*pos+2);
    st[pos] = max(st[2*pos+1],st[2*pos+2]);
}

lli RMQ(lli st[],lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    if(qlow>high || qhigh<low){
        return -1;
    }
    lli mid = (low+high)/2;
    return max(RMQ(st,qlow,qhigh,low,mid,2*pos+1),
               RMQ(st,qlow,qhigh,mid+1,high,2*pos+2)
               );
}

int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n];
    lli k,val;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>k;
    lli st[4*n];
    createST(a,st,0,n-1,0);
    for(int i=0;i<=n-k;i++){
        lli qlow = i;
        lli qhigh;
        qhigh=i+k-1;

        //cout<<"qlow, qhigh = "<<qlow<< " "<<qhigh<<"\n";
        cout<<RMQ(st,qlow,qhigh,0,n-1,0)<<" ";
    }

}
