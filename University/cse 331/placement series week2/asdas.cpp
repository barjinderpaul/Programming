// C++ implementation to count subsequences having 
// maximum distinct elements 
#include <bits/stdc++.h> 
using namespace std; 
  
typedef unsigned long long int ull; 
  
// function to count subsequences having 
// maximum distinct elements 
ull countSubseq(int arr[], int n) 
{ 
    // unordered_map 'um' implemented as 
    // hash table 
    unordered_map<int, int> um; 
  
    ull count = 1; 
  
    // count frequency of each element 
    for (int i = 0; i < n; i++) 
        um[arr[i]]++; 
  
    // traverse 'um' 
    for (auto itr = um.begin(); itr != um.end(); itr++) 
  
        // multiply frequency of each element 
        // and accumulate it in 'count' 
        count *= (itr->second); 
  
    // required number of subsequences 
    return count; 
} 
  
// Driver program to test above 
int main() 
{ 
    int arr[] = { 1, 1, 1 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Count = "
         << countSubseq(arr, n); 
    return 0; 
} 
