#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    string s,s2;
    cin>>s;
    cin>>s2;
    if(s==s2)
        cout<<-1;
    else
        s.length()>s2.length()?cout<<s.length():cout<<s2.length();
}
