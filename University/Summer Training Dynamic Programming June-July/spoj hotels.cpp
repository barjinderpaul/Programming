#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int maxx = -1;
    int i=0,j=0;
    int partialsum=0;
    while(j<n){
        //cout<<"k = "<<k<<"\n";
        cout<<" before i,j, partialsum = "<<i<<" "<<j<<" "<<partialsum<<"\n";
        if(partialsum==m){
            maxx = partialsum;
            break;
        }
        if(partialsum + a[j] < m){
            partialsum += a[j];
            j++;
        }
        else if(partialsum + a[j] > m){
            maxx = max(maxx,partialsum);
            partialsum -= a[i];
            i++; j++;
            partialsum+=a[j];

        }

       // cout<<" after i,j, partialsum = "<<i<<" "<<j<<" "<<partialsum<<"\n";

    }
    cout<<maxx;

}
