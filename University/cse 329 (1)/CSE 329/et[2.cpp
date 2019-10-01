#include<bits/stdc++.h>
using namespace std;
 uint64_t main(){
 	uint64_t n;
 	cin>>n;
 	uint64_t a[n];
 	for(uint64_t i=0;i<n;i++)
 		cin>>a[i];
 	sort(a,a+n);
 	uint64_t largest = a[0]; 
    for (uint64_t i = 1; i <n; i++) 
        largest = __gcd(a[i],largest); 
    cout<<largest; 
}

