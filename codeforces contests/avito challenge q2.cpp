#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,value;
	cin>>n;
	bool one = false;
	bool zero = false;
	bool div = false;
	vector<int>v;
	for(int i=0;i<n;i++){
		cin>>value; //while input check 1
		v.push_back(value);
		if(value!=1)
			one = true;
		if(value==0)
			zero = true;
		if(value!=0 && n%value!=0)
			div = true;
	}
	//cout<<v[0];
	if(one==false){
		//cout<<"in one";
		if(v.size()==1 && v[0]==1){
			cout<<"Impossible";
			return 0;
			}
		else{
		
		cout<<"Possible"<<endl;
		for(int i=1;i<=n;i++)
			cout<<i<<" ";
		return 0;
		}
	}
	sort(v.begin(),v.end());
	vector<int> v2;
//	cout<<" b v"<<v[0];
	v2 = v;
//	cout<<"a v"<<v[0];
	v2.erase( unique( v2.begin(), v2.end() ), v2.end() );
//	cout<<"v2 size , v2[0]"<<v2.size()<<v2[0]<<endl;
	
	 if(v2.size()==1 && v2[0]!=1 && v2[0]!=0){
		if(v2[0]==n)
			cout<<"Impossible";
		
		else if(div==true)
			cout<<"Impossible";
	/*	else if( n/v2[0]!=v2[0]){
			cout<<"Possible"<<endl;
			int ccc=1,counttt=0,flag=0;
			for(int i=1;i<=2;i++){
				if(flag==0){
					while(counttt!=n-v2[0]){
							cout<<ccc<<" ";
							counttt+=1;
						}
				}
				if(flag==1){
					while(counttt!=v2[0])
						{
							cout<<ccc<<" ";
							counttt+=1;
						}
				}
				ccc+=1;
				counttt=0;
				flag=1;
			}
		}	
		*/	
		else{	
			cout<<"Possible"<<endl;
	//		cout<<"in new";
			int countt=0,aw=1;
			vector<int>v4;
			int cc = v[0];
			for(int i=1;i<=(n/v[0]);i++){
				while(countt!=cc){
					cout<<aw<<" ";
					countt+=1;
				}
				aw++;
				countt=0;
			}
			
		}	
	}
	
	else if(v2.size()==n && (v[0]!=0 && v.size()==1) )
		cout<<"Impossible";
	else if(v2.size()>1 && zero==true)
		cout<<"Impossible";
	else if(v.size()==1 &&v[0]==0 ){
		cout<<"Possible"<<endl;
		cout<<1;
	}
	else if(v2.size()==1 && v2[0]==0)
	{
		cout<<"Possible"<<endl;
		int aq=1;
		for(int i=1;i<=n;i++)
			cout<<aq<<" ";
	}
	else{
		cout<<"Possible"<<endl;
		vector<int>v3;
		int first = v[0];
		int aa=0,zz=1;
	//	cout<<v[0];
		while(aa!=first){
			v3.push_back(zz);
			aa++;
		}
	
		for(int i=1;i<n;i++){
			if(v[i]!=v[i-1]){
				zz+=1;
				int ab=0;
				while(ab!=v[i]){
					v3.push_back(zz);
					ab++;
				}
					
			}
			
				
		}
		for(int k=0;k<v3.size();k++){
			cout<<v3[k]<<" ";
		}
	}
	
}
