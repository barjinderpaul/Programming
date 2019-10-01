#include<bits/stdc++.h>
using namespace std;


void max_heapify(int a[],int i,int n){
    int largest;
    int lChild = 2*i;
    int rchild = 2*i+1;
    if(lChild<=n && a[lChild]>a[i])
        largest=lChild;
    else
        largest=i;
    if(rchild<=n && a[rchild]>a[largest])
        largest=rchild;
    if(largest!=i){
        swap(a[i],a[largest]);
        max_heapify(a,largest,n);
    }
}

void buildheap(int a[],int n){
//cout<<n<<"\n";
    for(int i=n/2;i>=1;i--)
            max_heapify(a,i,n);
}

void heap_sort(int a[],int n){
    int heap_size = n;
    buildheap(a,n);
    for(int i=n;i>=2;i--){
        swap(a[1],a[i]);
        heap_size-=1;
        max_heapify(a,1,heap_size);
    }
}

int main(){
    //cout<<"hello world";
    int n;
    cin>>n;
    int a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    //heap sort
    heap_sort(a,n);
    cout<<"after sorting = "<<endl;
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
}

