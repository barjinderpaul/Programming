#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,k,value;
	cin>>t;
	while(t--){
		int count=0;
		cin>>n;
		vector<int> numbers;
		for(int i=0;i<n;i++){
			cin>>value;
			numbers.push_back(value);
		}
		cin>>k;
		sort(numbers.begin(),numbers.end());
		numbers.erase(unique(numbers.begin(),numbers.end()),numbers.end());
		/*
		cout<<endl<<"elements = "<<endl;
		for(int i=0;i<numbers.size();i++)
			cout<<numbers[i]<< " ";
		cout<<endl;
		*/
		for(int i=0;i<n-1;i++)
			{
			if(binary_search(numbers.begin()+i+1,numbers.end(),numbers[i]+k))
				{
				count++;
				//cout<<"numbers[i] + k = "<<numbers[i]<<" " <<k<<endl;
				}
			if(numbers.size()==0)
				{count++;
				break;
				}
		}
		cout<<"count = "<<count<<endl;
	}
}
