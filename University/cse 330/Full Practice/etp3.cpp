#include <bits/stdc++.h> 
using namespace std; 
int countWays(int arr[], int m, int N) 
{ 
	int count[N + 1]; 
	memset(count, 0, sizeof(count)); 
	count[0] = 1; 
	for (int i = 1; i <= N; i++) 
		for (int j = 0; j < m; j++) 
			if (i >= arr[j]) 
				count[i] += count[i - arr[j]]; 
	return count[N]; 
	
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int n,k,res;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if( (res = countWays(a,n,k)) > 0)
			cout<<res<<endl;
		else
			cout<<"0"<<endl;
	}
	return 0; 
} 

