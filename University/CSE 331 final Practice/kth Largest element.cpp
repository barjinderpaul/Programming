#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long int lli;
using namespace std;
int main(){
    fast;
    lli t,n,val,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        lli s=0;
        priority_queue<lli,vector<lli>, greater<lli> >minHeap;
        for(int i=0;i<n;i++){
            cin>>val;
            if(minHeap.size()<k){
                minHeap.push(val);
            }
            else{
                lli t = minHeap.top();
                minHeap.pop();
                minHeap.push(max(val,t));
            }

        }
        stack<lli>st;
        while(!minHeap.empty()){
            lli val = minHeap.top();
            minHeap.pop();
            st.push(val);
        }
        while(!st.empty()){
            lli t =st.top();
            st.pop();
            cout<<t<<" ";
        }
    cout<<"\n";
    }
}
