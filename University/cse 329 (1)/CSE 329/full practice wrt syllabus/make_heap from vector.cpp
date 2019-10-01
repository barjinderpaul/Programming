#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int input;
	vector<int> heapVector;
	for(int i=0;i<n;i++){
		cin>>input;
		heapVector.push_back(input);
	}
	//making heap;
	make_heap(heapVector.begin(),heapVector.end());
	//heap made;
	cout<<"max element ";
	cout<<heapVector.front();
	
	//creating min heap;
}
