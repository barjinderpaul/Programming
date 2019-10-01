#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

pair<int,int> combine(pair<int,int>a, pair<int,int>b){
    if(a.first>b.first)
        return a;
    if(b.first>a.first)
        return b;
    return make_pair(a.first,a.second+b.second);
}

void build(int a[], pair<int,int>st[], int low, int high, int pos){
    if(low==high)
        st[pos] = make_pair(a[low],1);
    else{
        int mid = (low+high)/2;
        build(a,st,low,mid,2*pos);
        build(a,st,mid+1,high,2*pos+1);
        st[pos] = combine(st[2*pos],st[2*pos+1);
    }
}

pair<int,int> RMQ(pair<int,int>st,int l, int r,int x, int low, int high, int pos){
    if(l>r)
        return make_pair(INT_MIN,0);
    if(l<=low && high<=r){
        return t[pos];
    }
    int mid = (low+high)/2;
    return combine(
                   RMQ(st,l,r,x,)
                   );
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
//    int st[4*n+1];
    pair<int,int>st[4*n+1];
    build(a,st,1,n-1,1);
    int q,l,r,x;
    cin>>q;
    while(q--){
        cin>>l>>r>>x;
        pair<int,int>p = RMQ(st,l,r,x,1,n-1,1);
        cout<<p.second<<"\n";
    }

}
