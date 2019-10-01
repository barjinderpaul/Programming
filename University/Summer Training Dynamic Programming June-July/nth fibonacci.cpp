#include<bits/stdc++.h>
using namespace std;
#define maxx 1000001
#define mod 1000000007
int fib[maxx];
int main(){
    fib[0]=0;
    fib[1]=1;
    for(int i=2;i<maxx;i++){
        fib[i] = (fib[i-1] + fib[i-2]) > mod ? (fib[i-1] + fib[i-2])%mod  : fib[i-1] + fib[i-2];
    }
    int x;
    cin>>x;
    cout<<"xth fib = "<<fib[x];
}
