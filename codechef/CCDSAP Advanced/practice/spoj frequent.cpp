#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    lli mf,lf,rf;
};

void build_tree(lli a[], node st[], lli low, lli high, lli pos){
    if(low==high)
        st[pos] = ((node){1,1,1});
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        //bottom up filling;
        node left = st[2*pos];
        node right = st[2*pos+1];

        if(a[low]==a[mid+1])
            st[pos].lf = left.lf + right.lf;
        else
            st[pos].lf = left.lf;

        if(a[mid]==a[high])
            st[pos].rf = left.rf  + right.rf;
        else
            st[pos].rf =  right.rf;

        if(a[mid]==a[mid+1])
            st[pos].mf = max({left.mf , right.mf,left.rf+right.lf});
        else
            st[pos].mf = max(left.mf,right.mf);
    }
}

node RMQ(lli a[],node st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high)
        return st[pos];
    if(qlow>high || qhigh<low)
        return ((node){INT_MIN,INT_MIN,INT_MIN});
    else{

        else{
            lli mid = (low+high)/2;
            node left = RMQ(a,st,qlow,qhigh,low,mid,2*pos);
            node right = RMQ(a,st,qlow,qhigh,mid+1,high,2*pos+1);

            node temp;
            if(a[low]==a[mid+1])
                temp.lf = left.lf + right.lf;
            else
                temp.lf = left.lf;

            if(a[mid]==a[high])
                temp.rf = left.rf  + right.rf;
            else
                temp.rf =  right.rf;

            if(a[mid]==a[mid+1])
                temp.mf = max({left.mf , right.mf,left.rf+right.lf});
            else
                temp.mf = max(left.mf,right.mf);
            return temp;

        }
    }
}

int main(){
    fast;
    lli n,q;
    while(1){
        cin>>n;
        if(n==0)
            break;
        cin>>q;
        lli a[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        node st[4*n+1];
        build_tree(a,st,1,n,1);
        lli l,r;
        while(q--){
            cin>>l>>r;
            cout<<RMQ(a,st,l,r,1,n,1).mf<<"\n";
        }
    }

}

