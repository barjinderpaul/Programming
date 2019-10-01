#include<bits/stdc++.h>
using namespace std;

void build_tree(int a[], int st[] , int low, int high, int pos){
    if(low==high)
        st[pos]=a[low];
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = (st[2*pos]+st[2*pos+1]);
    }
}

void updatePoint(int st[], int uI, int uV, int low, int high, int pos){
    //no overlap;
    if(uI<low || uI>high)
        return;
    if(low==high)
        st[pos] = uV;
    else{
        int mid = (low+high)/2;
        updatePoint(st,uI,uV,low,mid,2*pos);
        updatePoint(st,uI,uV,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

void updateRange(int st[], int qlow, int qhigh, int uV, int low, int high, int pos){
    //no overlap;
    if(qlow>high || qhigh<low)
        return;
    if(low==high)
        st[pos]=uV;
    else{
        int mid = (low + high)/2;
        updateRange(st,qlow,qhigh,uV,low,mid,2*pos);
        updateRange(st,qlow,qhigh,uV,mid+1,high,2*pos+1);
        st[pos] = min(st[2*pos],st[2*pos+1]);
    }
}

int RMQ(int st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow<=low && qhigh>=high)
        return st[pos];

    if(qlow>high || qhigh<low)
        return INT_MAX;

        int mid = (low+high)/2;
        return min(RMQ(st,qlow,qhigh,low,mid,2*pos),RMQ(st,qlow,qhigh,mid+1,high,2*pos+1));


}

void updateLazy(int st[], int lazy[], int qlow, int qhigh, int low, int high, int incVal, int pos){

    //while updating if found any lazy value update it;
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            st[2*pos]+=lazy[pos];
            st[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    //no overlap;
    if(qlow>high || qhigh<low)
        return;
    //complete overlap;
    if(qlow<=low && qhigh>=high){
        st[pos]+=incVal;
        if(low!=high){
            lazy[2*pos] += incVal;
            lazy[2*pos+1] += incVal;
        }
        return;
    }
    else{
        int mid = (low+high)/2;
        updateLazy(st,lazy,qlow,qhigh,low,mid,incVal,2*pos);
        updateLazy(st,lazy,qlow,qhigh,mid+1,incVal,high,2*pos+1);
        st[pos] = (st[2*pos]+st[2*pos+1]);
    }

}

int RMQLazy(int st[], int lazy[], int qlow, int qhigh, int low, int high, int pos){
    if(lazy[pos]!=0){
        st[pos]+=lazy[pos];
        if(low!=high){
            st[2*pos]+=lazy[pos];
            st[2*pos+1]+=lazy[pos];
        }
        lazy[pos]=0;
    }

    if(qlow>high || qhigh<low)
        return INT_MAX;
    if(qlow<=low && qhigh>=high)
        return st[pos];
    else{
        int mid = (low+high)/2;
        return (RMQLazy(st,lazy,qlow,qhigh,low,mid,2*pos)+RMQLazy(st,lazy,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

void displayTree(int st[], int n){
    cout<<"Displaying tree\n";
    for(int i=1;i<=4*n+1;i++)
        cout<<st[i]<<" ";
    cout<<"\n";
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
    displayTree(st,n);
    /*
    //Simple Range update and point update without Lazy Propagation
    int q,type,l,r,x;
    cin>>q;
    while(q--){
        cin>>type>>l>>r;
        if(type==0){
            cout<<RMQ(st,l,r,1,n,1)<<"\n";
        }
        else if(type==1){
            cin>>x;
            updatePoint(st,l,x,1,n,1);
        }
        else{
            cin>>x;
            updateRange(st,l,r,x,1,n,1);
        }
    }
    */

    //updating with lazy values;

    int q,type,l,r,x;
    cin>>q;
    while(q--){
        cin>>type>>l>>r;
        if(type==0){
            cout<<RMQLazy(st,lazy,l,r,1,n,1)<<"\n";
        }
        else{
            cin>>x;
            updateLazy(st,lazy,l,r,1,n,x,1);
        }
    }

}
