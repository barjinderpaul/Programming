#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,entries;
	vector<int> myIntVector;
	cout<<"enter number of entries you wish to add in vector";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>entries;
		myIntVector.push_back(entries);
		cout<<"added "<<entries<<" to the vector "<<endl;
	}
	cout<<"size of vector " << myIntVector.size()<<endl;
	cout<<"capacity of vector " << myIntVector.capacity()<<endl;
	for(int i=0;i<myIntVector.size();i++){
		cout<<myIntVector[i];
	}
}
