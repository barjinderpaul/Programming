#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void build_tree(lli a[], vector<lli>st[], lli low, lli high, lli pos){
    if(low==high){
        st[pos].push_back(a[low]);
        return;
    }
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        merge(st[2*pos].begin(),st[2*pos].end(),st[2*pos+1].begin(),st[2*pos+1].end(),back_inserter(st[pos]));
    }
}

lli RMQ(vector<lli> st[], lli qlow, lli qhigh, lli k , lli low ,lli high, lli pos){
    if(qlow>high || qhigh<low)
        return 0;
    if(qlow<=low && qhigh>=high){
        //cout<<"Complete overlap at = low,high,pos  = "<<low<<" "<<high<<" "<<pos<<"\n";
        //cout<<"val - "<<st[pos].size() - (upper_bound(st[pos].begin(),st[pos].end(),k)-st[pos].end())<<"\n";
        return st[pos].size() - (upper_bound(st[pos].begin(),st[pos].end(),k)-st[pos].begin());
    }

        lli mid = (low+high)/2;
        return RMQ(st,qlow,qhigh,k,low,mid,2*pos) + RMQ(st,qlow,qhigh,k,mid+1,high,2*pos+1);

}


void dispalyTree(vector<lli>st[], lli n){
        cout<<"\nDisplaying tree\n;";
        for(int i=1;i<=4*n;i+=1){
            cout<<"\ni="<<i<<"\n";
            for(auto it=st[i].begin();it!=st[i].end();it++)
                cout<<*it<<" ";
        }
        cout<<"\nends here\n";
}

int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    vector<lli> st[4*n+1];
    build_tree(a,st,1,n,1);
    //dispalyTree(st,n);
    lli q,i,j,k;
    int ans=0;
    cin>>q;
    while(q--){
        cin>>i>>j>>k;
        //cout<<"before = "<<i<<" "<<j<<" "<<k<<"\n";
        i=i^ans;
        j=j^ans;
        k=k^ans;
        //cout<<"after = "<<i<<" "<<j<<" "<<k<<"\n";
        if(i<1)
            i=1;
        if(j>n)
            j=n;
        ans = RMQ(st,i,j,k,1,n,1);
        cout<<ans<<"\n";

    }
}
