#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;
typedef int64_t lli;
int main(){
    ////fast;
    lli n;
    cin>>n;
    lli a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //sort(a,a+n);
    lli *minn = min_element(a,a+n);
    lli *maxx = max_element(a,a+n);
    lli c=0;
    for(int i=0;i<n;i++)
        if(a[i]>*minn && a[i] < *maxx)
            c++;
    cout<<c;

}
