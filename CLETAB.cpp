#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,tables,m;
	cin>>t;
	while(t--){
		cin>>tables>>m;
		int n=tables;
		int a[n];
		vector<int> sitting;
		for(int i=1;i<=m;i++){
			cin>>a[i];
		}
		int count=0;
		if(m==tables){
			cout<<0<<endl;
		}else{
			for(int j=1;j<=m;j++){
				if(sitting.size()<tables){
					if(!binary_search(sitting.begin(),sitting.end(),a[j])){
						sitting.push_back(a[j]);
						count+=1;
					}
					else
						continue;
				}
				else{
					cout<<"a[j] = "<<a[j]<<endl;
					if(!binary_search(sitting.begin(),sitting.end(),a[j])){
						sitting.push_back(a[j]);
						auto it=sitting.begin()+1;
						sitting.erase(it);
						count+=1;
					}

				}
			}
		}
		cout<<count<<endl;
	}
}
