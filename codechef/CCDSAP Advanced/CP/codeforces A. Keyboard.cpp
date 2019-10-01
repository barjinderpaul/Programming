#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    fast;
    char ch;
    map<char,char>r;
    map<char,char>l;
    string s1="qwertyuiop",s2="asdfghjkl;",s3="zxcvbnm,./";
    for(int i=1;i<s1.length();i++){
        r[s1[i]]=s1[i-1];
        r[s2[i]]=s2[i-1];
        r[s3[i]]=s3[i-1];
    }
    for(int i=0;i<s1.length()-1;i++){
        l[s1[i]]=s1[i+1];
        l[s2[i]]=s2[i+1];
        l[s3[i]]=s3[i+1];
    }
    cin>>ch;
    string s;
    cin>>s;
    if(ch=='R'){
        for(int i=0;i<s.length();i++)
            cout<<r[s[i]];
    }
    else{
        for(int i=0;i<s.length();i++)
            cout<<l[s[i]];
    }
}
