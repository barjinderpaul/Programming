#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long  sum=0,n;
    int m=1000000007;
    
    cin>>n;
	
		sum+=(n*(n+1)%m)/2;
		
	

	 	cout<<sum;
		return 0;
}
