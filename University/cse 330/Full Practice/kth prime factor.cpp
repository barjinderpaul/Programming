#include<bits/stdc++.h> 
using namespace std; 
const int MAX = 10001; 

void sieveOfEratosthenes(int s[]) 
{ 
    vector <bool> prime(MAX+1, false); 
    for (int i=2; i<=MAX; i+=2) 
        s[i] = 2; 
    for (int i=3; i<=MAX; i+=2) 
    { 
        if (prime[i] == false) 
        { 
            s[i] = i; 
            for (int j=i; j*i<=MAX; j+=2) 
            { 
                if (prime[i*j] == false) 
                { 
                    prime[i*j] = true; 
                    s[i*j] = i; 
                } 
            } 
        } 
    } 
} 
int kPrimeFactor(int n, int k, int s[]) 
{ 
    while (n > 1) 
    { 
        if (k == 1) 
          return s[n]; 
        k--; 
        n /= s[n]; 
    } 
    return -1; 
} 
  
int main() 
{ 
    int s[MAX+1]; 
    memset(s, -1, sizeof(s)); 
    sieveOfEratosthenes(s); 
    int t,n,k;
    cin>>t;
    while(t--){
     cin>>n>>k; 
    cout << kPrimeFactor(n, k, s) << endl; 
    }
    return 0; 
} 
