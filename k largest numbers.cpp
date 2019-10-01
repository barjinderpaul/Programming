#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,value,i;
	vector<int> numbers;
	cout<<"enter n ";
	cin>>n;
	for(int i=0;i<n;i++)
	{	
		cout<<endl<<"enter value"<<endl;
		cin>>value;
		numbers.push_back(value);
	}
	sort(numbers.begin(),numbers.end());
	cout<<"Enter value of k"<<endl;
	cin>>k;
	i=numbers.size()-1;
	while(k>0){
		cout<<numbers[i]<<" ";
		i--;
		k--;
	}	
}
