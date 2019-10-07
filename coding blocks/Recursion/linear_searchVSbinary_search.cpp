#include<iostream>
#include<algorithm>
#include<chrono>

using namespace std;
using namespace std::chrono;

bool linear_search(int arr[], int n, int toFind){
    if(n==0){
        return 0;
    }
    if(arr[0]==toFind) {
        return 1;
    }
    else{
        return linear_search(arr+1,n-1,toFind);
    }
}

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
    int n=100000;
    
    int arr[n];
    for(int i=0;i<100000;i++)
        arr[i]=i;

    int toFind = 99999;

    auto linearSearchStart = high_resolution_clock::now();
    bool l = linear_search(arr,n,toFind);
    auto linearSearchEnd = high_resolution_clock::now();
    auto linearSearchDuration = duration_cast<microseconds>(linearSearchEnd - linearSearchStart);


    sort(arr,arr+n); //binary_search requires search space to be sorted;
    auto binarySearchStart = high_resolution_clock::now();
    bool b = binary_search(arr,toFind,0,n-1);
    auto binarySearchEnd = high_resolution_clock::now();
    auto binarySearchDuration = duration_cast<microseconds>(binarySearchEnd - binarySearchStart);
    
    cout<<"l,b = "<<l<<" "<<b<<"\n";

    cout<<"Time took by linear search = "<<linearSearchDuration.count()<<"\n";
    cout<<"Time took by binary search = "<<binarySearchDuration.count()<<"\n";



}