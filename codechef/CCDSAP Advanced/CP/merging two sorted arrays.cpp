#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,8,12,16,20};
    int arr2[5] ={2,9,11,17,21};
    int arr3[10];
    merge(arr,arr+5,arr2,arr2+5,arr3);
    for(int i=0;i<10;i++)
        cout<<arr3[i]<<" ";

}
