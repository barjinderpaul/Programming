#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,value,index,search;
	cin>>n>>search;
	vector<int>v;
	cin>>value;
	v.push_back(value);
	for(int i=1;i<n;i++){
		cin>>value;
		v.push_back(value);
		if(v[i]<v[i-1])
			index=i-1;
	}
	cout<<"Index = "<<index<<endl;
	if(search>v[0])
		cout<<binary_search(v.begin(),v.end()-index,search);
	else
		cout<<binary_search(v.begin()+index+1,v.end(),search);
		
}
