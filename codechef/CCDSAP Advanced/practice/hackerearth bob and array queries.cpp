#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef uint64_t lli;

void build_tree(lli a[], lli st[], lli low, lli high,lli pos){
    if(low==high){
        //cout<<"position = "<<pos<<"\n";
        st[pos] = __builtin_popcount(a[low]);
    }
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

void updateTree(lli st[], lli low, lli high, lli uI, lli pos, lli increasing){

    //out of bounds;
    if(uI>high || uI<low)
        return;
    if(low==high){//Node to update found;
        if(increasing)
            st[pos]+=1;
        else
            if(st[pos]>0)
                st[pos]-=1;
        return;
    }
    else{
        int mid = (low+high)/2;
        updateTree(st,low,mid,uI,2*pos,increasing);
        updateTree(st,mid+1,high,uI,2*pos+1,increasing);
        st[pos] = st[2*pos] + st[2*pos+1];
    }
}

lli RMQ(lli st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high)
        return st[pos];
    if(qlow>high || qhigh<low)
        return 0;
    else{
        lli mid = (low+high)/2;
        return (RMQ(st,qlow,qhigh,low,mid,2*pos) + RMQ(st,qlow,qhigh,mid+1,high,2*pos+1));
    }
}

void displayST(lli st[],lli n){
    cout<<"\nstart\n";
    for(int i=1 ; i<=4*n+1;i++)
        cout<<st[i]<<" ";
    cout<<"\n";
}

int main(){
    fast;
    lli n,q;
    cin>>n>>q;
    lli a[n+1]={0};
    //cout<<"Allocated\n";
    lli st[4*n+1];
    build_tree(a,st,1,n,1);
    lli type,l,r;
    //cout<<"Tree build\n";
    while(q--){
        cin>>type;
        if(type==1 || type==2){
            cin>>l;
            lli increasing=0;
            if(type==1)
                increasing=1;
            else
                increasing=0;
            updateTree(st,1,n,l,1,increasing);
            //displayST(st,n);
        }
        else{
            cin>>l>>r;
            //r-=1;
            //cout<<"\nquery\n";
            cout<<RMQ(st,l,r,1,n,1)<<"\n";
        }
    }
}
