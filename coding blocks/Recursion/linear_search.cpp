#include<iostream>
using namespace std;

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

int main(){
    int arr[] = {1,23,4,2,132,3,2232};
    int toFind = 232;
    linear_search(arr,(sizeof(arr)/sizeof(arr[0])),toFind)?cout<<"Element present":cout<<"Element not present";
}