#include<iostream>
using namespace std;

void bubble_sort(int arr[], int n, int j){
    if(n==0){
        return;
    }
    if(j==n-1){
        return;
    }
    
    if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubble_sort(arr,n,j+1);
    bubble_sort(arr,n-1,0);

}

int main(){
    int arr[] = {2,24,124,1241241,1,2,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubble_sort(arr,n,0);
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}