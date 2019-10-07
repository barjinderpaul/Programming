#include<iostream>
using namespace std;

void merge(int arr[], int start, int end,int n){
    cout<<"Start,end = "<<start<<" "<<end<<"\n";
    int mid = (start+end)/2;
    int i = start;
    int j = mid+1;
    int k = start;
    //  int temp[2*(end-start+1)];
    int temp[n];
    while(i<=mid && j<=end){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
  
    //Left Out Elements
    while(i<=mid){
        temp[k++] = arr[i++];
    }
    while(j<=end){
        temp[k++] = arr[j++];
    }

    for(int i = start;i<=end;++i){
        arr[i] = temp[i];
    }

}

void merge_sort(int arr[] , int start, int end,int n){
    if(start==end){ //Single element
        return;
    }
    int mid = (start+end)/2;
    cout<<"a "<<start<<" "<<mid<<" "<<end<<"\n";
    merge_sort(arr,start,mid,n);
    cout<<"b "<<start<<" "<<mid<<" "<<end<<"\n";
    merge_sort(arr,mid+1,end,n);
    cout<<"c "<<start<<" "<<mid<<" "<<end<<"\n";
    merge(arr,start,end,n);
}

int main(){
    // int arr[] = {123,24,1,4124,1,521,2,234,234,2,4,3,3,2,4,2,3,4,3,4,3,3,23,4,24,4,24,4,3,432432};
    int arr[] = {5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // // int n = 10000;
    // // int arr[10000];
    // // for(int i=10000;i>0;i--){
    //     arr[i] = i;
    // }
    merge_sort(arr,0,n-1,n);

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }

}