#include <bits/stdc++.h> 
using namespace std; 

const int number = 1000001; 
int arr[number + 1]; 

void primes() 
{ 
    bool prime[number + 1]; 
    for(int i=0;i<number+1;i++)
        prime[i]=true;

    for (int p = 2; p * p <= number; p++) { 
        if (prime[p] == true) { 
            for (int i = p * 2; i <= number; i += p) 
                prime[i] = false; 
        } 
    } 


    arr[0] = arr[1] = 0; 
    for (int p = 2; p <= number; p++) { 
        arr[p] = arr[p - 1]; 
        if (prime[p]) 
            arr[p]++; 
    } 
} 

int returnAns(int L, int R) 
{ 
    return arr[R] - arr[L - 1]; 
} 

int main() 
{ 
    int L,R,t;
    cin>>t;
    primes(); 
    while(t-- > 0){
    cin>>L>>R;
    cout << returnAns(L, R) << endl; 

    }
    return 0; 
} 

