#include<bits/stdc++.h>
using namespace std;

int floorsqrt(int n){
    int ans,h=n/2,l=0,m;
    while(l<=h){
        m=(l+h)/2;
        int sq = m*m;
        if(sq==n){
            ans=m;
            return m;
        }
        if(n>sq){
            ans=m;
           l=m+1;
        }
        else
            h=m-1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    cout<<"floor sqrt = "<<floorsqrt(n);
}

