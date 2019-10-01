#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

/* //Checking Prime
bool isPrime(lli n){
    if(n<=1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2==0))
            return 0;
    }
    return 1;

}

int main(){
    lli n;
    cin>>n;
    if(isPrime(n))
        cout<<"Yes Prime\n";
    else
        cout<<"Not prime\n";
}

*/

/*    //generating primes with sieve of eratosthenes;
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<int>Primes;

void generatePrimes(lli n){
    bool prime[n+1];
    for(int i=0;i<=n;i++)
        prime[i]=true;
    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int p=i*i;p<=n;p+=i)
                prime[p]=false;
        }
    }
    for(int i=2;i<=n;i++)
        if(prime[i])
            Primes.push_back(i);
}


int main(){
    lli n;
    cin>>n;
    generatePrimes(n);
    for(int i=0;i<Primes.size();i++)
        cout<<Primes[i]<<" ";

}

*/

/*  //Difficult one
    //Generating primes using bitwise sieve;
    //Advantages : Takes less space and can generate large amount of primes;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef long long int lli;
#define MAX 86029000


unsigned flag[MAX>>6];

#define ifc(n) (flag[n>>6]&(1<<((n>>1)&31)))
#define isc(n) (flag[n>>6]|=(1<<((n>>1)&31)))
vector<long long int> primes;
void sieve(lli LMT) {
    primes.push_back(2);

    //cout<<2<<" " ;
    unsigned i, j, k;
    for(i=3; i<=LMT; i+=2){
        if(!ifc(i)){
            //cout<<i<<" ";
            primes.push_back(i);
            for(j=i*i, k=i<<1; j<MAX; j+=k)
                isc(j);
        }
    }
}

using namespace std;
typedef long long int lli;
int main(){
    fast;
    lli n;
    cin>>n;
    sieve(9257);
    lli val;
    while(n--){
        cin>>val;
        cout<<primes[val-1]<<"\n";;
    }

}

*/

    //Easy bitwise sieve;

const int SIZE = 10;
const int LIMIT = sqrt(SIZE)+1;

bitset<SIZE> prime;
void sieve() {
    prime.flip();
    prime[1]=0;
    for(int i=2;i<=LIMIT;i++) {
        if (prime[i])
            for(int j=2*i;j<SIZE;j+=i)
                prime[j]=0;
    }
}

bool isPrime(int n) {
    return prime[n];
}

int main(){
    sieve();
    int n;
    cin>>n;
    if(isPrime(n))
        cout<<"YES\n";
    else
        cout<<"No\n";

    cout<<prime;

}
