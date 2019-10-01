#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     long int n,sum=0;
    long int i=1;
     cin>>n;
     for(i=0;i<=n;i++){
        sum=sum+i;
     }
     long int modd=sum%1000000007;
     cout<<modd;
     return 0;
   
}
