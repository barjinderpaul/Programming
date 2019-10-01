#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void build_tree(lli a[] , lli st[] , lli low, lli high, lli pos){
    if(low==high)
        st[pos]=a[low];
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = st[2*pos+1]+st[2*pos];
    }
}

void updateRange(lli st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow>high || qhigh<low)
        return;
    if(low==high)
        st[pos] = floor(sqrt(st[pos]));
    else{
        lli mid = (low+high)/2;
        updateRange(st,qlow,qhigh,low,mid,2*pos);
        updateRange(st,qlow,qhigh,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

lli RSQ(lli st[], lli qlow, lli qhigh , lli low, lli high , lli pos){
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
    //fast;
    lli q,type,l,r;
    int n;
    int rc;
    lli i=1;
    while((rc=scanf("%d",&n))>0){
        lli a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        lli st[4*n+1];
        build_tree(a,st,1,n,1);
        //cout<<"Tree built\n";
        cout<<"Case #"<<i<<":\n";
        i++;
        cin>>q;
        while(q--){
            cin>>type>>l>>r;
            if(l>r)
                swap(l,r);
            if(type==1)
                printf("%lld\n",RSQ(st,l,r,1,n,1));
            else
                updateRange(st,l,r,1,n,1);
        }
        cout<<"\n";
    }
}

