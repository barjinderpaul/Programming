#include<bits/stdc++.h>
using namespace std;

int getMax(vector<int> &a){
		return a[0];
}
int extractMax(vector<int>&a){
	auto it=a.begin();
	a.erase(it);
	return a[0];	
}
int insert(vector<int> &a,int value){
		a.push_back(value);
}
void display(vector<int> &a){
	for(auto x:a){
		cout<<x<<" ";
	}
} 

int main(){
	int n,value;
	cin>>n;
	vector<int> a;
	cout<<"Enter elements";
	while(n--){
		cin>>value;
		insert(a,value);
	}
	sort(a.begin(),a.end(),greater<int>());
	cout<<endl;
	display(a);
	cout<<endl;
	cout<<"max element = "<<getMax(a)<<endl;
	cout<<"after max extracted"<<extractMax(a)<<endl;
	
	
}
