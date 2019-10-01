#include<bits/stdc++.h>
using namespace std;

int minCost(vector<int>&v){
	int sum=0,totalSum=0;
	sort(v.begin(),v.end(),greater<int>());
	sum+=(v[v.size()-1] + v[v.size()-2]);
	v.pop_back();
	v.pop_back();
	totalSum+=sum;
	while(v.size()!=0){
		sort(v.begin(),v.end(),greater<int>());
		sum+=v[v.size()-1];
		totalSum+=sum;
		v.pop_back();
	}
	return totalSum;
}

int main(){
	int n,value;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
		{
		cin>>value;
		v.push_back(value);
		}
	cout<<minCost(v);
}
