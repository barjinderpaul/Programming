#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void updateRange(lli st[], lli qlow, lli qhigh, lli uV,lli low, lli high, lli pos){
    if(qlow>high || qhigh<low)
        return;
    if(low==high){
        st[pos]+=uV;
        return;
    }
    else{
        lli mid = (low+high)/2;
        updateRange(st,qlow,qhigh,uV,low,mid,2*pos);
        updateRange(st,qlow,qhigh,uV,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

lli RSQ(lli st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        lli mid = (low+high)/2;
        return RSQ(st,qlow,qhigh,low,mid,2*pos)+RSQ(st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}

int main(){
    fast;
    lli t,n,q,type,l,r,x;
    cin>>t;
    while(t--){
        cin>>n;
        lli st[4*n+1]={0};
        cin>>q;
        while(q--){
            cin>>type>>l>>r;
            if(type==0){
                cin>>x;
                updateRange(st,l,r,x,1,n,1);
            }
            else
                cout<<RSQ(st,l,r,1,n,1)<<"\n";
        }
    }
}
