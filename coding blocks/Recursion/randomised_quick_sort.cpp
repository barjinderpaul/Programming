
/*
Randomised quick sort to keep the complexity to O(NLogN) 
because in worst case(already sorted array), quick sort goes to O(N^2)
*/


#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void shuffle_array(int arr[], int end){

    srand(time(NULL));

    int i,j;
    for(i=end;i>0;i--){
        j = rand() % (i+1);
        swap(arr[i],arr[j]);
    }

}

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
    return i+1;
}

void quick_sort(int arr[], int start, int end){
    if(start >= end){
        return;
    }
    int pivot = partition(arr,start,end);
    quick_sort(arr,start,pivot-1);
    quick_sort(arr,pivot+1,end);
}

int main(){
    // int arr[] = {1,2,3,4,5};
    int arr[] = {5,2,1,4,3};

    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"original array ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    //shuffling array;
    shuffle_array(arr,n-1);
    cout<<"randomly shuffled array ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    quick_sort(arr,0,n-1);

    cout<<"sorted array ";
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

}