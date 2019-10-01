/*    //Primes upto n using sieve; SPOJ TDKPRIME; O(nlogn)

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;
vector<bool>primes(100000001,true);
ll a[100000001];

void calculate(){
    ll n = 100000000;

    //optimized sieve;
    for(int i=4;i<=n;i+=2)
        primes[i]=false;
    for(int i=3;i*i<=n;i+=2){
        if(primes[i]){
            for(int j=i*i;j<=n;j+=(2*i))
                primes[j]=false;
        }
    }
    int j=0;
    a[0]=2;
    for(int i=3;i<=n;i+=2)
        if(primes[i])
            a[++j]=i;
}

int main(){
    fast;
    calculate();
    ll q,k;
    cin>>q;
    while(q--){
        cin>>k;
        cout<<a[k-1]<<"\n";
    }

}
*/

/*    //Number of divisors of each number O(nlogn) Sieve;
#include<bits/stdc++.h>
using namespace std;

void calculate(int n){
    //number of divisors of each number till N;

    int divisors[n+1]={0};
    int j=0;
    vector<bool>primes(n+1,true);
    primes[0] = primes[1] = false;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j+=i){
            divisors[j]++;
        }
    }

    cout<<"Number of divisors of each number - \n";
    for(int i=1;i<=n;i++){
        cout<<"Number = "<<i<<" count of divisors = "<<divisors[i]<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    calculate(n);
}

*/

/*    //Segmented Sieve; Prime in intervals; SPOJ Print

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;

void segmentedSieve(ll l, ll r){
    ll sq = sqrt(r);
    ll primes[sq+1];
    bool arr[sq+1];
    for(int i=0;i<=sq;++i)
        arr[i]=1;

    //sieve;
    int j=0;
    for(int i=2;i<=sq;i++){
        if(arr[i]){
            primes[j++]=i;
            for(int k = i*i ;k<=sq;k+=i)
                arr[k]=0;
        }
    }

    int diff = r-l+1;
    ll ar[diff];
    for(int i=0;i<diff;i++)
        ar[i]=1;

    //j stores number of primes in range l-r;
    for(int i=0;i<j;i++){
        int div = l/primes[i];
        div*=primes[i];
        while(div<=r){
            if(div>=l && primes[i]!=div){
                ar[div-l]=0;
            }
            div+=primes[i];
        }
    }

    //printing primes;
    for(int i=0;i<diff;i++){
        if(ar[i] && (i+l)!=1)
            cout<<i+l<<"\n";
    }
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        segmentedSieve(l,r);
   }
}

*/

    //Segmented Sieve  SPOJ - PRIME1;

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void segmented_sieve(ll l, ll r){
    ll sq = sqrt(r);
    ll primes[sq+1];
    bool arr[sq+1];
    for(int i=0;i<=sq;i++)
        arr[i]=1;
    int j=0;
    for(int i=2;i<=sq;i++){
        if(arr[i]){
            primes[j++]=i;
            for(int k = i+i ;k<=sq;k+=i)
                arr[k]=0;
        }
    }

    int diff = (r-l+1);
    ll ar[diff];
    for(int i=0;i<diff;i++)
        ar[i]=1;

    for(int i=0;i<j;i++){
        int div = l/primes[i];
        div*=primes [i];
        while(div<=r){
            if(div>=l && div!=primes[i])
                ar[div-l]=0;
            div+=primes[i];
        }
    }

    for(int i=0;i<diff;i++){
        if(ar[i] && i+l!=1)
            cout<<i+l<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        segmented_sieve(l,r);
    }

}
