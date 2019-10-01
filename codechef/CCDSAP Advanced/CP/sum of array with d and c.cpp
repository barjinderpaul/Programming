#include<bits/stdc++.h>
using namespace std;
int summ(int a[],int low,int high){
    int m = (low+high)/2;
    if(low==high)
        return a[low];
    return summ(a,low   ,m)+summ(a,m+1,high);



}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //int sum=0;
    cout<<summ(a,0,n-1);
}
