#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    int n;
    cin>>n;
    string s;
    int a[27]={0};
    cin>>s;
    for(int i=0;i<s.length();i++)
        a[tolower(s[i])-'a']++;
    for(int i=0;i<26;i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";

}
