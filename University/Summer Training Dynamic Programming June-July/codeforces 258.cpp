#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    string s;
    cin>>s;
    //binary string taken;
//    cout<<"S = "<<s<<"\n";
    int flag=0;
    string f="";
    for(int i=0;i<s.length();i++){
        if(s[i]=='0' && flag==0){
            flag=1;
            continue;
        }
       f+=s[i];
    }
    if(flag==0)
        for(int i=0;i<f.length()-1;i++)
            cout<<f[i];
    else
        cout<<f;
}
