#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void build_tree(lli a[], lli st[] ,lli low, lli high, lli pos){
    if(low==high)
        st[pos]=a[low];
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

void updateLazy(lli st[], lli lazy[], lli qlow, lli qhigh, lli uV, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow> high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        st[pos]+=uV;
        if(low!=high){
            lazy[2*pos]+=uV;
            lazy[2*pos+1]+=uV;
        }
        return;
    }
    else{
        lli mid = (low+high)/2;
        updateLazy(st,lazy,qlow,qhigh,uV,low,mid,2*pos);
        updateLazy(st,lazy,qlow,qhigh,uV,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

lli RMQLazy(lli st[], lli lazy[] , lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        lli mid = (low+high)/2;
        return min(RMQLazy(st,lazy,qlow,qhigh,low,mid,2*pos),RMQLazy(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

int main(){
    lli n,q;
    cin>>n>>q;
    lli a[n+1];
    lli st[4*n+1],lazy[4*n+1]={0};
    for(int i=1;i<=n;i++)
        cin>>a[i];
    build_tree(a,st,1,n,1);
    char type;
    lli l,r,x;
    while(q--){
        cin>>type>>l>>r;
        if(type=='u'){
            cin>>x;
            updateLazy(st,lazy,l,r,x,1,n,1);
        }
        else
            cout<<RMQLazy(st,lazy,l,r,1,n,1)<<"\n";

    }
}
