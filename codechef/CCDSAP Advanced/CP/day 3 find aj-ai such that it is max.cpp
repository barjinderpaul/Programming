#include<bits/stdc++.h>
using namespace std;

void findSubMax(int a[],int n){
    int minn=INT_MAX,maxx=INT_MIN;
    for(int i=0;i<n;i++){
      //  cout<<"a[i]= "<<a[i]<<"\n";
        if(a[i]>maxx)
            maxx=a[i];
        if(a[i]<minn)
            minn=a[i];
    }
    //cout<<maxx<<" "<<minn;
    cout<<"max a[j]-a[i] = "<<maxx-minn;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    findSubMax(a,n);
}
