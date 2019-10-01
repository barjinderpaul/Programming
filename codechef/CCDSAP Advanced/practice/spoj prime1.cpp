#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void segmentedSieve(lli n, lli m){
    lli sq = sqrt(m);
    int j=0;
    lli primes[sq+1];
    lli arr[sq+1];
    for(int i=0;i<=sq+1;i++)
        arr[i]=1;
    //cout<<"arr[1],0] = "<<arr[0]<<" "<<arr[1]<<"\n";
    for(int i=2;i<=sq;i++){
        if(arr[i]){
            primes[j] = i;
            j++;
            for(int k=i+i;k<=sq;k+=i){
                arr[k]=0;
            }
        }
    }
    //cout<<"j = "<<j<<"\n";
    int diff = (m-n+1);
    lli ar[diff];
    for(int i=0;i<diff;i++)
        ar[i]=1;
    for(int k=0;k<j;k++){
        int div = n/primes[k];
        div*=primes[k];
        while(div<=m){
            if(div>=n && primes[k]!=div)
                ar[div-n]=0;
            div+=primes[k];
        }
    }

    for(int i=0;i<diff;i++){
        if(ar[i] && (i+n)!=1)
            cout<<i+n<<"\n";
        }
    cout<<"\n";
}

int main(){
    fast;
    lli t;
    cin>>t;
    lli n,m;
    while(t--){
        cin>>n>>m;
        segmentedSieve(n,m);
    }
}

