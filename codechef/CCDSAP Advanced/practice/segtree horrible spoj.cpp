#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void rangeUpdateLazy(lli lazy[], lli st[], lli qlow, lli qhigh, lli uV, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos] += (high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
        return;

    if(qlow<=low && qhigh>=high){
        st[pos] += (high-low+1)*uV;
        if(low!=high){
            lazy[2*pos]+=uV;
            lazy[2*pos+1]+=uV;
        }
    }
    else{
        int mid = (low+high)/2;
        rangeUpdateLazy(lazy,st,qlow,qhigh,uV,low,mid,2*pos);
        rangeUpdateLazy(lazy,st,qlow,qhigh,uV,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }

}

lli RMQ(lli lazy[], lli st[] ,lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(lazy[pos]!=0){
        st[pos]+=(high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    else{
        int mid = (low+high)/2;
        return RMQ(lazy,st,qlow,qhigh,low,mid,2*pos)+RMQ(lazy,st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}

int main(){
    fast;
    int t;
    lli type,l,r,x;
    cin>>t;
    while(t--){
        lli n,c;
        cin>>n>>c;
        lli a[n+1]={0};
        lli st[4*n+1]={0};
        lli lazy[4*n+1]={0};
        for(int i=0;i<c;i++){
            cin>>type>>l>>r;
            if(type==0){
                cin>>x;
                rangeUpdateLazy(lazy,st,l,r,x,1,n,1);
            }
            else{
                cout<<RMQ(lazy,st,l,r,1,n,1)<<"\n";
            }
        }
    }
}
