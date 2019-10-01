	#include<bits/stdc++.h>
	using namespace std;
	int main(){
			int t,n;
			cin>>t;
			while(t-->0){
				int count=0,flag1=0,flag2=0,a1,a2,count2=0;
				char c1,c2,c3,c4;
				cin>>n;
				string s1,s2;
				cin>>s1;
				cin>>s2;
				for(int i=0;i<n;i++){
					if(s1[i] != s2[i] && flag1==0){
						c1 = s1[i];
						c2 = s2[i];
						a1=i;
						count+=1;
						flag1=1;
						continue;
					}
					if(s1[i] != s2[i] && flag2==0){
						c3 = s1[i];
						c4 = s2[i];
						a2=i;
						count+=1;
						flag2=1;
						continue;
					}
					
					if(s1[i] != s2[i]){
							count+=1;
						}
					else
						count2+=1;
				}
					//cout<<"c1 = "<<count<<endl;
					if(count>3){				
						cout<<"NO"<<endl;
						continue;
					}
					if(count==3 && c1==c4 && c2==c3 ){
							cout<<"YES"<<endl;
							continue;
					}
					if(count==2 || count==0 || count==1 || count2%2==0){
						cout<<"YES"<<endl;
						continue;
					}
					else
						cout<<"NO"<<endl;
					
			}
	}
