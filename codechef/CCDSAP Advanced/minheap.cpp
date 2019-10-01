#include<bits/stdc++.h>
using namespace std;

void min_heap(int a[],int i,int n){
    int lchild = 2*i;
    int rchild = 2*i+1;
    int smallest;
    if(lchild<=n && a[lchild]<a[i])
        smallest=lchild;
    else
        smallest=i;
    if(rchild<=n && a[rchild]<a[smallest])
        smallest = rchild;
    if(smallest!=i){
        swap(a[i],a[smallest]);
        min_heap(a,smallest,n);
    }
}

void build_minheap(int a[],int n){
    for(int i=n/2;i>=1;i--)
        min_heap(a,i,n);
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    cout<<"before min heap "<<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    build_minheap(a,n);
    cout<<"After min heap " <<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";

}
