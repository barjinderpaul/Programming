//searching
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int value,t,n,numberToFind;
	cin>>t;
	while(t-- > 0){
		cin>>n;
		vector<int> a;
		for(int i=0;i<n;i++)
			{
			cin>>value;
			a.push_back(value);
			}
		cin>>numberToFind;
		sort(a.begin(),a.end()); //sorting because binary search needs sorting
		cout<<endl<<"sorted array";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		if(binary_search(a.begin(),a.end(),numberToFind))
			{
			cout<<"element found at :";
			cout<<lower_bound(a.begin(),a.end(),numberToFind) - a.begin()<<endl;
	
			}	
		else
			cout<<"Next Higher element found at "<<lower_bound(a.begin(),a.end(),numberToFind) - a.begin() <<endl;
		
	}
}
