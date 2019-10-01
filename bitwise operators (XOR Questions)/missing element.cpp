#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,sum=0,value;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++){
		cin>>value;
		a.push_back(value);
		sum+=value;
	}
	cout<<* max_element(a.begin(),a.end()) ;


		cout<<"missing element" << (n*(n+1))/2 - sum;
}
