#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1;
    int k,flag=0;
    cin>>k;
    while(i<j){
        if(a[i]+a[j]==k){
            flag=1;
            break;
        }
        if(a[i]+a[j]>k)
            j--;
        else if(a[i]+a[j]<k)
            i++;
    }
    if(flag)
        cout<<"yes";
    else
        cout<<"no";
}
