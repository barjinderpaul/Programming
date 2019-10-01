#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    lli prefixSum;
    lli suffixSum;
    lli totalSum;
    lli maxSum;
};

void build_tree(lli a[], node st[], int low, int high, int pos){
    if(low==high){
        st[pos] = ((node){a[low],a[low],a[low],a[low]});
    }
    else{
        int mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);

        node left = st[2*pos];
        node right = st[2*pos+1];

        st[pos].prefixSum = max(left.prefixSum , left.totalSum+right.prefixSum);
        st[pos].suffixSum = max(right.suffixSum , left.suffixSum+right.totalSum);
        st[pos].totalSum = left.totalSum + right.totalSum;
        st[pos].maxSum = max( left.suffixSum+right.prefixSum, max(left.maxSum,right.maxSum));
    }
}

node RMQ(node st[], int qlow, int qhigh, int low, int high, int pos){
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    if(qlow>high || qhigh<low){
        return ((node){INT_MIN,INT_MIN,INT_MIN,INT_MIN});
    }
    int mid = (low+high)/2;

    node left = RMQ(st,qlow,qhigh,low,mid,2*pos);
    node right = RMQ(st,qlow,qhigh,mid+1,high,2*pos+1);

    node temp;
    temp.prefixSum = max(left.prefixSum , left.totalSum + right.prefixSum);
    temp.suffixSum = max(right.suffixSum, right.totalSum + left.suffixSum);
    temp.totalSum = left.totalSum +  right.totalSum;
    temp.maxSum = max(left.suffixSum + right.prefixSum , max(left.maxSum,right.maxSum));
    return temp;

}

int main(){
    fast;
    lli n,val,q;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    node st[4*n+1];
    build_tree(a,st,1,n,1);
    cin>>q;
    int l,r;
    while(q--){
        cin>>l>>r;
        node ans = RMQ(st,l,r,1,n,1);
        cout<<ans.maxSum<<"\n";
    }
}

