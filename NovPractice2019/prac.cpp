#include<bits/stdc++.h>
using namespace std;

void generate_power_set(int *arr, int index, int n, int k, vector<int> v, vector<vector<int> >&ans){
    if(index == n){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
    }
    v.push_back(arr[index]);
    generate_power_set(arr,index+1,n,k,v,ans);
    v.pop_back();
    generate_power_set(arr,index+1,n,k,v,ans);
}

vector<vector<int> > combine(int A, int B) {
    int n = A;
    int k = B;
    int arr[n];
    cout<<"asdsa";
    cout<<"making array\n";
    for(int i=0;i<n;i++){
        arr[i] = i+1;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    vector<int>v;
    cout<<"\n";
    vector<vector<int> > ans;
    cout<<"calling function\n";
    generate_power_set(arr,0,n,k,v,ans);
    return ans;
}

int main(){
    vector<vector<int> > ans = combine(3,2);
}


