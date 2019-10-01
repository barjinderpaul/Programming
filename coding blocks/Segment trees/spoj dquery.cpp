#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

void build_tree(int a[], set<int>st[], int low, int high, int pos){
    if(low==high){
        st[pos].insert(a[low]);
    }
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        set_union(st[2*pos].begin(),st[2*pos].end(),st[2*pos+1].begin(),st[2*pos+1].end(),inserter(st[pos],st[pos].begin()));
    }
}

int countUnique(set<int>st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return st[pos].size();
    else{
        int mid = (low+high)/2;
        return countUnique(st,qlow,qhigh,low,mid,2*pos)+countUnique(st,qlow,qhigh,mid+1,high,2*pos+1);
    }
}

int main(){
    fast;
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    set<int>st[4*n+1];
    build_tree(a,st,1,n,1);
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<countUnique(st,l,r,1,n,1)<<"\n";
    }
}
