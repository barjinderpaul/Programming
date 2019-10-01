#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		int *a = new int[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		if( (n-1) % 2 == 0){
			for(int i=0;i<n;i++){
				if((n-1-i) == i){
						cout<<a[n-1-i]<<" ";
						break;
				}
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
		}
		else
			for(int i=0;i<n;i++){
				if((n-1-i) - i == 1) {
						cout<<a[n-1-i]<<" "<<a[i];
						break;
				}
				cout<<a[n-1-i]<<" "<<a[i]<<" ";
			}
			cout<<endl;
	}
		
}
