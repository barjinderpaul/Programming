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
int getmax(int a[],int n){
    if(n==0)
        return -1;
    return a[1];
}
void extractmax(int a[],int n){
    int maxx = a[1];
    a[1] = a[n]; //swapping last element to pos 1
    n-=1;
    max_heapify(a,1,n);

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

    cout<<"before building = "<<endl;
    for(int i=0;i<=n;i++)
        cout<<a[i]<<" ";
    cout<<"\n";
    buildheap(a,n);
    cout<<"after building = "<<endl;
    for(int i=0;i<=n;i++)
        cout<<a[i]<<" ";

    cout<<"extracting max \n";
    cout<<"max = "<<getmax(a,n)<<"\n";
    extractmax(a,n);
    cout<<"after extracting elements = \n";
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";

}

