#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    lli n;
    cin>>n;
    string s;
    cin>>s;
    int ones=0,z=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='0')
            z++;
        else
            ones++;
    }
    cout<<s.length()-2*min(z,ones);

}

