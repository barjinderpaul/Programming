#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
map<int,int>mp;

bool isPrime(lli n){
    if(n<=1) return false;
    if(n<=3) return true;
    if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
        if(n%i==0 || n%(i+2)==0)
            return false;
    return true;
}

void sieve(int n){
    vector<int>v;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++) {
        if (prime[p] == true) {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
    for (int p=2; p<=n; p++)
       if (prime[p])
            v.push_back(p);
    //cout<<"size = "<<v.size()<<"\n";
    for(int i=0;i<v.size()-1;i++){
        mp[v[i]]=v[i+1];
        //cout<<"mp present = "<<mp[v[i]]<<"\n";
    }
    mp[v[v.size()-1]]=-1;
}

int main(){
    fast;
    lli n,m;
    sieve(100);
    cin>>n>>m;
    if(!isPrime(m))
        cout<<"NO";
    else if(mp[n]!=m){
        //cout<<"mp[n] = "<<mp[n];
        cout<<"NO";
    }
    else
        cout<<"YES";


}
