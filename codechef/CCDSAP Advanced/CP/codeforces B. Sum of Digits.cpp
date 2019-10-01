
/*
    c++ not working;
    done in python:
    traversal in a string and updating string to the new sum and again traversing
    while len(newstring)!=1
*/

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef int64_t lli;
lli digits(lli n){
    lli s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    //cout<<"s = "<<s<<"\n";
    return s;
}
int main(){
    lli n;
    cin>>n;
    if(n<=9)
        cout<<0;
    else{
        lli dig=n,c=0;
        while(dig>=10){
            dig=digits(dig);
            c++;
        }
        cout<<c;
    }
}
