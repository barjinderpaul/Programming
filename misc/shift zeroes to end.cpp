#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> v1;
	vector<int> v2;
	int n,value;
	cout<<"Enter value of n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>value;
			if(value == 0){
					v2.push_back(value);
				}
				else{
					v1.push_back(value);
			}
		}
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	for(int i=0;i<v2.size();i++)	
		cout<<v2[i]<<" ";
}
