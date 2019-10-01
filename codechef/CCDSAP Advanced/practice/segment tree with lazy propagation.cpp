#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[], int low, int high , int pos){
    if(low==high)
        st[pos] = a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

void updateLazy(int st[], int lazy[], int qlow, int qhigh, int low, int high, int incVal, int pos){
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){ //not a leaf node;
            st[2*pos]+=lazy[pos];
            st[2*pos]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    //no overlap;
    if(qlow>high || qhigh<low)
        return;


    //if complete overlap assign lazy value and return;
    if(low>=qlow && high<=qhigh){
        st[pos]+=incVal;
        if(low!=high){
            lazy[2*pos] += incVal;
            lazy[2*pos+1] += incVal;
        }
        return;
    }

    //partial overlap
    int mid = (low+high)/2;
    updateLazy(st,lazy,qlow,qhigh,low,mid,incVal,2*pos);
    updateLazy(st,lazy,qlow,qhigh,mid+1,high,incVal,2*pos+1);
    st[pos] = min(st[2*pos],st[2*pos+1]);


}

int queryLazy(int st[], int lazy[], int qlow, int qhigh, int low, int high, int pos){
    //resolving lazy value while going down on any path;

    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            lazy[2*pos] += lazy[pos];
            lazy[2*pos+1] += lazy[pos];
        }
        lazy[pos] = 0;
    }

    //complete overlap
    if(low>=qlow && high<=qhigh){
        //directly returning;
        return st[pos];
    }

    //no overlap;
    if(qlow>high || qhigh<low)
        return INT_MAX;



    //partial overlap
    int mid = (low+high)/2;
    return min(queryLazy(st,lazy,qlow,qhigh,low,mid,2*pos),
    queryLazy(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));





}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int st[4*n+1];
    int lazy[4*n+1]={0};
    build_tree(a,st,1,n,1);
    int q,type,l,r,incVal;
    cin>>q;
    while(q--){
        cin>>type>>l>>r;
        if(type==1){
            cin>>incVal;
            updateLazy(st,lazy,l,r,1,n,incVal,1);
            cout<<"\nTree updated\n";
        }
        else
            cout<<queryLazy(st,lazy,l,r,1,n,1)<<"\n";
    }
    return 0;
}
