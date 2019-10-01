#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,count=0;
	uint64_t d;
	cin>>n>>d;
	uint64_t a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	stable_sort(a,a+n);
	for(int i=1;i<n;i++){
		if(a[i] - a[i-1] <= d){
			count+=1;
			i+=1;
		}
	}
	cout<<count;
}
