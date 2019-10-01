#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

struct node{
    lli total=0,opening=0,closing=0;
};

void build_tree(string s, node st[], lli low, lli high, lli pos){
    if(low==high){
        if(s[low]=='(')
            st[pos].opening=1;
        else
            st[pos].closing=1;
    }
    else{
        lli mid = (low+high)/2;
        build_tree(s,st,low,mid,2*pos+1);
        build_tree(s,st,mid+1,high,2*pos+2);
        lli temp =  min(st[2*pos+1].opening,st[2*pos+2].closing);
        st[pos].total = st[2*pos+1].total + st[2*pos+2].total + temp;
        st[pos].opening = st[2*pos+1].opening + st[2*pos+2].opening - temp;
        st[pos].closing = st[2*pos+1].closing + st[2*pos+2].closing - temp;
    }
}

node RMQ(node st[] , lli qlow, lli qhigh, lli low, lli high, lli pos){
    if(qlow>high || qhigh<low){
        return ((node){0,0,0});
    }
    if(qlow<=low && qhigh>=high){
        return st[pos];
    }
    else{
        lli mid = (low+high)/2;
        node left = RMQ(st,qlow,qhigh,low,mid,2*pos+1);
        node right = RMQ(st,qlow,qhigh,mid+1,high,2*pos+2);
        node ans;
        lli temp = min(left.opening,right.closing);
        ans.total = left.total + right.total + temp;
        ans.opening = left.opening + right.opening - temp;
        ans.closing = left.closing + right.closing - temp;
        return ans;
    }
}

int main(){
    string s;
    cin>>s;
    node st[4*s.length()+1];
    build_tree(s,st,0,s.length()-1,0);
    lli q,l,r;
    cin>>q;
    while(q--){
        cin>>l>>r;
        node ans = RMQ(st,l,r,0,s.length()-1,0);
        cout<<ans.total<<"\n";
    }

}
