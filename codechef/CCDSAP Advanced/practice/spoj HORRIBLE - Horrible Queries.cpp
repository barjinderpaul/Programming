#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void updateLazy(lli st[],lli lazy[], lli qlow, lli qhigh, lli low, lli high, lli incVal, lli pos){
    if(lazy[pos]!=0){
        //cout<<" Resolving Updating lazy new added value = "<<high-low+1<<"\n";
        st[pos]+=(high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }
    if(qlow>high || qhigh<low)
        return;
    if(qlow<=low && qhigh>=high){
        //complete overlap;
       //cout<<"complete overlap lazy new added value = "<<high-low+1<<"\n";

        st[pos] += (high-low+1)*incVal;
        if(low!=high){
            lazy[2*pos]+=incVal;
            lazy[2*pos+1]+=incVal;
        }
        return;
    }
    else{
        lli mid = (low+high)/2;
        updateLazy(st,lazy,qlow,qhigh,low,mid,incVal,2*pos);
        updateLazy(st,lazy,qlow,qhigh,mid+1,high,incVal,2*pos+1);
        st[pos] = st[2*pos+1] + st[2*pos];
    }

}

lli RMQ(lli st[], lli lazy[], lli qlow, lli qhigh, lli low , lli high, lli pos){
    if(lazy[pos]!=0){
        //cout<<"RSQ lazy new added value = "<<high-low+1<<"\n";

        st[pos]+=(high-low+1)*lazy[pos];
        if(low!=high){
            lazy[2*pos]+=lazy[pos];
            lazy[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low){
        //cout<<"low, high, pos = "<<low<<" "<<high<<" "<<pos<<"\n";
        return 0;
    }


    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        lli mid = (low+high)/2;
        lli lS = RMQ(st,lazy,qlow,qhigh,low,mid,2*pos);
        lli rS = RMQ(st,lazy,qlow,qhigh,mid+1,high,2*pos+1);
        return lS+rS;
    }
}

void displayTree(lli st[], lli n){
    cout<<"\n-------\tDisplayingTree\t-------\n";
    for(int i=1;i<=4*n+1;i++)
        cout<<st[i]<<" ";
    cout<<"\nDisplay ends\n";
}

int main(){
    fast;
    lli t;
    cin>>t;
    while(t--){
        lli n,q;
        cin>>n>>q;
        lli st[4*n+1]={0};
        lli lazy[4*n+1]={0};
        lli type,l,r,x;
        while(q--){
            cin>>type>>l>>r;
               if(type==1){
                cout<<RMQ(st,lazy,l,r,1,n,1)<<"\n";
               }
               else{
                cin>>x;
                updateLazy(st,lazy,l,r,1,n,x,1);
                //displayTree(st,n);
               }
        }
    }
}
