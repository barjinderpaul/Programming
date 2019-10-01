#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int,char>mp;
    string s="ROYGBIV";
    for(int i=0;i<s.length();i++)
        mp[i] = s[i];
    int j=0;
    for(int i=0;i<n;i++){
        if(i<7)
            cout<<s[i];
        else{
            cout<<mp[(j+3)%4];
            j+=1;
        }
    }
}
