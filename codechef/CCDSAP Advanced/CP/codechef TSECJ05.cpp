#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli t,n,k;
    cin>>t;
    while(t--){
        priority_queue<lli,vector<lli>,greater<lli> >pq;
        cin>>k>>n;
        lli val;
        for(int i=0;i<n;i+=1){
            cin>>val;
            if(pq.size()<k)
                pq.push(val);
            else{
                lli t = pq.top();
                pq.pop();
                lli m = max(t,val);
                pq.push(m);
            }
            if(pq.size()!=k)
                cout<<"-1 ";
            else
                cout<<pq.top()<<" ";
        }
        cout<<"\n";
    }
}
