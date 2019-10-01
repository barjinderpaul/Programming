#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
#define mod 1000000007
using namespace std;
typedef long long  lli;

lli fastExp(lli base, lli exp){
    lli res=1;
    while(exp>0){
        //cout<<res<<"\n";
        if(exp%2==1)
            res = (res*base)%mod;
        base = (base*base)%mod;
        exp/=2;
    }
    //cout<<"Res = "<<res<<"\n";
    return res;
}

int main(){
    lli t,n;
    fast;
    //f(N) = 2ceil((N+1)/2) + 2floor((N+1)/2) - 2, for any N
    fast;
    cin>>t;
    while(t--){
        cin>>n;
        n++;
        lli exp1 = n/2;
        //cout<<"exp1, = "<<(n+1)/2 <<" "<<ceil((n+1)/2)<<"\n";
        lli exp2 = n-exp1;
        //cout<<"exp1,exp2= "<<exp1<<" "<<exp2<<"\n";
        lli fin = fastExp(2,exp1)+fastExp(2,exp2)-2;
        cout<<(int)fin%mod<<"\n";
    }
}
