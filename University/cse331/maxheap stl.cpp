#include<bits/stdc++.h>
using namespace std;
void display_heap(vector<int> &a){
	for(auto x:a){
		cout<<x<<" ";
	}
	cout<<endl;
}
int getMax(vector<int> &a){
	return a.front();
}
int extractMax(vector<int> &a){
	pop_heap(a.begin(),a.end());
	auto it=a.begin();
	a.erase(it);
	make_heap(a.begin()+1,a.end());
	return a.front();
}
int main(){
	int n,value;
	cout<<"enter elements to make heap"<<endl;
	cin>>n;
	vector<int> a;
	make_heap(a.begin(),a.end());
	while(n--){
		cin>>value;
		a.push_back(value);
	}
	//display_heap(a);
	push_heap(a.begin(),a.end());
	display_heap(a);	
	cout<<"max = "<<getMax(a)<<endl;
	cout<<"after extracting = "<<extractMax(a)<<endl;
}
