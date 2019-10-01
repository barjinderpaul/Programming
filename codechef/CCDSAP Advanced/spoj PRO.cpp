#include<bits/stdc++.h>
#define lli long long int
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
    lli val,k,n,sum=0;
    cin>>n;
    multiset<lli>ms;
    while(n--){
        //cout<<"before \n";
        //for(lli x:ms){
         //   cout<<x<<" ";
       // }
        //cout<<"\n";
        cin>>k;
        for(lli i=0;i<k;i++){
            cin>>val;
            ms.insert(val);
        }
        auto it = ms.begin();
        multiset<lli>::reverse_iterator it2 = ms.rbegin();
        //cout<<"it, it2 = "<<*it<<" "<<*it2<<"\n";
        sum+=(*it2-*it);
        ms.erase(it);
        it2++;
        auto newit = ms.end();
        newit--;
        ms.erase(newit);
        //cout<<"after \n";
        //for(lli x:ms){
         //   cout<<x<<" ";
        //}
        //cout<<"\n";

    }
    cout<<sum;
}
