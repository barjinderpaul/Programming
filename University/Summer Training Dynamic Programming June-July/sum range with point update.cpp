#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high, int pos){
    if(low==high){
        st[pos] = a[low];
    }
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

void pointUpdate(int st[] , int uI, int uV, int low, int high, int pos){
    if(uI>high || uI<low)
        return;
    if(low==high){
        st[pos] = uV;
    }
    else{
        int mid = (low+high)/2;
        pointUpdate(st,uI,uV,low,mid,2*pos);
        pointUpdate(st,uI,uV,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

int RSQ(int st[] ,int qlow, int qhigh, int low, int high, int pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return (RSQ(st,qlow,qhigh,low,mid,2*pos) + RSQ(st,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    build_tree(a,st,1,n,1);
    int q,type,l,r;
    cin>>q;
    while(q--){
        cin>>type>>l>>r;
        if(type==1){
            pointUpdate(st,l,r,1,n,1);
        }
        else{
            cout<<RSQ(st,l,r,1,n,1)<<"\n";
        }
    }
}
