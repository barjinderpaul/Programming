#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

bitset<5001>st1[400001];
bitset<5001>st2[400001];

void build_tree(lli a[], lli b[], lli low, lli high, lli pos){
    if(low>high)
        return;
    if(low==high){
        st1[pos].set(a[low]);
        st2[pos].set(b[low]);
    }
    else{
        lli mid = (low+high)/2;
        build_tree(a,b,low,mid,2*pos);
        build_tree(a,b,mid+1,high,2*pos+1);
        st1[pos] = st1[2*pos] | st1[2*pos+1];
        st2[pos] = st2[2*pos] | st2[2*pos+1];
    }
}

bitset<5001> RMQ(bitset<5001>st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    if(qlow>high || qhigh<low || low>high){
        return 0;
    }
    else{
        lli mid = (low+high)/2;
        bitset<5001>b1 = RMQ(st,qlow,qhigh,low,mid,2*pos);
        bitset<5001>b2 = RMQ(st,qlow,qhigh,mid+1,high,2*pos+1);
        return b1|b2;
    }
}

int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n+1],b[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    build_tree(a,b,1,n,1);
    lli q,l,r,x,y;
    cin>>q;
    while(q--){
        cin>>l>>r>>x>>y;
        bitset<5001> b1 = RMQ(st1,l,r,1,n,1);
        bitset<5001> b2 = RMQ(st2,x,y,1,n,1);
        cout<<(b1|b2).count()<<"\n";
    }
}

/*
    //////////// Partialy Working //////////////////////
struct node{
    lli s;
    set<lli>ps;
};

void build_tree(lli a[], node st[], lli low, lli high, lli pos){
    if(low==high){
        st[pos].s = 1;
        set<lli> pushing;
        pushing.insert(a[low]);
        st[pos].ps = pushing;
    }
    else{
        lli mid = (low+high)/2;
        build_tree(a,st,low,mid,2*pos);
        build_tree(a,st,mid+1,high,2*pos+1);
        set<lli>s1 = st[2*pos].ps;
        set<lli>s2 = st[2*pos+1].ps;
        set<lli>f;
        merge(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(f, f.end()));

        for(auto it = temp.begin();it!=temp.end();it++){
            pushing.insert(*it);
        }
        for(auto it = temp2.begin();it!=temp2.end();it++){
            pushing.insert(*it);
        }
        st[pos].s = f.size();
        st[pos].ps = f;
    }
}

void displayST(node st1[], node st2[], lli n){
    cout<<"first\n";
    for(int i=1;i<=4*n+1;i++)
        cout<<st1[i].s<<" ";
    cout<<"\nSecond\n";
    for(int i=1;i<=4*n+1;i++)
        cout<<st2[i].s<<" ";
}

set<lli> RMQ(node st[], lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow<=low && qhigh>=high){
        //cout<<"returning with size = "<<st[pos].s<<"\n";
        //cout<<"elements returned\n";
        set<lli> ss = st[pos].ps;
        //for(auto it=ss.begin();it!=ss.end();it++)
        //    cout<<*it<<" ";
        //cout<<"\n";
        return st[pos].ps;
    }
    if(qlow>high || qhigh<low || low>high){
        set<lli>p;
        //cout<<"empty set = "<<p.size()<<"\n";
        return p;
    }
    else{
        lli mid = (low+high)/2;


        set<lli>s1 = RMQ(st,qlow,qhigh,low,mid,2*pos);
        set<lli>s2 = RMQ(st,qlow,qhigh,mid+1,high,2*pos+1);
        set<lli>f;
        merge(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(f, f.end()));

        for(auto it = temp.begin();it!=temp.end();it++){
            pushing.insert(*it);
        }
        for(auto it = temp2.begin();it!=temp2.end();it++){
            pushing.insert(*it);
        }
        //cout<<"final size = "<<pushing.size()<<"\n";
        return f;
    }
}

int main(){
    fast;
    lli n;
    cin>>n;
    lli a[n+1];
    lli b[n+1];
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
        cin>>b[i];
    node st1[4*n+1];
    node st2[4*n+2];
    build_tree(a,st1,1,n,1);
    build_tree(b,st2,1,n,1);
    //displayST(st1,st2,n);
    lli q,l,r,x,y;
    cin>>q;
    while(q--){
        //cout<<"\n--------------\nStart of query\n-----------\n";
        cin>>l>>r>>x>>y;
        set<lli>s1 = RMQ(st1,l,r,1,n,1);
        set<lli>s2 = RMQ(st2,x,y,1,n,1);
        set<lli>f;
        merge(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(f, f.end()));
        cout<<f.size()<<"\n";
        for(auto it = s1.begin();it!=s1.end();it++){
            //cout<<"*it = "<<*it<<"\n";
            f.insert(*it);
        }
        //cout<<"second\n";
        for(auto it = s2.begin();it!=s2.end();it++){
            //cout<<"*it = "<<*it<<"\n";
            f.insert(*it);
        }

        cout<<f.size()<<"\n";
    }

}
*/

