#include<bits/stdc++.h>
using namespace std;

void upper_boundd(int a[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        //cout<<"l , h , m = "<<l<<" " <<h<<" "<<m<<"\n";
        if(a[m]<=k)
            l=m+1;
        else
            h=m-1;
    }
    //cout<<"l = "<<l<<"\n";
    cout<<a[l];
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k;
    cin>>k;
    upper_boundd(a,n,k);
}
