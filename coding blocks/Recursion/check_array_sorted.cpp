#include<iostream>
using namespace std;

bool isArraySorted(int *arr, int n, int i){
    if(i==n){
        return 1;
    }
    if(arr[i] < arr[i-1]){
        return 0;
    }
    else{
        return isArraySorted(arr,n,i+1);
    }
}

bool isArraySorted2(int arr[], int n){
    if(n==1){
        return 1;
    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        return isArraySorted2(arr+1,n-1);
    }
}

int main(){
    int arr[] = {1,2,1,2,1,0,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    isArraySorted(arr,n,1)?cout<<"Yes\n":cout<<"No\n";
    
    isArraySorted2(arr,n)?cout<<"Yes":cout<<"No";

}