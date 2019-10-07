#include<iostream>
using namespace std;

bool binary_search(int arr[] , int toFind, int low, int high){
    if(low > high){
        return 0;
    }
    int mid = (low+high)/2;
    if(arr[mid] == toFind){
        return 1;
    }
    else if(arr[mid]<toFind){
        binary_search(arr,toFind,mid+1,high);
    }
    else{
        binary_search(arr,toFind,low,mid-1);
    }
}

int main(){
    int arr[] = {1,2,3,21,23,343,45454,23232};
    int n = sizeof(arr)/sizeof(arr[0]);
    int toFind = 212;

    binary_search(arr,toFind,0,n-1)?cout<<"Element Present" : cout<<"Element not present";
}