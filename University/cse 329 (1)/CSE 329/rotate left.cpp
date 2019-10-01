#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,rotateBy,value;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>value;
		a.push_back(value);
	}
	cin>>rotateBy;
	rotate(a.begin(),a.begin()+rotateBy,a.end());
	cout<<"After rotating " <<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"right rotate "<<endl;
	rotate(a.begin(),a.begin()+a.size()-rotateBy,a.end());
	cout<<"After rotating " <<endl;
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
		
}
