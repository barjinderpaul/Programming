#include<iostream>
using namespace std;

void merge(int arr[], int n, int start, int end){
    int mid = (start+end)/2;
    int i = start;
    int j = mid+1;
    int k = start;
    int temp[n];
    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }

    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }

    for(int i=start;i<=end;i++){
        arr[i] = temp[i];
    }

}

void merge_sort(int arr[], int n, int start, int end){
    if(start==end){
        return;
    }
    int mid = (start+end)/2;
    merge_sort(arr,n,start,mid);
    merge_sort(arr,n,mid+1,end);
    merge(arr,n,start,end);
}

int main(){
    // int arr[] = {5,4,23,2,1};
    // int arr[] = {3123,123,21,312,4,412,41,2222};
    // int arr[] = {1,2,3,4,5};
    // int arr[] = {5,4,3,2,1};
    int arr[] = {-1,-2,-3,-4,-5,-5,0,-2412};

    
    int n = sizeof(arr)/sizeof(arr[0]);

    merge_sort(arr,n,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }
}