#include<bits/stdc++.h>
using namespace std;

void build(int a[], int st[], int low, int high, int pos){
    cout<<"pos = "<<pos<<"\n";
    if(low==high){
        st[pos] = a[low];
        return;
    }
    int mid = (low+high)/2;
    build(a,st,low,mid,2*pos+1);
    build(a,st,mid+1,high,2*pos+2);
    st[pos] = min(st[2*pos+1],st[2*pos+2]);
}

int RMQ(int st[], int l, int r, int low, int high, int pos){
    if(l<=low && r>=high)
        return st[pos];
    if(l>high || r<low)
        return INT_MAX;
    int mid = (low+high)/2;
    return min(RMQ(st,l,r,low,mid,2*pos+1),
               RMQ(st,l,r,mid+1,high,2*pos  +2)
               );
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int st[4*n];
    build(a,st,0,n-1,0);
    int q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        cout<<RMQ(st,l,r,0,n-1,0)<<"\n";
    }

}
