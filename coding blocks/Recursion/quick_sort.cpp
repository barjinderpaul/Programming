#include<iostream>
using namespace std;

int partition(int arr[], int start, int end){
    int pivot = arr[end];
    int i = start-1;
    int j = start;
    for(;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[end]);
    static int counter = 0;
    cout<<"for iteration = "<<++counter<<"\n";
     cout<<"start and end=  "<<start<<" "<<end<<"\n";
    for(int i = start ; i<=end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return i+1; 
}

void quick_sort(int arr[], int start, int end){
    if(start>=end){
        return;
    }
    int pivot = partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}

int main(){
    // int arr[] = {5,4,3,2,1};
    // int arr[] = {2,1,5,6,7,5,8};
    int arr[] = {1,2,3,4,5};
 
    int n = sizeof(arr)/sizeof(arr[0]);

    quick_sort(arr,0,n-1);   

    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
}