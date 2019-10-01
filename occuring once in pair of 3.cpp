#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int> a;
	int n,value;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>value;
			a.push_back(value);
		}
	for(int i=0;i<3;i++)
		a.erase(unique(a.begin(),a.end()),a.end());
	for(int i=0;i<a.size();i++)
		cout<<a[i];
}
