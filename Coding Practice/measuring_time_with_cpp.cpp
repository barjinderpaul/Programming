#include<iostream>
#include<chrono>
#include<algorithm>
#include<vector>

using namespace std;
using namespace std::chrono;

int main(){
    vector<long>v;
    auto startBeforeInsertion =  high_resolution_clock::now();
    for(long long i=500000;i>0;i--){
        v.push_back(i);
    }
    auto endAfterInsertion = high_resolution_clock::now();
    auto insertionDuration = duration_cast<microseconds>(endAfterInsertion - startBeforeInsertion);
    cout<<"Time taken to insert = "<<insertionDuration.count()<<" microseconds."<<"\n";

    auto beforeSorting = high_resolution_clock::now();
    sort(v.begin(),v.end());
    auto afterSorting = high_resolution_clock::now();
    auto sortingDuration = duration_cast<microseconds> (afterSorting - beforeSorting);
    cout<< "Time taken to sort = "<<sortingDuration.count()<<" microseconds";
}