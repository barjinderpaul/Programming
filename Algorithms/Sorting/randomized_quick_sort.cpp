#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

void shuffle(int arr[], int n){
    srand(time(NULL));
    int i;
    for(i = n-1;i>0;i--){
        int j = rand() % (i+1);
        swap(arr[i],arr[j]);
    }
}

int partition(int arr[], int start, int end){
    int i = start-1;
    int j = start;
    int pivot = arr[end];
    for(;j<end;j++){
        if(arr[j] <= pivot){
            i++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[i+1],arr[end]);
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
    int arr[] = {1,2,3,4,5}; //Worst case going to get shuffled
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Original Array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    shuffle(arr,n);

    cout<<"Shuffled array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    quick_sort(arr,0,n-1);
    cout<<"Sorted array\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}