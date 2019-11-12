#include<bits/stdc++.h>
using namespace std;

void generate_power_sets(string s, int index, int n, string curr="") {
    if(index == n) {
        cout<<curr<<"\n";
        return;
    }
    generate_power_sets(s,index+1,n,curr+s[index]);
    generate_power_sets(s,index+1,n,curr);
}

void generate_power_sets_array(int *arr, int index, int n, vector<int>v, long &sumOfAllSubsets) {
    if(index==n) {
        int sum = 0;
        cout<<"subset - ";
        for(auto x:v){
            cout<<x<<" ";
            sum+=x;
        }
        sumOfAllSubsets+=sum;
        cout<<"sum of subset = "<<sum;
        cout<<"\n";

        return;
    }
    v.push_back(arr[index]);
    generate_power_sets_array(arr,index+1,n,v,sumOfAllSubsets);
    v.pop_back();
    generate_power_sets_array(arr,index+1,n,v,sumOfAllSubsets);
}

int main(){
    string s;
    cin>>s;
    cout<<"Generating subsets\n";
    generate_power_sets(s,0,s.size());

    cout<<"Enter array size";
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<int>v;
    cout<<"Generating array subsets\n";
    long sumOfAllSubsets = 0;
    generate_power_sets_array(ar,0,n,v,sumOfAllSubsets);
    cout<<"Sum of all subsets = "<<sumOfAllSubsets<<"\n";
}