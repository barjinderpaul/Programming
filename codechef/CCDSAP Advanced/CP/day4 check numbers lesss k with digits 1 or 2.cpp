#include<bits/stdc++.h>
using namespace std;

void sirset(int x,int k){
    if(x<k){
        if(x>0)
            cout<<x<<" ";
        sirset(x*10+1,k);
        sirset(x*10+2,k);
    }
}

int main(){
    int k;
    cin>>k;
    sirset(0,k);
}
