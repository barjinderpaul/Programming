#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
vector<bool>v(100000001,true);
lli arr[100000001];
void calculate(){
    lli n = 100000000;
    v[0] = v[1] = false;
    for(int i=4;i<=n;i+=2)
        v[i] = false;   //setting all even false at once;
    for(int i=3;i*i<=n;i+=2){
        if(v[i]){
            for(int j=i*i;j<=n;j+=(2*i))
                v[j]=false;
        }
    }
    int j=0;
    arr[0]=2;
    for(int i=3;i<=n;i+=2)
        if(v[i])
            arr[++j]=i;
    //for(int i=1;i<=j;i+=100)
     //   cout<<arr[i-1]<<"\n";
    //cout<<"total primes till 10^8 = "<<j<<"\n";

}

int main(){
    fast;
    calculate();
    lli t,k;
    cin>>t;
    while(t--){ //spoj tdkprime code here;
        cin>>k;
        cout<<arr[k-1]<<"\n";
    }
}
