#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int64_t len;
	vector<int64_t> happ;
	int64_t val;
	bool allneg=true;
	while(n--){
		cin>>len;
		for(int i=0;i<len;i++){
			cin>>val;
			if(val>0)
				allneg=false;
			happ.push_back(val);
		}
			
	}
	sort(happ.begin(),happ.end());
	//cout<<"elements of vector"<<endl;
	//for(auto x:happ){
//		cout<<x<<" ";
//	}
	//cout<<" "<<endl;
	if(allneg){
		cout<<happ[happ.size()-1];
	}else{
		int64_t total=0,count=0;
		int flag=1;
		for(int64_t i=happ.size()-1;i>=0;i--){
			if(count<k){
				int64_t tempTotal = total;
			//	cout<<"in if "<<endl;
			//	cout<<"happ i = "<<happ[i]<<endl;
				total+=happ[i];
				count+=1;
				if(total<tempTotal){
				//	cout<<"in break"<<endl;
				//	cout<<"total,temptotal"<<total<<" "<<tempTotal<<endl;
					flag=0;
					total-=happ[i];
					break;
				}
			}
		}
		cout<<total;
	}
}
