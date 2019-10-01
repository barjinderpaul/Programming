#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,value;
	cin>>n;
	vector<int>a;
	for(int i=0;i<n;i++){
		
		cin>>value;
		a.push_back(value);
		
		}
	sort(a.begin(),a.end());
	int count=0,diff;
	for(int i=0;i<n;i+=2){
		diff = abs(a[i]-a[i+1]);
		count+=diff;
	}
	cout<<count;
}
