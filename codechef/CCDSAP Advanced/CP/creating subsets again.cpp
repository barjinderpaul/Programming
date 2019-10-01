#include<bits/stdc++.h>
using namespace std;

void subsets(int a[],int i,int n,int h[],int c){
    if(i==n){
        for(int k=0;k<c;k++)
            cout<<h[k];
        cout<<"\n";
    }
    else{
        h[c] = a[i];
        subsets(a,i+1,n,h,c+1);
        subsets(a,i+1,n,h,c);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int h[n];
    subsets(a,0,n,h,0);
}
