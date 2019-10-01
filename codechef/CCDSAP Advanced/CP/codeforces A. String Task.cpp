#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    string v="aoyeui";
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        char c = tolower(s[i]);
        size_t f = v.find(c);
        if(f==string::npos)
            cout<<"."<<c;
    }

}
