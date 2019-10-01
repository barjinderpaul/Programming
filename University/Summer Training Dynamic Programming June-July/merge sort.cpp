#include<bits/stdc++.h>
using namespace std;

void disp(int a[], int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

void mergeArray(int arr[], int a, int b, int c, int d){
    int t[1000];
    int i=a,j=c,k=0;
    while(i<=b && j<=d){
        if(arr[i]<arr[j])
            t[k++] = arr[i++];
        else
            t[k++] = arr[j++];
    }

    while(i<=b){
        t[k++] = arr[i++];
    }

    while(j<=d){
        t[k++] = arr[j++];
    }

    for(i=a,j=0;i<=d;i++,j++)
        arr[i] = t[j];

}


void mergeSort(int a[], int low, int high){
    if(low<high){
        int mid = (low+high)/2;
        mergeSort(a,low,mid);
        mergeSort(a,mid+1,high);
        mergeArray(a,low,mid,mid+1,high);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    mergeSort(a,0,n-1);
    disp(a,n);
}
