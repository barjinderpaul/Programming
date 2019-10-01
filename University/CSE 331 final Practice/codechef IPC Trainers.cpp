#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    lli t,n,d,di,ti,si;
    cin>>t;
    while(t--){
        cin>>n>>d;
        lli totalsum=0;
        priority_queue<pair<lli,lli> >pq;
        for(int i=0;i<n;i++){
            cin>>di>>ti>>si;
            totalsum+=(ti*si);
            pq.push({si,ti});
        }
        lli sum=0;
        cout<<"total sum - "<<totalsum<<"\n";
        while(!pq.empty() && d>0){
            d-=1;
            lli psi = pq.top().first;
            lli pti = pq.top().second;
            cout<<"psi , pti = "<<psi<<" "<<pti<<"\n";
            pq.pop();
            if(pti>0){
                sum+=psi;
                pti-=1;
                if(pti>0)
                    pq.push({psi,pti}),cout<<"Pushed psi\n";
            }
        }
        cout<<"sum = "<<sum<<"\n";
        cout<<totalsum-sum<<"\n";
    }
}

