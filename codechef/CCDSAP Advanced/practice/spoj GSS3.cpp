#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    lli pS;lli sS;lli tS;lli mS;
};

void build_tree(lli a[], node st[], lli low, lli high, lli pos){
    if(low==high)
        st[pos] = ((node){a[low],a[low],a[low],a[low]});
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);

        node left = st[2*pos];
        node right = st[2*pos+1];

        st[pos].pS = max(left.pS , left.tS+right.pS);
        st[pos].sS = max(right.sS, right.tS+left.sS);
        st[pos].tS = left.tS + right.tS;
        st[pos].mS = max(right.pS+left.sS, max(left.mS,right.mS));
    }
}

node RMQ(node st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high)
        return st[pos];
    if(qlow>high || qhigh<low)
        return ((node){INT_MIN,INT_MIN,INT_MIN,INT_MIN});
    else{
        int mid = (low+high)/2;
        node left = RMQ(st,qlow,qhigh,low,mid,2*pos);
        node right = RMQ(st,qlow,qhigh,mid+1,high,2*pos+1);
        node temp;
        temp.pS = max(left.pS , left.tS + right.pS);
        temp.sS = max(right.sS , right.tS + left.sS);
        temp.tS = left.tS + right.tS;
        temp.mS = max(left.sS + right.pS , max(left.mS,right.mS));
        return temp;
    }
}


void updateTree(node st[], int low, int high, int uI, int uV, int pos){

    //out of bounds;
    if(uI>high || uI<low)
        return;
    if(low==high){//Node to update found;
        st[pos] = ((node){uV,uV,uV,uV});
        return;
    }
    else{
        int mid = (low+high)/2;
        updateTree(st,low,mid,uI,uV,2*pos);
        updateTree(st,mid+1,high,uI,uV,2*pos+1);
        node left = st[2*pos];
        node right = st[2*pos+1];

        st[pos].pS = max(left.pS , left.tS+right.pS);
        st[pos].sS = max(right.sS, right.tS+left.sS);
        st[pos].tS = left.tS + right.tS;
        st[pos].mS = max(right.pS+left.sS, max(left.mS,right.mS));
        }
}
int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i+=1)
        cin>>a[i];
    node st[4*n+1];
    build_tree(a,st,1,n,1);
    lli q,l,r,type;
    cin>>q;
    //cout<<"n ,q = "<<n<<" "<<q<<"\n";
    while(q--){
        cin>>type>>l>>r;
        if(type==0){
            updateTree(st,1,n,l,r,1);
        }
        else{
            node ans = RMQ(st,l,r,1,n,1);
            cout<<ans.mS<<"\n";
        }
    }
}
