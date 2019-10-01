#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

void fastExp(lli base, lli exp, lli mod){
    lli res=1;
    while(exp>0){
        if(exp&1)   //exp%3==1
            res = (res*base)%mod;
        base = (base*base)%mod;
        exp = exp>>1;   //exp/=2;
    }
    cout<<res;
}

int main(){
    lli base,exp,mod;
    cin>>base>>exp>>mod;
    fastExp(base,exp,mod);
}

/*
    When you see the question regarding powers or something,
    try to always make them in the formula : 2^n-1 or something like this.
    it might be separate for odd and even n;
*/
