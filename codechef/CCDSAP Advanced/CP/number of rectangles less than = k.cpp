#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k,c=0;
    cin>>k;
    int i=0,j=n-1;
    while(i<j){
        if(a[i]*a[j]>k)
            j--;
        else if(a[i]*a[j]<=k){
            c+=( ((j-i)*2) +1 );
            i++;
        }
    }
    cout<<"count = "<<c;
}
