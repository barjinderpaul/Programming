#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define inf 10000007
typedef long long int lli;

using namespace std;

int main(){
    fast;
    lli t,n;
    cin>>t;
    while(t--){
        cin>>n;
        lli a[n];
        lli maxx = -1;
        bool allSame=1,onePresent=0;
        lli firstGCD,firstGcdIndex=-1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>maxx)
                maxx = a[i];
            if(i>0){
                if(a[i]!=a[i-1])
                    allSame=0;
            }
            if(a[i]==1)
                onePresent=1;
            if(a[i]!=maxx)
                firstGCD = a[i],firstGcdIndex=i;
        }
        if(onePresent && maxx!=1){
            //cout<<"onepresent\n";
            cout<<maxx+1<<"\n";
        }
        else if(onePresent && allSame){
            cout<<2<<"\n";
        }
        else if(allSame){
            cout<<2*a[0]<<"\n";
        }
        else{
           for(int i=0;i<n;i++){
               if(i==firstGcdIndex || a[i]==maxx)
                    continue;
                if(firstGCD==1){
                    break;
                }
                else{
                    firstGCD = __gcd(firstGCD,a[i]);
                }
           }
           cout<<firstGCD+maxx<<"\n";
        }
    }
}
