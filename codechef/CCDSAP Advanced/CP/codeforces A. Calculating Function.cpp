#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n;
    cin>>n;
    if(n%2==0){
        n/=2;
        //cout<<"n - "<<n<<"\n";
        lli odd = (n*(2*1 + (n-1)*2))/2;
        odd*=-1;
        //cout<<"odd = "<<odd<<"\n";
        lli even = (n*(2*2 + (n-1)*2))/2;
        //cout<<"even = "<<even<<"\n";
        if(odd<0 && even<0)
            cout<<n;
        else
            cout<<odd+even;

    }
    else{
        n/=2;
        //cout<<"n = "<<n<<"\n";
        lli odd = ((n+1)*(2*1 + ( (n+1)-1)*2))/2;
        odd*=-1;
        //cout<<"odd = "<<odd<<"\n";
        lli even = (n*(2*2 + (n-1)*2))/2;
        //cout<<"even = "<<even<<"\n";
        cout<<odd+even;

    }

}
