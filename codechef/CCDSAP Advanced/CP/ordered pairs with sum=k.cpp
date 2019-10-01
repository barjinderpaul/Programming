#include<bits/stdc++.h>
using namespace std;

//correct it;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int i=0,j=n-1;
    int k,flag=0,c=0;
    cin>>k;
    while(i<j){
        if(a[i]+a[j]==k){
            i++;
            c++;
        }
        if(a[i]+a[j]>k)
            j--;
        else if(a[i]+a[j]<k)
            i++;
    }
    cout<<c;
}
