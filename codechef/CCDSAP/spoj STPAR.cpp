#include<bits/stdc++.h>
using namespace std;
int main(){
	int input;
	while(1){
		stack<int>s;
		vector<int>v;
		int flag=0,check;
		cin>>input;
		if(input==0)
			return 0;
		int a[input];
		for(int i=0;i<input;i++){
			cin>>a[i];
		}
		for(int i=0;i<input;i++){
			if(i==input-1){
				v.push_back(a[i]);
				break;
			}
				
			if(a[i]>a[i+1]){
				s.push(a[i]);
			}else{
				v.push_back(a[i]);
			}
		}
		//cout<<"vector before "<<endl;
		//for(int i=0;i<v.size();i++)
		//	cout<<v[i]<<" ";
		//cout<<endl;
		while(!s.empty()){
			v.push_back(s.top());
			s.pop();
		}
	//	cout<<"vector"<<endl;
	//	for(int k=0;k<v.size();k++)
	//		cout<<v[k]<<" ";
	//	cout<<endl;
	//	cout<<v.size()<<endl;
		for(int i=0;i<v.size();i++){
			//cout<<"i , i+1 "<<i<<" "<<i+1<<endl;
			//cout<<"a[i],a[i+1]"<<a[i]<<" "<<a[i+1]<<endl;
			if(i==v.size()-1)
				break;
			if( v[i+1] < v[i] ){
			//	cout<<v[i+1]<<" "<<v[i]<<endl;
				cout<<"no"<<endl;
				flag=1;
				break;
			}
		}
		if(flag!=1)
			cout<<"yes"<<endl;
		
				
	}
}

