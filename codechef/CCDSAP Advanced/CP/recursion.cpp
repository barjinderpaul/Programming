#include<bits/stdc++.h>
using namespace std;

int poww(int n,int k){
    if(k==0)
        return 1;
    else
        return n*poww(n,k-1);
}

void subsets(int a[],int n,int i,int h[],int c){
    if(i==n){
        int s = sizeof(h)/h[0];
        cout<<"size of h  = "<<s<<"\n";
        for(int k=0;k<c;k++)
            cout<<h[k]<<" ";
        cout<<"\n";
    }
    else{
        h[c]=a[i];
        subsets(a,n,i+1,h,c+1);
        subsets(a,n,i+1,h,c);
    }

}


int main(){
    int n=2;
    //cout<<poww(n,2);
    int a[3] = {1,2,3};
    int h[3];
    subsets(a,3,0,h,0);
}
